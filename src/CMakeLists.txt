set (MATRYOSHKA_MAIN Matryoshka.cpp MatryoshkaUtil.cpp MatryoshkaParams.cpp MatryoshkaDAG.cpp IntervalScheduling.cpp)

include_directories( 
${Boost_INCLUDE_DIR}
${TOP_SOURCE_DIR}/include
)

link_directories(${Boost_LIBRARY_DIR})

add_executable(matryoshka ${MATRYOSHKA_MAIN})
target_link_libraries(matryoshka ${Boost_LIBRARIES} z)
