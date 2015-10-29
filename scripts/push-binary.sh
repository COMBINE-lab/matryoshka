echo -e "Preparing binary release\n=====================\n"

# create the binary directory
mkdir $HOME/Matryoshka-latest_ubuntu-12.04
mkdir $HOME/Matryoshka-latest_ubuntu-12.04/bin
mkdir $HOME/Matryoshka-latest_ubuntu-12.04/lib

# copy over the executable 
echo -e "Copying over the binary and Intel TBB libraries\n"
cp $TRAVIS_BUILD_DIR/bin/matryoshka $HOME/Matryoshka-latest_ubuntu-12.04/bin/
cp $TRAVIS_BUILD_DIR/lib/libtbb* $HOME/Matryoshka-latest_ubuntu-12.04/lib/

# copy other dependencies (shared libraries)
echo -e "Copying over other shared library dependencies\n"
bash $TRAVIS_BUILD_DIR/scripts/cpld.bash $TRAVIS_BUILD_DIR/bin/matryoshka $HOME/Matryoshka-latest_ubuntu-12.04/lib/
echo -e "Removing dangerous dependencies\n"
rm $HOME/Matryoshka-latest_ubuntu-12.04/lib/libc.so.6
rm $HOME/Matryoshka-latest_ubuntu-12.04/lib/ld-linux-x86-64.so.2
rm $HOME/Matryoshka-latest_ubuntu-12.04/lib/libdl.so.2

# now make the tarball
echo -e "Making the tarball\n"
cd $HOME
tar czvf Matryoshka-latest_ubuntu-12.04.tar.gz Matryoshka-latest_ubuntu-12.04

echo -e "Pushing the tarball to GitHub\n"
# Since it's currently unclear to me how to overwrite an asset via the GitHub
# API, the following code deletes the old asset, and uploads the new one in its place
# Get the previous asset id of the tarball
echo -e "Getting previous asset ID\n"
ASSETID=`curl -s -X GET https://api.github.com/repos/kingsfordgroup/matryoshka/releases/879142/assets | grep "\"id" | head -1 | awk '{gsub(/,$/,""); print $2}'`
# Delete the previous tarball
echo -e "Deleting previous asset\n"
curl -X DELETE -H "Authorization: token 4785c1bec9ac9661a574c333ebe97a9ec251399e" https://api.github.com/repos/kingsfordgroup/matryoshka/releases/assets/$ASSETID
# Upload the new tarball
echo -e "Uploading new asset\n"
curl -X POST --data-binary "@Matryoshka-latest_ubuntu-12.04.tar.gz" https://uploads.github.com/repos/kingsfordgroup/matryoshka/releases/879142/assets?name=Matryoshka-latest_ubuntu-12.04.tar.gz --header "Content-Type:application/gzip" -H "Authorization: token  4785c1bec9ac9661a574c333ebe97a9ec251399e"
echo -e "Done!\n"
