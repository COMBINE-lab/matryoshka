#ifndef ____main___H__
#define ____main___H__


#include <nuitka/helpers.hpp>

MOD_INIT_DECL( __main__ );

extern PyObject *_module___main__;
extern PyDictObject *_moduledict___main__;

class PyObjectGlobalVariable___main__
{
    public:
        explicit PyObjectGlobalVariable___main__( PyObject **dummy, PyObject **var_name )
        {
            assert( var_name );

            this->var_name = (Nuitka_StringObject **)var_name;
        }

        PyObject *asObject0() const
        {
            PyObject *result = GET_STRING_DICT_VALUE( _moduledict___main__, *this->var_name );

            if (likely( result != NULL ))
            {
                assertObject( result );

                return result;
            }

            result = GET_STRING_DICT_VALUE( dict_builtin, *this->var_name );

            if (likely( result != NULL ))
            {
                assertObject( result );

                return result;
            }

            PyErr_Format( PyExc_NameError, "global name '%s' is not defined", Nuitka_String_AsString( (PyObject *)*this->var_name ) );
            throw PythonException();
        }

        PyObject *asObject() const
        {
            return INCREASE_REFCOUNT( this->asObject0() );
        }

        PyObject *asObject0( PyObject *dict ) const
        {
            PyObject *result = PyDict_GetItem( dict, (PyObject *)*this->var_name );

            if ( result != NULL )
            {
                return result;
            }
            else
            {
                return this->asObject0();
            }
        }

        void del( bool tolerant ) const
        {
            int status = PyDict_DelItem( (PyObject *)_moduledict___main__, (PyObject *)*this->var_name );

            if (unlikely( status == -1 && tolerant == false ))
            {
                PyErr_Format( PyExc_NameError, "global name '%s' is not defined", Nuitka_String_AsString( (PyObject *)*this->var_name ) );
                throw PythonException();
            }
        }

        bool isInitialized( bool allow_builtins = true ) const
        {
            PyObject *result = GET_STRING_DICT_VALUE( _moduledict___main__, *this->var_name );

            if (likely( result ))
            {
                return true;
            }

            if ( allow_builtins )
            {
                result = GET_STRING_DICT_VALUE( dict_builtin, *this->var_name );

                return result != NULL;
            }
            else
            {
                return false;
            }
        }

    private:

        Nuitka_StringObject **var_name;
};

// Declarations from this module to other modules if any.


#endif
