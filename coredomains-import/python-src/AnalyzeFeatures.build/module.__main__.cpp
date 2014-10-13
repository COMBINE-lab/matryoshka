// Generated code for Python source for module '__main__'
// created by Nuitka version 0.4.4pre1

// This code is in part copyright 2012 Kay Hayen.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "nuitka/prelude.hpp"

#include "__modules.hpp"
#include "__constants.hpp"
#include "__helpers.hpp"

// The _module___main__ is a Python object pointer of module type.

// Note: For full compatability with CPython, every module variable access needs to go
// through it except for cases where the module cannot possibly have changed in the mean
// time.

PyObject *_module___main__;
PyDictObject *_moduledict___main__;

// The module level variables.
static PyObjectGlobalVariable___main__ _mvar___main___Domain( &_module___main__, &_python_str_plain_Domain );
static PyObjectGlobalVariable___main__ _mvar___main___Features( &_module___main__, &_python_str_plain_Features );
static PyObjectGlobalVariable___main__ _mvar___main_____doc__( &_module___main__, &_python_str_plain___doc__ );
static PyObjectGlobalVariable___main__ _mvar___main_____metaclass__( &_module___main__, &_python_str_plain___metaclass__ );
static PyObjectGlobalVariable___main__ _mvar___main___docopt( &_module___main__, &_python_str_plain_docopt );
static PyObjectGlobalVariable___main__ _mvar___main___main( &_module___main__, &_python_str_plain_main );
static PyObjectGlobalVariable___main__ _mvar___main___matplotlib( &_module___main__, &_python_str_plain_matplotlib );
static PyObjectGlobalVariable___main__ _mvar___main___np( &_module___main__, &_python_str_plain_np );
static PyObjectGlobalVariable___main__ _mvar___main___opts( &_module___main__, &_python_str_plain_opts );
static PyObjectGlobalVariable___main__ _mvar___main___plt( &_module___main__, &_python_str_plain_plt );
static PyObjectGlobalVariable___main__ _mvar___main___processPeaks( &_module___main__, &_python_str_plain_processPeaks );
static PyObjectGlobalVariable___main__ _mvar___main___processSignal( &_module___main__, &_python_str_plain_processSignal );

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Domain_of_module___main__(  );


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_function_4_main_of_module___main__( PyObject *_python_par___iterator, PyObjectLocalVariable &python_closure_l );


NUITKA_LOCAL_MODULE PyObject *impl_dictcontr_4_of_function_4_main_of_module___main__( PyObject *_python_par___iterator );


static PyObject *MAKE_FUNCTION_function_10_boundaryMidpoint_of_function_4_main_of_module___main__(  );


static PyObject *MAKE_FUNCTION_function_11_isValidLocus_of_function_4_main_of_module___main__( PyObjectSharedLocalVariable &python_closure_lastFeatPos, PyObjectSharedLocalVariable &python_closure_winDown, PyObjectSharedLocalVariable &python_closure_winUp );


// This structure is for attachment as self of function_11_isValidLocus_of_function_4_main_of_module___main__.
// It is allocated at the time the function object is created.
struct _context_function_11_isValidLocus_of_function_4_main_of_module___main___t
{
    // The function can access a read-only closure of the creator.
    PyObjectClosureVariable python_closure_lastFeatPos;
    PyObjectClosureVariable python_closure_winDown;
    PyObjectClosureVariable python_closure_winUp;
};

static void _context_function_11_isValidLocus_of_function_4_main_of_module___main___destructor( void *context_voidptr )
{
    _context_function_11_isValidLocus_of_function_4_main_of_module___main___t *_python_context = (_context_function_11_isValidLocus_of_function_4_main_of_module___main___t *)context_voidptr;



    delete _python_context;
}


static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_Domain_of_module___main__(  );


static PyObject *MAKE_FUNCTION_function_2_center_of_class_1_Domain_of_module___main__(  );


static PyObject *MAKE_FUNCTION_function_2_processPeaks_of_module___main__(  );


static PyObject *MAKE_FUNCTION_function_3_processSignal_of_module___main__(  );


static PyObject *MAKE_FUNCTION_function_4_main_of_module___main__(  );


static PyObject *MAKE_FUNCTION_function_9_isBoundary_of_function_4_main_of_module___main__(  );


static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_4_main_of_module___main__(  );


static PyObject *MAKE_FUNCTION_lambda_3_lambda_of_function_4_main_of_module___main__(  );


static PyObject *MAKE_FUNCTION_lambda_5_lambda_of_function_4_main_of_module___main__(  );


static PyObject *MAKE_FUNCTION_lambda_6_lambda_of_function_4_main_of_module___main__(  );


static PyObject *MAKE_FUNCTION_lambda_7_lambda_of_function_4_main_of_module___main__(  );


static PyObject *MAKE_FUNCTION_lambda_8_lambda_of_function_4_main_of_module___main__(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_class_1_Domain_of_module___main__(  )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalVariable _python_var___module__( _python_str_plain___module__ );
    PyObjectLocalVariable _python_var___init__( _python_str_plain___init__ );
    PyObjectLocalVariable _python_var_center( _python_str_plain_center );

    // Actual function code.
    _python_var___module__.assign0( _python_str_plain___main__ );
    _python_var___init__.assign1( MAKE_FUNCTION_function_1___init___of_class_1_Domain_of_module___main__(  ) );
    _python_var_center.assign1( MAKE_FUNCTION_function_2_center_of_class_1_Domain_of_module___main__(  ) );
    return _python_var_center.updateLocalsDict( _python_var___init__.updateLocalsDict( _python_var___module__.updateLocalsDict( PyDict_New() ) ) );
}


static PyObject *impl_function_1___init___of_class_1_Domain_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *_python_par_l )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );
    PyObjectLocalParameterVariableNoDel _python_var_l( _python_str_plain_l, _python_par_l );
    PyObjectLocalVariable _python_var_toks( _python_str_plain_toks );

    // Actual function code.
    static PyFrameObject *frame_function_1___init___of_class_1_Domain_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_function_1___init___of_class_1_Domain_of_module___main__ ) )
    {
        if ( frame_function_1___init___of_class_1_Domain_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_1___init___of_class_1_Domain_of_module___main__" );
#endif
            Py_DECREF( frame_function_1___init___of_class_1_Domain_of_module___main__ );
        }

        frame_function_1___init___of_class_1_Domain_of_module___main__ = MAKE_FRAME( _codeobj_4cdfcb35486aaeb95489f4f5567bfe06, _module___main__ );
    }

    FrameGuard frame_guard( frame_function_1___init___of_class_1_Domain_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_function_1___init___of_class_1_Domain_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 22 );
        _python_var_toks.assign1( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_l.asObject(), _python_str_plain_rstrip ) ).asObject() ) ).asObject(), _python_str_plain_split ) ).asObject() ) );
        frame_guard.setLineNumber( 23 );
        {
                PyObjectTemporary tmp_identifier( LOOKUP_SUBSCRIPT_CONST( _python_var_toks.asObject(), _python_int_0, 0 ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_chrom );
        }
        frame_guard.setLineNumber( 24 );
        {
                PyObjectTemporary tmp_identifier( TO_INT( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_toks.asObject(), _python_int_pos_1, 1 ) ).asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_start );
        }
        frame_guard.setLineNumber( 25 );
        {
                PyObjectTemporary tmp_identifier( TO_INT( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_toks.asObject(), _python_int_pos_2, 2 ) ).asObject() ) );
                SET_ATTRIBUTE( tmp_identifier.asObject(), _python_var_self.asObject(), _python_str_plain_stop );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_l.updateLocalsDict( _python_var_self.updateLocalsDict( _python_var_toks.updateLocalsDict( PyDict_New() ) ) );

        if ( frame_guard.getFrame0() == frame_function_1___init___of_class_1_Domain_of_module___main__ )
        {
           Py_DECREF( frame_function_1___init___of_class_1_Domain_of_module___main__ );
           frame_function_1___init___of_class_1_Domain_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *_fparse_function_1___init___of_class_1_Domain_of_module___main__( Nuitka_FunctionObject *self, PyObject *args, PyObject *kw )
{
    assert( PyTuple_Check( args ) );
    assert( kw == NULL || PyDict_Check( kw ) );

    Py_ssize_t args_size = PyTuple_GET_SIZE( args );
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    PyObject *_python_par_l = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_self == key )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_l == key )
            {
                if (unlikely( _python_par_l ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'l'" );
                    goto error_exit;
                }

                _python_par_l = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_l, key ) )
            {
                if (unlikely( _python_par_l ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'l'" );
                    goto error_exit;
                }

                _python_par_l = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__init__() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__init__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 0 ) );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_l != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'l'" );
             goto error_exit;
         }

        _python_par_l = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 1 ) );
    }


    return impl_function_1___init___of_class_1_Domain_of_module___main__( self, _python_par_self, _python_par_l );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_l );

    return NULL;
}
static PyObject *_mparse_function_1___init___of_class_1_Domain_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *args, PyObject *kw )
{
    Py_INCREF( _python_par_self );

    Py_ssize_t args_size = PyTuple_GET_SIZE( args );
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size + 1; // Count the self parameter already given as well.
    PyObject *_python_par_l = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "__init__() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_self == key )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_l == key )
            {
                if (unlikely( _python_par_l ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'l'" );
                    goto error_exit;
                }

                _python_par_l = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_l, key ) )
            {
                if (unlikely( _python_par_l ))
                {
                    PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'l'" );
                    goto error_exit;
                }

                _python_par_l = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "__init__() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "__init__() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "__init__() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "__init__() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_l != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "__init__() got multiple values for keyword argument 'l'" );
             goto error_exit;
         }

        _python_par_l = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 0 ) );
    }


    return impl_function_1___init___of_class_1_Domain_of_module___main__( self, _python_par_self, _python_par_l );

error_exit:;

    Py_XDECREF( _python_par_self );
    Py_XDECREF( _python_par_l );

    return NULL;
}


static PyObject *impl_function_2_center_of_class_1_Domain_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_self )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_self( _python_str_plain_self, _python_par_self );

    // Actual function code.
    static PyFrameObject *frame_function_2_center_of_class_1_Domain_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_function_2_center_of_class_1_Domain_of_module___main__ ) )
    {
        if ( frame_function_2_center_of_class_1_Domain_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_center_of_class_1_Domain_of_module___main__" );
#endif
            Py_DECREF( frame_function_2_center_of_class_1_Domain_of_module___main__ );
        }

        frame_function_2_center_of_class_1_Domain_of_module___main__ = MAKE_FRAME( _codeobj_45cd8c1e4bb0fefdb4a0a47611fe6ff6, _module___main__ );
    }

    FrameGuard frame_guard( frame_function_2_center_of_class_1_Domain_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_function_2_center_of_class_1_Domain_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 28 );
        {
            PyObjectTempKeeper1 op1;
            return BINARY_OPERATION_DIV( PyObjectTemporary( ( op1.assign( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_start ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_self.asObject(), _python_str_plain_stop ) ).asObject() ) ) ).asObject(), _python_int_pos_2 );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_self.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_function_2_center_of_class_1_Domain_of_module___main__ )
        {
           Py_DECREF( frame_function_2_center_of_class_1_Domain_of_module___main__ );
           frame_function_2_center_of_class_1_Domain_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *_fparse_function_2_center_of_class_1_Domain_of_module___main__( Nuitka_FunctionObject *self, PyObject *args, PyObject *kw )
{
    assert( PyTuple_Check( args ) );
    assert( kw == NULL || PyDict_Check( kw ) );

    Py_ssize_t args_size = PyTuple_GET_SIZE( args );
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_self = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "center() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_self == key )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "center() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "center() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "center() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "center() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "center() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "center() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "center() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "center() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "center() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "center() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "center() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "center() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "center() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "center() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "center() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_self != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "center() got multiple values for keyword argument 'self'" );
             goto error_exit;
         }

        _python_par_self = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 0 ) );
    }


    return impl_function_2_center_of_class_1_Domain_of_module___main__( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}
static PyObject *_mparse_function_2_center_of_class_1_Domain_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_self, PyObject *args, PyObject *kw )
{
    Py_INCREF( _python_par_self );

    Py_ssize_t args_size = PyTuple_GET_SIZE( args );
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size + 1; // Count the self parameter already given as well.
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "center() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_self == key )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "center() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_self, key ) )
            {
                if (unlikely( _python_par_self ))
                {
                    PyErr_Format( PyExc_TypeError, "center() got multiple values for keyword argument 'self'" );
                    goto error_exit;
                }

                _python_par_self = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "center() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "center() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "center() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "center() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "center() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "center() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "center() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "center() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "center() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "center() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "center() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "center() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "center() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }


    return impl_function_2_center_of_class_1_Domain_of_module___main__( self, _python_par_self );

error_exit:;

    Py_XDECREF( _python_par_self );

    return NULL;
}


static PyObject *impl_function_2_processPeaks_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_chrom, PyObject *_python_par_flist, PyObject *_python_par_domains, PyObject *_python_par_res )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_chrom( _python_str_plain_chrom, _python_par_chrom );
    PyObjectLocalParameterVariableNoDel _python_var_flist( _python_str_plain_flist, _python_par_flist );
    PyObjectLocalParameterVariableNoDel _python_var_domains( _python_str_plain_domains, _python_par_domains );
    PyObjectLocalParameterVariableNoDel _python_var_res( _python_str_plain_res, _python_par_res );
    PyObjectLocalVariable _python_var_firstFeatPos( _python_str_plain_firstFeatPos );
    PyObjectLocalVariable _python_var_lastFeatPos( _python_str_plain_lastFeatPos );
    PyObjectLocalVariable _python_var_vals( _python_str_plain_vals );
    PyObjectLocalVariable _python_var_avgVals( _python_str_plain_avgVals );
    PyObjectLocalVariable _python_var_f( _python_str_plain_f );
    PyObjectLocalVariable _python_var_idx( _python_str_plain_idx );
    PyObjectLocalVariable _python_var_maxIdx( _python_str_plain_maxIdx );
    PyObjectLocalVariable _python_var_norm( _python_str_plain_norm );

    // Actual function code.
    static PyFrameObject *frame_function_2_processPeaks_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_function_2_processPeaks_of_module___main__ ) )
    {
        if ( frame_function_2_processPeaks_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_2_processPeaks_of_module___main__" );
#endif
            Py_DECREF( frame_function_2_processPeaks_of_module___main__ );
        }

        frame_function_2_processPeaks_of_module___main__ = MAKE_FRAME( _codeobj_9dc3f027de29dc0cbf7b850431438629, _module___main__ );
    }

    FrameGuard frame_guard( frame_function_2_processPeaks_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_function_2_processPeaks_of_module___main__ ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 32 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper1 make_tuple1;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_flist.asObject(), _python_int_0, 0 ) ).asObject(), _python_str_plain_start ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_flist.asObject(), _python_int_neg_1, -1 ) ).asObject(), _python_str_plain_stop ) ).asObject(), _python_int_pos_1 ) ).asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_firstFeatPos.assign0( _python_tmp_element_1.asObject() );
            _python_var_lastFeatPos.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 35 );
        {
            PyObjectTempKeeper1 call3;
            _python_var_vals.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar___main___np.asObject0(), _python_str_plain_zeros ) ), CALL_FUNCTION_WITH_POSARGS( call3.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_lastFeatPos.asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 36 );
        {
            PyObjectTempKeeper1 call5;
            _python_var_avgVals.assign1( ( call5.assign( LOOKUP_ATTRIBUTE( _mvar___main___np.asObject0(), _python_str_plain_zeros ) ), CALL_FUNCTION_WITH_POSARGS( call5.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_lastFeatPos.asObject() ) ).asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 38 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_flist.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 38 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_f.assign0( _python_tmp_iter_value.asObject() );
                }
                {
                    frame_guard.setLineNumber( 40 );
                    PyObject *_python_tmp_inplace_target = _python_var_vals.asObject();
                    PyObjectTemporary _python_tmp_inplace_lower( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_start ) );
                    PyObjectTemporary _python_tmp_inplace_upper( BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_stop ) ).asObject(), _python_int_pos_1 ) );
                    {
                        PyObjectTempKeeper0 slice7;
                        PyObjectTempKeeper0 slice8;
                        {
                            PyObjectTemporary tmp_identifier( BINARY_OPERATION( PyNumber_InPlaceAdd, PyObjectTemporary( ( slice7.assign( _python_tmp_inplace_target ), slice8.assign( _python_tmp_inplace_lower.asObject() ), LOOKUP_SLICE( slice7.asObject0(), slice8.asObject0(), _python_tmp_inplace_upper.asObject() ) ) ).asObject(), _python_int_pos_1 ) );
                            PyObject *tmp_target = _python_tmp_inplace_target;
                            PyObject *tmp_lower = _python_tmp_inplace_lower.asObject();
                            SET_SLICE( tmp_identifier.asObject(), tmp_target, tmp_lower, _python_tmp_inplace_upper.asObject() );
                    }
                    }
                }

               CONSIDER_THREADING();
            }
        }
        {
            frame_guard.setLineNumber( 43 );
            PyObject *_tmp_python_tmp_for_iterator;
            {
                PyObjectTempKeeper1 make_tuple13;
                PyObjectTempKeeper1 op10;
                _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_POSARGS( LOOKUP_BUILTIN( _python_str_plain_xrange ), PyObjectTemporary( ( make_tuple13.assign( ( op10.assign( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_vals.asObject(), _python_str_plain_shape ) ).asObject(), _python_int_0, 0 ) ), BINARY_OPERATION_ADD( op10.asObject0(), _python_var_res.asObject() ) ) ), MAKE_TUPLE3( _python_int_0, make_tuple13.asObject0(), _python_var_res.asObject() ) ) ).asObject() ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 43 );
                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_2 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                    _python_var_idx.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 44 );
                {
                    PyObjectTempKeeper1 make_tuple17;
                    PyObjectTempKeeper0 op15;
                    _python_var_maxIdx.assign1( CALL_FUNCTION_WITH_POSARGS( LOOKUP_BUILTIN( _python_str_plain_min ), PyObjectTemporary( ( make_tuple17.assign( ( op15.assign( _python_var_idx.asObject() ), BINARY_OPERATION_ADD( op15.asObject0(), _python_var_res.asObject() ) ) ), MAKE_TUPLE2( make_tuple17.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_vals.asObject(), _python_str_plain_shape ) ).asObject(), _python_int_0, 0 ) ).asObject() ) ) ).asObject() ) );
                }
                frame_guard.setLineNumber( 45 );
                {
                    PyObjectTempKeeper0 op19;
                    _python_var_norm.assign1( BINARY_OPERATION_DIV( _python_float_1_0, PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op19.assign( _python_var_maxIdx.asObject() ), BINARY_OPERATION_SUB( op19.asObject0(), _python_var_idx.asObject() ) ) ).asObject(), _python_int_pos_1 ) ).asObject() ) );
                }
                frame_guard.setLineNumber( 50 );
                {
                    PyObjectTempKeeper1 op24;
                    PyObjectTempKeeper0 slice21;
                    PyObjectTempKeeper0 slice22;
                    {
                        PyObjectTemporary tmp_identifier( ( op24.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice21.assign( _python_var_vals.asObject() ), slice22.assign( _python_var_idx.asObject() ), LOOKUP_SLICE( slice21.asObject0(), slice22.asObject0(), _python_var_maxIdx.asObject() ) ) ).asObject(), _python_str_plain_sum ) ).asObject() ) ), BINARY_OPERATION_MUL( op24.asObject0(), _python_var_norm.asObject() ) ) );
                        PyObject *tmp_target = _python_var_avgVals.asObject();
                        PyObject *tmp_lower = _python_var_idx.asObject();
                        SET_SLICE( tmp_identifier.asObject(), tmp_target, tmp_lower, _python_var_maxIdx.asObject() );
                }
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 52 );
        {
            PyObjectTempKeeper0 make_tuple26;
            return ( make_tuple26.assign( _python_var_avgVals.asObject() ), MAKE_TUPLE2( make_tuple26.asObject0(), _python_var_vals.asObject() ) );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_res.updateLocalsDict( _python_var_domains.updateLocalsDict( _python_var_flist.updateLocalsDict( _python_var_chrom.updateLocalsDict( _python_var_norm.updateLocalsDict( _python_var_maxIdx.updateLocalsDict( _python_var_idx.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_avgVals.updateLocalsDict( _python_var_vals.updateLocalsDict( _python_var_lastFeatPos.updateLocalsDict( _python_var_firstFeatPos.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_2_processPeaks_of_module___main__ )
        {
           Py_DECREF( frame_function_2_processPeaks_of_module___main__ );
           frame_function_2_processPeaks_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *_fparse_function_2_processPeaks_of_module___main__( Nuitka_FunctionObject *self, PyObject *args, PyObject *kw )
{
    assert( PyTuple_Check( args ) );
    assert( kw == NULL || PyDict_Check( kw ) );

    Py_ssize_t args_size = PyTuple_GET_SIZE( args );
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_chrom = NULL;
    PyObject *_python_par_flist = NULL;
    PyObject *_python_par_domains = NULL;
    PyObject *_python_par_res = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "processPeaks() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_chrom == key )
            {
                if (unlikely( _python_par_chrom ))
                {
                    PyErr_Format( PyExc_TypeError, "processPeaks() got multiple values for keyword argument 'chrom'" );
                    goto error_exit;
                }

                _python_par_chrom = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_flist == key )
            {
                if (unlikely( _python_par_flist ))
                {
                    PyErr_Format( PyExc_TypeError, "processPeaks() got multiple values for keyword argument 'flist'" );
                    goto error_exit;
                }

                _python_par_flist = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_domains == key )
            {
                if (unlikely( _python_par_domains ))
                {
                    PyErr_Format( PyExc_TypeError, "processPeaks() got multiple values for keyword argument 'domains'" );
                    goto error_exit;
                }

                _python_par_domains = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_res == key )
            {
                if (unlikely( _python_par_res ))
                {
                    PyErr_Format( PyExc_TypeError, "processPeaks() got multiple values for keyword argument 'res'" );
                    goto error_exit;
                }

                _python_par_res = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_chrom, key ) )
            {
                if (unlikely( _python_par_chrom ))
                {
                    PyErr_Format( PyExc_TypeError, "processPeaks() got multiple values for keyword argument 'chrom'" );
                    goto error_exit;
                }

                _python_par_chrom = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_flist, key ) )
            {
                if (unlikely( _python_par_flist ))
                {
                    PyErr_Format( PyExc_TypeError, "processPeaks() got multiple values for keyword argument 'flist'" );
                    goto error_exit;
                }

                _python_par_flist = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_domains, key ) )
            {
                if (unlikely( _python_par_domains ))
                {
                    PyErr_Format( PyExc_TypeError, "processPeaks() got multiple values for keyword argument 'domains'" );
                    goto error_exit;
                }

                _python_par_domains = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_res, key ) )
            {
                if (unlikely( _python_par_res ))
                {
                    PyErr_Format( PyExc_TypeError, "processPeaks() got multiple values for keyword argument 'res'" );
                    goto error_exit;
                }

                _python_par_res = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "processPeaks() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 4 ))
    {
        if ( 4 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "processPeaks() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "processPeaks() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "processPeaks() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "processPeaks() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "processPeaks() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "processPeaks() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "processPeaks() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "processPeaks() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 4 ))
    {
        if ( 4 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "processPeaks() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "processPeaks() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "processPeaks() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "processPeaks() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 4 ? args_given : 4;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_chrom != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "processPeaks() got multiple values for keyword argument 'chrom'" );
             goto error_exit;
         }

        _python_par_chrom = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 0 ) );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_flist != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "processPeaks() got multiple values for keyword argument 'flist'" );
             goto error_exit;
         }

        _python_par_flist = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 1 ) );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_domains != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "processPeaks() got multiple values for keyword argument 'domains'" );
             goto error_exit;
         }

        _python_par_domains = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 2 ) );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_res != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "processPeaks() got multiple values for keyword argument 'res'" );
             goto error_exit;
         }

        _python_par_res = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 3 ) );
    }


    return impl_function_2_processPeaks_of_module___main__( self, _python_par_chrom, _python_par_flist, _python_par_domains, _python_par_res );

error_exit:;

    Py_XDECREF( _python_par_chrom );
    Py_XDECREF( _python_par_flist );
    Py_XDECREF( _python_par_domains );
    Py_XDECREF( _python_par_res );

    return NULL;
}


static PyObject *impl_function_3_processSignal_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_chrom, PyObject *_python_par_flist, PyObject *_python_par_domains, PyObject *_python_par_res )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_chrom( _python_str_plain_chrom, _python_par_chrom );
    PyObjectLocalParameterVariableNoDel _python_var_flist( _python_str_plain_flist, _python_par_flist );
    PyObjectLocalParameterVariableNoDel _python_var_domains( _python_str_plain_domains, _python_par_domains );
    PyObjectLocalParameterVariableNoDel _python_var_res( _python_str_plain_res, _python_par_res );
    PyObjectLocalVariable _python_var_firstFeatPos( _python_str_plain_firstFeatPos );
    PyObjectLocalVariable _python_var_lastFeatPos( _python_str_plain_lastFeatPos );
    PyObjectLocalVariable _python_var_vals( _python_str_plain_vals );
    PyObjectLocalVariable _python_var_valsInp( _python_str_plain_valsInp );
    PyObjectLocalVariable _python_var_avgVals( _python_str_plain_avgVals );
    PyObjectLocalVariable _python_var_f( _python_str_plain_f );
    PyObjectLocalVariable _python_var_idx( _python_str_plain_idx );
    PyObjectLocalVariable _python_var_maxIdx( _python_str_plain_maxIdx );
    PyObjectLocalVariable _python_var_norm( _python_str_plain_norm );
    PyObjectLocalVariable _python_var_avg( _python_str_plain_avg );

    // Actual function code.
    static PyFrameObject *frame_function_3_processSignal_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_function_3_processSignal_of_module___main__ ) )
    {
        if ( frame_function_3_processSignal_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_3_processSignal_of_module___main__" );
#endif
            Py_DECREF( frame_function_3_processSignal_of_module___main__ );
        }

        frame_function_3_processSignal_of_module___main__ = MAKE_FRAME( _codeobj_3043f609e2dd0a0c732273b02113e78a, _module___main__ );
    }

    FrameGuard frame_guard( frame_function_3_processSignal_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_function_3_processSignal_of_module___main__ ) == 2 ); // Frame stack
        {
            frame_guard.setLineNumber( 56 );
            PyObject *_tmp_python_tmp_source_iter;
            {
                PyObjectTempKeeper1 make_tuple1;
                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( make_tuple1.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_flist.asObject(), _python_int_0, 0 ) ).asObject(), _python_str_plain_start ) ), MAKE_TUPLE2( make_tuple1.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_flist.asObject(), _python_int_neg_1, -1 ) ).asObject(), _python_str_plain_stop ) ).asObject(), _python_int_pos_1 ) ).asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_firstFeatPos.assign0( _python_tmp_element_1.asObject() );
            _python_var_lastFeatPos.assign0( _python_tmp_element_2.asObject() );
        }
        frame_guard.setLineNumber( 59 );
        {
            PyObjectTempKeeper1 call3;
            _python_var_vals.assign1( ( call3.assign( LOOKUP_ATTRIBUTE( _mvar___main___np.asObject0(), _python_str_plain_zeros ) ), CALL_FUNCTION_WITH_POSARGS( call3.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_lastFeatPos.asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 60 );
        {
            PyObjectTempKeeper1 call5;
            _python_var_valsInp.assign1( ( call5.assign( LOOKUP_ATTRIBUTE( _mvar___main___np.asObject0(), _python_str_plain_zeros ) ), CALL_FUNCTION_WITH_POSARGS( call5.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_lastFeatPos.asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 61 );
        {
            PyObjectTempKeeper1 call7;
            _python_var_avgVals.assign1( ( call7.assign( LOOKUP_ATTRIBUTE( _mvar___main___np.asObject0(), _python_str_plain_zeros ) ), CALL_FUNCTION_WITH_POSARGS( call7.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_lastFeatPos.asObject() ) ).asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 63 );
            PyObjectTemporary _python_tmp_for_iterator( MAKE_ITERATOR( _python_var_flist.asObject() ) );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 63 );
                    PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_1 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                    _python_var_f.assign0( _python_tmp_iter_value.asObject() );
                }
                {
                    frame_guard.setLineNumber( 65 );
                    PyObject *_python_tmp_inplace_target = _python_var_vals.asObject();
                    PyObjectTemporary _python_tmp_inplace_lower( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_start ) );
                    PyObjectTemporary _python_tmp_inplace_upper( BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_stop ) ).asObject(), _python_int_pos_1 ) );
                    {
                        PyObjectTempKeeper1 op12;
                        PyObjectTempKeeper0 slice10;
                        PyObjectTempKeeper0 slice9;
                        {
                            PyObjectTemporary tmp_identifier( ( op12.assign( ( slice9.assign( _python_tmp_inplace_target ), slice10.assign( _python_tmp_inplace_lower.asObject() ), LOOKUP_SLICE( slice9.asObject0(), slice10.asObject0(), _python_tmp_inplace_upper.asObject() ) ) ), BINARY_OPERATION( PyNumber_InPlaceAdd, op12.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_value ) ).asObject() ) ) );
                            PyObject *tmp_target = _python_tmp_inplace_target;
                            PyObject *tmp_lower = _python_tmp_inplace_lower.asObject();
                            SET_SLICE( tmp_identifier.asObject(), tmp_target, tmp_lower, _python_tmp_inplace_upper.asObject() );
                    }
                    }
                }
                {
                    frame_guard.setLineNumber( 67 );
                    PyObject *_python_tmp_inplace_target = _python_var_valsInp.asObject();
                    PyObjectTemporary _python_tmp_inplace_lower( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_start ) );
                    PyObjectTemporary _python_tmp_inplace_upper( BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_stop ) ).asObject(), _python_int_pos_1 ) );
                    {
                        PyObjectTempKeeper1 op17;
                        PyObjectTempKeeper0 slice14;
                        PyObjectTempKeeper0 slice15;
                        {
                            PyObjectTemporary tmp_identifier( ( op17.assign( ( slice14.assign( _python_tmp_inplace_target ), slice15.assign( _python_tmp_inplace_lower.asObject() ), LOOKUP_SLICE( slice14.asObject0(), slice15.asObject0(), _python_tmp_inplace_upper.asObject() ) ) ), BINARY_OPERATION( PyNumber_InPlaceAdd, op17.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_f.asObject(), _python_str_plain_value2 ) ).asObject() ) ) );
                            PyObject *tmp_target = _python_tmp_inplace_target;
                            PyObject *tmp_lower = _python_tmp_inplace_lower.asObject();
                            SET_SLICE( tmp_identifier.asObject(), tmp_target, tmp_lower, _python_tmp_inplace_upper.asObject() );
                    }
                    }
                }

               CONSIDER_THREADING();
            }
        }
        {
            frame_guard.setLineNumber( 69 );
            PyObject *_tmp_python_tmp_for_iterator;
            {
                PyObjectTempKeeper1 make_tuple22;
                PyObjectTempKeeper1 op19;
                _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_POSARGS( LOOKUP_BUILTIN( _python_str_plain_xrange ), PyObjectTemporary( ( make_tuple22.assign( ( op19.assign( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_vals.asObject(), _python_str_plain_shape ) ).asObject(), _python_int_0, 0 ) ), BINARY_OPERATION_ADD( op19.asObject0(), _python_var_res.asObject() ) ) ), MAKE_TUPLE3( _python_int_0, make_tuple22.asObject0(), _python_var_res.asObject() ) ) ).asObject() ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 69 );
                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_2 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                    _python_var_idx.assign0( _python_tmp_iter_value.asObject() );
                }
                frame_guard.setLineNumber( 70 );
                {
                    PyObjectTempKeeper1 make_tuple26;
                    PyObjectTempKeeper0 op24;
                    _python_var_maxIdx.assign1( CALL_FUNCTION_WITH_POSARGS( LOOKUP_BUILTIN( _python_str_plain_min ), PyObjectTemporary( ( make_tuple26.assign( ( op24.assign( _python_var_idx.asObject() ), BINARY_OPERATION_ADD( op24.asObject0(), _python_var_res.asObject() ) ) ), MAKE_TUPLE2( make_tuple26.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_vals.asObject(), _python_str_plain_shape ) ).asObject(), _python_int_0, 0 ) ).asObject() ) ) ).asObject() ) );
                }
                frame_guard.setLineNumber( 71 );
                {
                    PyObjectTempKeeper0 op28;
                    _python_var_norm.assign1( BINARY_OPERATION_DIV( _python_float_1_0, PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op28.assign( _python_var_maxIdx.asObject() ), BINARY_OPERATION_SUB( op28.asObject0(), _python_var_idx.asObject() ) ) ).asObject(), _python_int_pos_1 ) ).asObject() ) );
                }
                _python_var_avg.assign0( Py_None );
                frame_guard.setLineNumber( 77 );
                {
                    PyObjectTempKeeper0 slice42;
                    PyObjectTempKeeper0 slice43;
                    if ( RICH_COMPARE_BOOL_GT( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice42.assign( _python_var_valsInp.asObject() ), slice43.assign( _python_var_idx.asObject() ), LOOKUP_SLICE( slice42.asObject0(), slice43.asObject0(), _python_var_maxIdx.asObject() ) ) ).asObject(), _python_str_plain_sum ) ).asObject() ) ).asObject(), _python_float_0_0 ) )
                {
                    frame_guard.setLineNumber( 79 );
                    {
                        PyObjectTempKeeper1 call38;
                        PyObjectTempKeeper1 op36;
                        PyObjectTempKeeper0 op40;
                        PyObjectTempKeeper0 slice30;
                        PyObjectTempKeeper0 slice31;
                        PyObjectTempKeeper0 slice33;
                        PyObjectTempKeeper0 slice34;
                        _python_var_avg.assign1( ( op40.assign( _python_var_norm.asObject() ), BINARY_OPERATION_MUL( op40.asObject0(), PyObjectTemporary( ( call38.assign( LOOKUP_ATTRIBUTE( _mvar___main___np.asObject0(), _python_str_plain_log2 ) ), CALL_FUNCTION_WITH_POSARGS( call38.asObject0(), PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( ( op36.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice30.assign( _python_var_vals.asObject() ), slice31.assign( _python_var_idx.asObject() ), LOOKUP_SLICE( slice30.asObject0(), slice31.asObject0(), _python_var_maxIdx.asObject() ) ) ).asObject(), _python_str_plain_sum ) ).asObject() ) ), BINARY_OPERATION_DIV( op36.asObject0(), PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice33.assign( _python_var_valsInp.asObject() ), slice34.assign( _python_var_idx.asObject() ), LOOKUP_SLICE( slice33.asObject0(), slice34.asObject0(), _python_var_maxIdx.asObject() ) ) ).asObject(), _python_str_plain_sum ) ).asObject() ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) ).asObject() ) ) );
                    }
                }
                else
                {
                    _python_var_avg.assign0( _python_float_0_0 );
                }
                }
                frame_guard.setLineNumber( 82 );
                {
                        PyObject *tmp_identifier = _python_var_avg.asObject();
                        PyObject *tmp_target = _python_var_avgVals.asObject();
                        PyObject *tmp_lower = _python_var_idx.asObject();
                        SET_SLICE( tmp_identifier, tmp_target, tmp_lower, _python_var_maxIdx.asObject() );
                }

               CONSIDER_THREADING();
            }
        }
        frame_guard.setLineNumber( 84 );
        {
            PyObjectTempKeeper0 make_tuple45;
            return ( make_tuple45.assign( _python_var_avgVals.asObject() ), MAKE_TUPLE2( make_tuple45.asObject0(), _python_var_vals.asObject() ) );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_res.updateLocalsDict( _python_var_domains.updateLocalsDict( _python_var_flist.updateLocalsDict( _python_var_chrom.updateLocalsDict( _python_var_avg.updateLocalsDict( _python_var_norm.updateLocalsDict( _python_var_maxIdx.updateLocalsDict( _python_var_idx.updateLocalsDict( _python_var_f.updateLocalsDict( _python_var_avgVals.updateLocalsDict( _python_var_valsInp.updateLocalsDict( _python_var_vals.updateLocalsDict( _python_var_lastFeatPos.updateLocalsDict( _python_var_firstFeatPos.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_3_processSignal_of_module___main__ )
        {
           Py_DECREF( frame_function_3_processSignal_of_module___main__ );
           frame_function_3_processSignal_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *_fparse_function_3_processSignal_of_module___main__( Nuitka_FunctionObject *self, PyObject *args, PyObject *kw )
{
    assert( PyTuple_Check( args ) );
    assert( kw == NULL || PyDict_Check( kw ) );

    Py_ssize_t args_size = PyTuple_GET_SIZE( args );
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_chrom = NULL;
    PyObject *_python_par_flist = NULL;
    PyObject *_python_par_domains = NULL;
    PyObject *_python_par_res = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "processSignal() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_chrom == key )
            {
                if (unlikely( _python_par_chrom ))
                {
                    PyErr_Format( PyExc_TypeError, "processSignal() got multiple values for keyword argument 'chrom'" );
                    goto error_exit;
                }

                _python_par_chrom = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_flist == key )
            {
                if (unlikely( _python_par_flist ))
                {
                    PyErr_Format( PyExc_TypeError, "processSignal() got multiple values for keyword argument 'flist'" );
                    goto error_exit;
                }

                _python_par_flist = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_domains == key )
            {
                if (unlikely( _python_par_domains ))
                {
                    PyErr_Format( PyExc_TypeError, "processSignal() got multiple values for keyword argument 'domains'" );
                    goto error_exit;
                }

                _python_par_domains = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_res == key )
            {
                if (unlikely( _python_par_res ))
                {
                    PyErr_Format( PyExc_TypeError, "processSignal() got multiple values for keyword argument 'res'" );
                    goto error_exit;
                }

                _python_par_res = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_chrom, key ) )
            {
                if (unlikely( _python_par_chrom ))
                {
                    PyErr_Format( PyExc_TypeError, "processSignal() got multiple values for keyword argument 'chrom'" );
                    goto error_exit;
                }

                _python_par_chrom = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_flist, key ) )
            {
                if (unlikely( _python_par_flist ))
                {
                    PyErr_Format( PyExc_TypeError, "processSignal() got multiple values for keyword argument 'flist'" );
                    goto error_exit;
                }

                _python_par_flist = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_domains, key ) )
            {
                if (unlikely( _python_par_domains ))
                {
                    PyErr_Format( PyExc_TypeError, "processSignal() got multiple values for keyword argument 'domains'" );
                    goto error_exit;
                }

                _python_par_domains = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_res, key ) )
            {
                if (unlikely( _python_par_res ))
                {
                    PyErr_Format( PyExc_TypeError, "processSignal() got multiple values for keyword argument 'res'" );
                    goto error_exit;
                }

                _python_par_res = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "processSignal() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 4 ))
    {
        if ( 4 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "processSignal() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "processSignal() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "processSignal() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "processSignal() takes exactly %d arguments (%zd given)", 4, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "processSignal() takes exactly %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "processSignal() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#else
            if ( 4 == 4 )
            {
                PyErr_Format( PyExc_TypeError, "processSignal() takes %d positional arguments but %zd were given", 4, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "processSignal() takes at most %d positional arguments (%zd given)", 4, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 4 ))
    {
        if ( 4 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "processSignal() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "processSignal() takes exactly %d non-keyword arguments (%zd given)", 4, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 4 == 4 )
                {
                    PyErr_Format( PyExc_TypeError, "processSignal() takes exactly %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "processSignal() takes at least %d arguments (%zd given)", 4, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 4 ? args_given : 4;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_chrom != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "processSignal() got multiple values for keyword argument 'chrom'" );
             goto error_exit;
         }

        _python_par_chrom = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 0 ) );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_flist != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "processSignal() got multiple values for keyword argument 'flist'" );
             goto error_exit;
         }

        _python_par_flist = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 1 ) );
    }
    if (likely( 2 < args_usable_count ))
    {
         if (unlikely( _python_par_domains != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "processSignal() got multiple values for keyword argument 'domains'" );
             goto error_exit;
         }

        _python_par_domains = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 2 ) );
    }
    if (likely( 3 < args_usable_count ))
    {
         if (unlikely( _python_par_res != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "processSignal() got multiple values for keyword argument 'res'" );
             goto error_exit;
         }

        _python_par_res = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 3 ) );
    }


    return impl_function_3_processSignal_of_module___main__( self, _python_par_chrom, _python_par_flist, _python_par_domains, _python_par_res );

error_exit:;

    Py_XDECREF( _python_par_chrom );
    Py_XDECREF( _python_par_flist );
    Py_XDECREF( _python_par_domains );
    Py_XDECREF( _python_par_res );

    return NULL;
}


static PyObject *impl_function_4_main_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_opts )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_opts( _python_str_plain_opts, _python_par_opts );
    PyObjectLocalVariable _python_var_res( _python_str_plain_res );
    PyObjectLocalVariable _python_var_isPeak( _python_str_plain_isPeak );
    PyObjectLocalVariable _python_var_feats( _python_str_plain_feats );
    PyObjectLocalVariable _python_var_itertools( _python_str_plain_itertools );
    PyObjectSharedLocalVariable _python_var_winUp( _python_str_plain_winUp );
    PyObjectSharedLocalVariable _python_var_winDown( _python_str_plain_winDown );
    PyObjectLocalVariable _python_var_windowSumsBoundary( _python_str_plain_windowSumsBoundary );
    PyObjectLocalVariable _python_var_windowSumsCenter( _python_str_plain_windowSumsCenter );
    PyObjectLocalVariable _python_var_numWindowsBoundary( _python_str_plain_numWindowsBoundary );
    PyObjectLocalVariable _python_var_numWinsCenter( _python_str_plain_numWinsCenter );
    PyObjectLocalVariable _python_var_allDomains( _python_str_plain_allDomains );
    PyObjectLocalVariable _python_var_ifile( _python_str_plain_ifile );
    PyObjectLocalVariable _python_var_numTotalDomains( _python_str_plain_numTotalDomains );
    PyObjectLocalVariable _python_var_interDomainLengths( _python_str_plain_interDomainLengths );
    PyObjectLocalVariable _python_var_numControlPeaks( _python_str_plain_numControlPeaks );
    PyObjectLocalVariable _python_var_sampleRatio( _python_str_plain_sampleRatio );
    PyObjectLocalVariable _python_var_chrom( _python_str_plain_chrom );
    PyObjectLocalVariable _python_var_flist( _python_str_plain_flist );
    PyObjectLocalVariable _python_var_domains( _python_str_plain_domains );
    PyObjectLocalVariable _python_var_signal( _python_str_plain_signal );
    PyObjectLocalVariable _python_var_vals( _python_str_plain_vals );
    PyObjectLocalVariable _python_var_firstFeatPos( _python_str_plain_firstFeatPos );
    PyObjectSharedLocalVariable _python_var_lastFeatPos( _python_str_plain_lastFeatPos );
    PyObjectLocalVariable _python_var_isBoundary( _python_str_plain_isBoundary );
    PyObjectLocalVariable _python_var_boundaryMidpoint( _python_str_plain_boundaryMidpoint );
    PyObjectLocalVariable _python_var_isValidLocus( _python_str_plain_isValidLocus );
    PyObjectLocalVariable _python_var_domainBuffer( _python_str_plain_domainBuffer );
    PyObjectLocalVariable _python_var_numDomains( _python_str_plain_numDomains );
    PyObjectLocalVariable _python_var_random( _python_str_plain_random );
    PyObjectLocalVariable _python_var_i( _python_str_plain_i );
    PyObjectLocalVariable _python_var_j( _python_str_plain_j );
    PyObjectLocalVariable _python_var_d1( _python_str_plain_d1 );
    PyObjectLocalVariable _python_var_d2( _python_str_plain_d2 );
    PyObjectLocalVariable _python_var_mid( _python_str_plain_mid );
    PyObjectLocalVariable _python_var_sig( _python_str_plain_sig );
    PyObjectLocalVariable _python_var_idx( _python_str_plain_idx );
    PyObjectLocalVariable _python_var_maxIdx( _python_str_plain_maxIdx );
    PyObjectLocalVariable _python_var_norm( _python_str_plain_norm );
    PyObjectLocalVariable _python_var_scipy( _python_str_plain_scipy );
    PyObjectLocalVariable _python_var_areaUnderBoundarySignal( _python_str_plain_areaUnderBoundarySignal );
    PyObjectLocalVariable _python_var_areaUnderDomainSignal( _python_str_plain_areaUnderDomainSignal );
    PyObjectLocalVariable _python_var_areaDifference( _python_str_plain_areaDifference );
    PyObjectLocalVariable _python_var_halfRes( _python_str_plain_halfRes );
    PyObjectLocalVariable _python_var_sigLen( _python_str_plain_sigLen );
    PyObjectLocalVariable _python_var_boundaryPlotPoints( _python_str_plain_boundaryPlotPoints );
    PyObjectLocalVariable _python_var_domainPlotPoints( _python_str_plain_domainPlotPoints );
    PyObjectLocalVariable _python_var_font( _python_str_plain_font );
    PyObjectLocalVariable _python_var_numPlotPoints( _python_str_plain_numPlotPoints );
    PyObjectLocalVariable _python_var_l( _python_str_plain_l );

    // Actual function code.
    static PyFrameObject *frame_function_4_main_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_function_4_main_of_module___main__ ) )
    {
        if ( frame_function_4_main_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_4_main_of_module___main__" );
#endif
            Py_DECREF( frame_function_4_main_of_module___main__ );
        }

        frame_function_4_main_of_module___main__ = MAKE_FRAME( _codeobj_db705fa97cb027949eedf47e30a83952, _module___main__ );
    }

    FrameGuard frame_guard( frame_function_4_main_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_function_4_main_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 90 );
        _python_var_res.assign1( TO_INT( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_opts.asObject(), _python_str_digest_f7bf55962e9d56c800705431462f3a10 ) ).asObject() ) );
        frame_guard.setLineNumber( 91 );
        _python_var_isPeak.assign1( LOOKUP_SUBSCRIPT( _python_var_opts.asObject(), _python_str_digest_243c29181f959f17ead3e6a1c0b9426e ) );
        frame_guard.setLineNumber( 93 );
        {
            PyObjectTempKeeper1 call1;
            PyObjectTempKeeper1 call3;
            _python_var_feats.assign1( ( CHECK_IF_TRUE( _python_var_isPeak.asObject() ) ? ( call1.assign( LOOKUP_ATTRIBUTE( _mvar___main___Features.asObject0(), _python_str_plain_broadPeakFileParser ) ), CALL_FUNCTION_WITH_POSARGS( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_opts.asObject(), _python_str_digest_7c29a05f8728cfc364cfd2f00df53fff ) ).asObject() ) ).asObject() ) ) : ( call3.assign( LOOKUP_ATTRIBUTE( _mvar___main___Features.asObject0(), _python_str_plain_parseWig ) ), CALL_FUNCTION_WITH_POSARGS( call3.asObject0(), PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_opts.asObject(), _python_str_digest_7c29a05f8728cfc364cfd2f00df53fff ) ).asObject() ) ).asObject() ) ) ) );
        }
        frame_guard.setLineNumber( 96 );
        _python_var_feats.assign1( CALL_FUNCTION( LOOKUP_BUILTIN( _python_str_plain_sorted ), PyObjectTemporary( MAKE_TUPLE1( _python_var_feats.asObject() ) ).asObject(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( MAKE_FUNCTION_lambda_1_lambda_of_function_4_main_of_module___main__(  ) ).asObject(), _python_str_plain_key ) ).asObject() ) );
        frame_guard.setLineNumber( 98 );
        _python_var_itertools.assign1( IMPORT_MODULE( _python_str_plain_itertools, ((PyModuleObject *)_module___main__)->md_dict, PyObjectTemporary( _python_var_opts.updateLocalsDict( _python_var_l.updateLocalsDict( _python_var_numPlotPoints.updateLocalsDict( _python_var_font.updateLocalsDict( _python_var_domainPlotPoints.updateLocalsDict( _python_var_boundaryPlotPoints.updateLocalsDict( _python_var_sigLen.updateLocalsDict( _python_var_halfRes.updateLocalsDict( _python_var_areaDifference.updateLocalsDict( _python_var_areaUnderDomainSignal.updateLocalsDict( _python_var_areaUnderBoundarySignal.updateLocalsDict( _python_var_scipy.updateLocalsDict( _python_var_norm.updateLocalsDict( _python_var_maxIdx.updateLocalsDict( _python_var_idx.updateLocalsDict( _python_var_sig.updateLocalsDict( _python_var_mid.updateLocalsDict( _python_var_d2.updateLocalsDict( _python_var_d1.updateLocalsDict( _python_var_j.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_random.updateLocalsDict( _python_var_numDomains.updateLocalsDict( _python_var_domainBuffer.updateLocalsDict( _python_var_isValidLocus.updateLocalsDict( _python_var_boundaryMidpoint.updateLocalsDict( _python_var_isBoundary.updateLocalsDict( _python_var_lastFeatPos.updateLocalsDict( _python_var_firstFeatPos.updateLocalsDict( _python_var_vals.updateLocalsDict( _python_var_signal.updateLocalsDict( _python_var_domains.updateLocalsDict( _python_var_flist.updateLocalsDict( _python_var_chrom.updateLocalsDict( _python_var_sampleRatio.updateLocalsDict( _python_var_numControlPeaks.updateLocalsDict( _python_var_interDomainLengths.updateLocalsDict( _python_var_numTotalDomains.updateLocalsDict( _python_var_ifile.updateLocalsDict( _python_var_allDomains.updateLocalsDict( _python_var_numWinsCenter.updateLocalsDict( _python_var_numWindowsBoundary.updateLocalsDict( _python_var_windowSumsCenter.updateLocalsDict( _python_var_windowSumsBoundary.updateLocalsDict( _python_var_winDown.updateLocalsDict( _python_var_winUp.updateLocalsDict( _python_var_itertools.updateLocalsDict( _python_var_feats.updateLocalsDict( _python_var_isPeak.updateLocalsDict( _python_var_res.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), Py_None, _python_int_neg_1 ) );
        _python_var_winUp.assign0( _python_int_neg_500000 );
        _python_var_winDown.assign0( _python_int_pos_500000 );
        frame_guard.setLineNumber( 108 );
        {
            PyObjectTempKeeper1 call7;
            PyObjectTempKeeper0 op5;
            _python_var_windowSumsBoundary.assign1( ( call7.assign( LOOKUP_ATTRIBUTE( _mvar___main___np.asObject0(), _python_str_plain_zeros ) ), CALL_FUNCTION_WITH_POSARGS( call7.asObject0(), PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( ( op5.assign( _python_var_winDown.asObject() ), BINARY_OPERATION_SUB( op5.asObject0(), _python_var_winUp.asObject() ) ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 109 );
        {
            PyObjectTempKeeper1 call11;
            PyObjectTempKeeper0 op9;
            _python_var_windowSumsCenter.assign1( ( call11.assign( LOOKUP_ATTRIBUTE( _mvar___main___np.asObject0(), _python_str_plain_zeros ) ), CALL_FUNCTION_WITH_POSARGS( call11.asObject0(), PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( ( op9.assign( _python_var_winDown.asObject() ), BINARY_OPERATION_SUB( op9.asObject0(), _python_var_winUp.asObject() ) ) ).asObject() ) ).asObject() ) ) );
        }
        {
            frame_guard.setLineNumber( 110 );
            PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tuple_int_0_int_0_tuple ) );
            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
            _python_var_numWindowsBoundary.assign0( _python_tmp_element_1.asObject() );
            _python_var_numWinsCenter.assign0( _python_tmp_element_2.asObject() );
        }
        _python_var_allDomains.assign0( Py_None );
        {
            frame_guard.setLineNumber( 114 );
            PyObjectTemporary _python_tmp_with_source( OPEN_FILE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_opts.asObject(), _python_str_digest_56fab43f67e3a144c4d65d8595f362a1 ) ).asObject(), _python_str_plain_rb, NULL ) );
            PyObjectTemporary _python_tmp_with_exit( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___exit__ ) );
            PyObjectTemporary _python_tmp_with_enter( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_SPECIAL( _python_tmp_with_source.asObject(), _python_str_plain___enter__ ) ).asObject() ) );
            PyObject *_python_tmp_indicator = Py_True;
            PythonExceptionKeeper _caught_1;


            try
            {
                try
                {
                    _python_var_ifile.assign0( _python_tmp_with_enter.asObject() );
                    frame_guard.setLineNumber( 115 );
                    _python_var_allDomains.assign1( impl_listcontr_2_of_function_4_main_of_module___main__( MAKE_ITERATOR( _python_var_ifile.asObject() ), _python_var_l ) );
                }
                catch ( PythonException &_exception )
                {
                    if ( !_exception.hasTraceback() )
                    {
                        _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                    }
                    else
                    {
                        _exception.addTraceback( frame_guard.getFrame0() );
                    }

                    frame_guard.preserveExistingException();

#if PYTHON_VERSION >= 300
                    ExceptionRestorerFrameGuard restorer( &frame_guard );
#endif
                    _exception.toExceptionHandler();

                    if ( _exception.matches( PyExc_BaseException ) )
                    {
                        frame_guard.detachFrame();
                        _python_tmp_indicator = Py_False;
                        if ( (!( CHECK_IF_TRUE( PyObjectTemporary( CALL_FUNCTION_WITH_POSARGS( _python_tmp_with_exit.asObject(), PyObjectTemporary( MAKE_TUPLE3( _exception.getType(), _exception.getValue(), (PyObject *)_exception.getTraceback() ) ).asObject() ) ).asObject() ) )) )
                        {
                            {
                                PyTracebackObject *tb = _exception.getTraceback();
                                frame_guard.setLineNumber( tb->tb_lineno );
                                _exception.setTraceback( tb->tb_next );
                                tb->tb_next = NULL;

                                throw;
                            }
                        }
                    }
                    else
                    {
                        PyTracebackObject *tb = _exception.getTraceback();
                        frame_guard.setLineNumber( tb->tb_lineno );
                        _exception.setTraceback( tb->tb_next );
                        tb->tb_next = NULL;

                        throw;
                    }
                }
            }
            catch ( PythonException &_exception )
            {
                if ( !_exception.hasTraceback() )
                {
                    _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
                }
                else
                {
                    _exception.addTraceback( frame_guard.getFrame0() );
                }

                _caught_1.save( _exception );

#if PYTHON_VERSION >= 300
                frame_guard.preserveExistingException();

                _exception.toExceptionHandler();
#endif
            }

            // Final code:
            if ( ( _python_tmp_indicator == Py_True ) )
            {
                DECREASE_REFCOUNT( CALL_FUNCTION_WITH_POSARGS( _python_tmp_with_exit.asObject(), _python_tuple_none_none_none_tuple ) );
            }
            _caught_1.rethrow();
        }
        frame_guard.setLineNumber( 118 );
        _python_var_allDomains.assign1( CALL_FUNCTION( LOOKUP_BUILTIN( _python_str_plain_sorted ), PyObjectTemporary( MAKE_TUPLE1( _python_var_allDomains.asObject() ) ).asObject(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( MAKE_FUNCTION_lambda_3_lambda_of_function_4_main_of_module___main__(  ) ).asObject(), _python_str_plain_key ) ).asObject() ) );
        frame_guard.setLineNumber( 119 );
        _python_var_numTotalDomains.assign1( BUILTIN_LEN( _python_var_allDomains.asObject() ) );
        frame_guard.setLineNumber( 120 );
        {
            PyObjectTempKeeper1 call13;
            _python_var_allDomains.assign1( impl_dictcontr_4_of_function_4_main_of_module___main__( MAKE_ITERATOR( PyObjectTemporary( ( call13.assign( LOOKUP_ATTRIBUTE( _python_var_itertools.asObject(), _python_str_plain_groupby ) ), CALL_FUNCTION_WITH_POSARGS( call13.asObject0(), PyObjectTemporary( MAKE_TUPLE2( _python_var_allDomains.asObject(), PyObjectTemporary( MAKE_FUNCTION_lambda_5_lambda_of_function_4_main_of_module___main__(  ) ).asObject() ) ).asObject() ) ) ).asObject() ) ) );
        }
        _python_var_interDomainLengths.assign1( PyList_New( 0 ) );
        frame_guard.setLineNumber( 124 );
        _python_var_numControlPeaks.assign0( _python_var_numTotalDomains.asObject() );
        frame_guard.setLineNumber( 125 );
        if ( CHECK_IF_TRUE( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_opts.asObject(), _python_str_digest_840934ca10eeab23946338186a862e96 ) ).asObject() ) )
        {
            frame_guard.setLineNumber( 126 );
            _python_var_numControlPeaks.assign1( TO_INT( PyObjectTemporary( LOOKUP_SUBSCRIPT( _python_var_opts.asObject(), _python_str_digest_840934ca10eeab23946338186a862e96 ) ).asObject() ) );
        }
        frame_guard.setLineNumber( 128 );
        {
            PyObjectTempKeeper1 op15;
            _python_var_sampleRatio.assign1( ( op15.assign( TO_FLOAT( _python_var_numControlPeaks.asObject() ) ), BINARY_OPERATION_DIV( op15.asObject0(), _python_var_numTotalDomains.asObject() ) ) );
        }
        frame_guard.setLineNumber( 129 );
        PRINT_ITEM_TO( NULL, PyObjectTemporary( TO_STR( _python_var_sampleRatio.asObject() ) ).asObject() );
        PRINT_NEW_LINE_TO( NULL );
        {
            frame_guard.setLineNumber( 133 );
            PyObject *_tmp_python_tmp_for_iterator;
            {
                PyObjectTempKeeper1 call17;
                _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call17.assign( LOOKUP_ATTRIBUTE( _python_var_itertools.asObject(), _python_str_plain_groupby ) ), CALL_FUNCTION_WITH_POSARGS( call17.asObject0(), PyObjectTemporary( MAKE_TUPLE2( _python_var_feats.asObject(), PyObjectTemporary( MAKE_FUNCTION_lambda_6_lambda_of_function_4_main_of_module___main__(  ) ).asObject() ) ).asObject() ) ) ).asObject() );
            }
            PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
            while( true )
            {
                {
                    frame_guard.setLineNumber( 133 );
                    PyObject *_tmp_unpack_2 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                    if ( _tmp_unpack_2 == NULL )
                    {
                        break;
                    }
                    PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_2 );
                    {
                        frame_guard.setLineNumber( 133 );
                        PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                        PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                        PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                        UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                        _python_var_chrom.assign0( _python_tmp_element_1.asObject() );
                        _python_var_flist.assign0( _python_tmp_element_2.asObject() );
                    }
                }
                frame_guard.setLineNumber( 136 );
                {
                    PyObjectTempKeeper0 cmp19;
                    if ( ( ( cmp19.assign( _python_var_chrom.asObject() ), SEQUENCE_CONTAINS_NOT_BOOL( cmp19.asObject0(), _python_var_allDomains.asObject() ) ) || RICH_COMPARE_BOOL_EQ( _python_var_chrom.asObject(), _python_str_plain_chrX ) ) )
                {
                    frame_guard.setLineNumber( 137 );
                    CONSIDER_THREADING(); continue;
                }
                }
                frame_guard.setLineNumber( 140 );
                _python_var_flist.assign1( TO_LIST( _python_var_flist.asObject() ) );
                frame_guard.setLineNumber( 141 );
                _python_var_flist.assign1( CALL_FUNCTION( LOOKUP_BUILTIN( _python_str_plain_sorted ), PyObjectTemporary( MAKE_TUPLE1( _python_var_flist.asObject() ) ).asObject(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( MAKE_FUNCTION_lambda_7_lambda_of_function_4_main_of_module___main__(  ) ).asObject(), _python_str_plain_key ) ).asObject() ) );
                frame_guard.setLineNumber( 142 );
                {
                    PyObjectTempKeeper0 subscr21;
                    _python_var_domains.assign1( CALL_FUNCTION( LOOKUP_BUILTIN( _python_str_plain_sorted ), PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( ( subscr21.assign( _python_var_allDomains.asObject() ), LOOKUP_SUBSCRIPT( subscr21.asObject0(), _python_var_chrom.asObject() ) ) ).asObject() ) ).asObject(), PyObjectTemporary( MAKE_DICT1( PyObjectTemporary( MAKE_FUNCTION_lambda_8_lambda_of_function_4_main_of_module___main__(  ) ).asObject(), _python_str_plain_key ) ).asObject() ) );
                }
                frame_guard.setLineNumber( 144 );
                {
                    PyObjectTempKeeper1 call23;
                    PRINT_ITEM_TO( NULL, PyObjectTemporary( TO_STR( PyObjectTemporary( ( call23.assign( LOOKUP_ATTRIBUTE( _python_str_digest_2b80eb31c34b6db78f73a2928093f163, _python_str_plain_format ) ), CALL_FUNCTION_WITH_POSARGS( call23.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_chrom.asObject() ) ).asObject() ) ) ).asObject() ) ).asObject() );
                PRINT_NEW_LINE_TO( NULL );
                }
                {
                    frame_guard.setLineNumber( 146 );
                    PyObject *_tmp_python_tmp_source_iter;
                    {
                        PyObjectTempKeeper0 call29;
                        PyObjectTempKeeper0 call35;
                        PyObjectTempKeeper0 make_tuple25;
                        PyObjectTempKeeper0 make_tuple26;
                        PyObjectTempKeeper0 make_tuple27;
                        PyObjectTempKeeper0 make_tuple31;
                        PyObjectTempKeeper0 make_tuple32;
                        PyObjectTempKeeper0 make_tuple33;
                        _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( CHECK_IF_TRUE( _python_var_isPeak.asObject() ) ? ( call29.assign( _mvar___main___processPeaks.asObject0() ), CALL_FUNCTION_WITH_POSARGS( call29.asObject0(), PyObjectTemporary( ( make_tuple25.assign( _python_var_chrom.asObject() ), make_tuple26.assign( _python_var_flist.asObject() ), make_tuple27.assign( _python_var_domains.asObject() ), MAKE_TUPLE4( make_tuple25.asObject0(), make_tuple26.asObject0(), make_tuple27.asObject0(), _python_var_res.asObject() ) ) ).asObject() ) ) : ( call35.assign( _mvar___main___processSignal.asObject0() ), CALL_FUNCTION_WITH_POSARGS( call35.asObject0(), PyObjectTemporary( ( make_tuple31.assign( _python_var_chrom.asObject() ), make_tuple32.assign( _python_var_flist.asObject() ), make_tuple33.assign( _python_var_domains.asObject() ), MAKE_TUPLE4( make_tuple31.asObject0(), make_tuple32.asObject0(), make_tuple33.asObject0(), _python_var_res.asObject() ) ) ).asObject() ) ) ) ).asObject() );
                    }
                    PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                    _python_var_signal.assign0( _python_tmp_element_1.asObject() );
                    _python_var_vals.assign0( _python_tmp_element_2.asObject() );
                }
                {
                    frame_guard.setLineNumber( 150 );
                    PyObject *_tmp_python_tmp_source_iter;
                    {
                        PyObjectTempKeeper1 make_tuple37;
                        _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( make_tuple37.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_flist.asObject(), _python_int_0, 0 ) ).asObject(), _python_str_plain_start ) ), MAKE_TUPLE2( make_tuple37.asObject0(), PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( _python_var_flist.asObject(), _python_int_neg_1, -1 ) ).asObject(), _python_str_plain_stop ) ).asObject(), _python_int_pos_1 ) ).asObject() ) ) ).asObject() );
                    }
                    PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                    _python_var_firstFeatPos.assign0( _python_tmp_element_1.asObject() );
                    _python_var_lastFeatPos.assign0( _python_tmp_element_2.asObject() );
                }
                _python_var_isBoundary.assign1( MAKE_FUNCTION_function_9_isBoundary_of_function_4_main_of_module___main__(  ) );
                _python_var_boundaryMidpoint.assign1( MAKE_FUNCTION_function_10_boundaryMidpoint_of_function_4_main_of_module___main__(  ) );
                _python_var_isValidLocus.assign1( MAKE_FUNCTION_function_11_isValidLocus_of_function_4_main_of_module___main__( _python_var_lastFeatPos, _python_var_winDown, _python_var_winUp ) );
                _python_var_domainBuffer.assign0( _python_int_pos_20000 );
                frame_guard.setLineNumber( 162 );
                _python_var_numDomains.assign1( BUILTIN_LEN( _python_var_domains.asObject() ) );
                frame_guard.setLineNumber( 164 );
                _python_var_random.assign1( IMPORT_MODULE( _python_str_plain_random, ((PyModuleObject *)_module___main__)->md_dict, PyObjectTemporary( _python_var_opts.updateLocalsDict( _python_var_l.updateLocalsDict( _python_var_numPlotPoints.updateLocalsDict( _python_var_font.updateLocalsDict( _python_var_domainPlotPoints.updateLocalsDict( _python_var_boundaryPlotPoints.updateLocalsDict( _python_var_sigLen.updateLocalsDict( _python_var_halfRes.updateLocalsDict( _python_var_areaDifference.updateLocalsDict( _python_var_areaUnderDomainSignal.updateLocalsDict( _python_var_areaUnderBoundarySignal.updateLocalsDict( _python_var_scipy.updateLocalsDict( _python_var_norm.updateLocalsDict( _python_var_maxIdx.updateLocalsDict( _python_var_idx.updateLocalsDict( _python_var_sig.updateLocalsDict( _python_var_mid.updateLocalsDict( _python_var_d2.updateLocalsDict( _python_var_d1.updateLocalsDict( _python_var_j.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_random.updateLocalsDict( _python_var_numDomains.updateLocalsDict( _python_var_domainBuffer.updateLocalsDict( _python_var_isValidLocus.updateLocalsDict( _python_var_boundaryMidpoint.updateLocalsDict( _python_var_isBoundary.updateLocalsDict( _python_var_lastFeatPos.updateLocalsDict( _python_var_firstFeatPos.updateLocalsDict( _python_var_vals.updateLocalsDict( _python_var_signal.updateLocalsDict( _python_var_domains.updateLocalsDict( _python_var_flist.updateLocalsDict( _python_var_chrom.updateLocalsDict( _python_var_sampleRatio.updateLocalsDict( _python_var_numControlPeaks.updateLocalsDict( _python_var_interDomainLengths.updateLocalsDict( _python_var_numTotalDomains.updateLocalsDict( _python_var_ifile.updateLocalsDict( _python_var_allDomains.updateLocalsDict( _python_var_numWinsCenter.updateLocalsDict( _python_var_numWindowsBoundary.updateLocalsDict( _python_var_windowSumsCenter.updateLocalsDict( _python_var_windowSumsBoundary.updateLocalsDict( _python_var_winDown.updateLocalsDict( _python_var_winUp.updateLocalsDict( _python_var_itertools.updateLocalsDict( _python_var_feats.updateLocalsDict( _python_var_isPeak.updateLocalsDict( _python_var_res.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), Py_None, _python_int_neg_1 ) );
                {
                    frame_guard.setLineNumber( 165 );
                    PyObject *_tmp_python_tmp_for_iterator;
                    {
                        PyObjectTempKeeper1 call41;
                        PyObjectTempKeeper1 make_tuple39;
                        _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( ( call41.assign( LOOKUP_ATTRIBUTE( _python_var_itertools.asObject(), _python_str_plain_izip ) ), CALL_FUNCTION_WITH_POSARGS( call41.asObject0(), PyObjectTemporary( ( make_tuple39.assign( CALL_FUNCTION_WITH_POSARGS( LOOKUP_BUILTIN( _python_str_plain_xrange ), PyObjectTemporary( MAKE_TUPLE1( _python_var_numDomains.asObject() ) ).asObject() ) ), MAKE_TUPLE2( make_tuple39.asObject0(), PyObjectTemporary( CALL_FUNCTION_WITH_POSARGS( LOOKUP_BUILTIN( _python_str_plain_xrange ), PyObjectTemporary( MAKE_TUPLE2( _python_int_pos_1, _python_var_numDomains.asObject() ) ).asObject() ) ).asObject() ) ) ).asObject() ) ) ).asObject() );
                    }
                    PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                    while( true )
                    {
                        {
                            frame_guard.setLineNumber( 165 );
                            PyObject *_tmp_unpack_3 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                            if ( _tmp_unpack_3 == NULL )
                            {
                                break;
                            }
                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_3 );
                            {
                                frame_guard.setLineNumber( 165 );
                                PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                                PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                                PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                                UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                                _python_var_i.assign0( _python_tmp_element_1.asObject() );
                                _python_var_j.assign0( _python_tmp_element_2.asObject() );
                            }
                        }
                        frame_guard.setLineNumber( 167 );
                        {
                            PyObjectTempKeeper1 cmp43;
                            if ( ( cmp43.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_random.asObject(), _python_str_plain_random ) ).asObject() ) ), RICH_COMPARE_BOOL_GT( cmp43.asObject0(), _python_var_sampleRatio.asObject() ) ) )
                        {
                            frame_guard.setLineNumber( 167 );
                            CONSIDER_THREADING(); continue;
                        }
                        }
                        {
                            frame_guard.setLineNumber( 169 );
                            PyObject *_tmp_python_tmp_source_iter;
                            {
                                PyObjectTempKeeper1 make_tuple49;
                                PyObjectTempKeeper0 subscr45;
                                PyObjectTempKeeper0 subscr47;
                                _tmp_python_tmp_source_iter = MAKE_ITERATOR( PyObjectTemporary( ( make_tuple49.assign( ( subscr45.assign( _python_var_domains.asObject() ), LOOKUP_SUBSCRIPT( subscr45.asObject0(), _python_var_i.asObject() ) ) ), MAKE_TUPLE2( make_tuple49.asObject0(), PyObjectTemporary( ( subscr47.assign( _python_var_domains.asObject() ), LOOKUP_SUBSCRIPT( subscr47.asObject0(), _python_var_j.asObject() ) ) ).asObject() ) ) ).asObject() );
                            }
                            PyObjectTemporary _python_tmp_source_iter( _tmp_python_tmp_source_iter );
                            PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                            PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                            UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                            _python_var_d1.assign0( _python_tmp_element_1.asObject() );
                            _python_var_d2.assign0( _python_tmp_element_2.asObject() );
                        }
                        frame_guard.setLineNumber( 170 );
                        {
                            PyObjectTempKeeper1 call53;
                            PyObjectTempKeeper1 op51;
                            DECREASE_REFCOUNT( ( call53.assign( LOOKUP_ATTRIBUTE( _python_var_interDomainLengths.asObject(), _python_str_plain_append ) ), CALL_FUNCTION_WITH_POSARGS( call53.asObject0(), PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( ( op51.assign( LOOKUP_ATTRIBUTE( _python_var_d2.asObject(), _python_str_plain_start ) ), BINARY_OPERATION_SUB( op51.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_d1.asObject(), _python_str_plain_stop ) ).asObject() ) ) ).asObject() ) ).asObject() ) ) );
                        }
                        frame_guard.setLineNumber( 172 );
                        {
                            PyObjectTempKeeper0 call89;
                            PyObjectTempKeeper0 make_tuple87;
                            PyObjectTempKeeper0 slice91;
                            PyObjectTempKeeper1 slice92;
                            if ( ( CHECK_IF_TRUE( PyObjectTemporary( ( call89.assign( _python_var_isBoundary.asObject() ), CALL_FUNCTION_WITH_POSARGS( call89.asObject0(), PyObjectTemporary( ( make_tuple87.assign( _python_var_d1.asObject() ), MAKE_TUPLE2( make_tuple87.asObject0(), _python_var_d2.asObject() ) ) ).asObject() ) ) ).asObject() ) && RICH_COMPARE_BOOL_GT( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice91.assign( _python_var_vals.asObject() ), slice92.assign( LOOKUP_ATTRIBUTE( _python_var_d1.asObject(), _python_str_plain_stop ) ), LOOKUP_SLICE( slice91.asObject0(), slice92.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_d2.asObject(), _python_str_plain_start ) ).asObject() ) ) ).asObject(), _python_str_plain_sum ) ).asObject() ) ).asObject(), _python_int_0 ) ) )
                        {
                            frame_guard.setLineNumber( 173 );
                            {
                                PyObjectTempKeeper0 call57;
                                PyObjectTempKeeper0 make_tuple55;
                                _python_var_mid.assign1( ( call57.assign( _python_var_boundaryMidpoint.asObject() ), CALL_FUNCTION_WITH_POSARGS( call57.asObject0(), PyObjectTemporary( ( make_tuple55.assign( _python_var_d1.asObject() ), MAKE_TUPLE2( make_tuple55.asObject0(), _python_var_d2.asObject() ) ) ).asObject() ) ) );
                            }
                            frame_guard.setLineNumber( 174 );
                            {
                                PyObjectTempKeeper0 call85;
                                if ( CHECK_IF_TRUE( PyObjectTemporary( ( call85.assign( _python_var_isValidLocus.asObject() ), CALL_FUNCTION_WITH_POSARGS( call85.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_mid.asObject() ) ).asObject() ) ) ).asObject() ) )
                            {
                                frame_guard.setLineNumber( 175 );
                                _python_var_sig.assign1( CALL_FUNCTION_WITH_POSARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar___main___np.asObject0(), _python_str_plain_zeros ) ).asObject(), _python_tuple_int_pos_1000000_tuple ) );
                                {
                                    frame_guard.setLineNumber( 176 );
                                    PyObject *_tmp_python_tmp_for_iterator;
                                    {
                                        PyObjectTempKeeper1 make_tuple62;
                                        PyObjectTempKeeper1 op59;
                                        _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_POSARGS( LOOKUP_BUILTIN( _python_str_plain_xrange ), PyObjectTemporary( ( make_tuple62.assign( ( op59.assign( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_sig.asObject(), _python_str_plain_shape ) ).asObject(), _python_int_0, 0 ) ), BINARY_OPERATION_ADD( op59.asObject0(), _python_var_res.asObject() ) ) ), MAKE_TUPLE3( _python_int_0, make_tuple62.asObject0(), _python_var_res.asObject() ) ) ).asObject() ) ).asObject() );
                                    }
                                    PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                                    while( true )
                                    {
                                        {
                                            frame_guard.setLineNumber( 176 );
                                            PyObject *_tmp_unpack_4 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                            if ( _tmp_unpack_4 == NULL )
                                            {
                                                break;
                                            }
                                            PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_4 );
                                            _python_var_idx.assign0( _python_tmp_iter_value.asObject() );
                                        }
                                        frame_guard.setLineNumber( 177 );
                                        {
                                            PyObjectTempKeeper1 make_tuple66;
                                            PyObjectTempKeeper0 op64;
                                            _python_var_maxIdx.assign1( CALL_FUNCTION_WITH_POSARGS( LOOKUP_BUILTIN( _python_str_plain_min ), PyObjectTemporary( ( make_tuple66.assign( ( op64.assign( _python_var_idx.asObject() ), BINARY_OPERATION_ADD( op64.asObject0(), _python_var_res.asObject() ) ) ), MAKE_TUPLE2( make_tuple66.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_sig.asObject(), _python_str_plain_shape ) ).asObject(), _python_int_0, 0 ) ).asObject() ) ) ).asObject() ) );
                                        }
                                        frame_guard.setLineNumber( 178 );
                                        {
                                            PyObjectTempKeeper0 op68;
                                            _python_var_norm.assign1( BINARY_OPERATION_DIV( _python_float_1_0, PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op68.assign( _python_var_maxIdx.asObject() ), BINARY_OPERATION_SUB( op68.asObject0(), _python_var_idx.asObject() ) ) ).asObject(), _python_int_pos_1 ) ).asObject() ) );
                                        }
                                        frame_guard.setLineNumber( 179 );
                                        {
                                            PyObjectTempKeeper0 op70;
                                            PyObjectTempKeeper1 op72;
                                            PyObjectTempKeeper0 op74;
                                            PyObjectTempKeeper1 op76;
                                            PyObjectTempKeeper1 op81;
                                            PyObjectTempKeeper0 slice78;
                                            PyObjectTempKeeper1 slice79;
                                            {
                                                PyObjectTemporary tmp_identifier( ( op81.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice78.assign( _python_var_signal.asObject() ), slice79.assign( ( op72.assign( ( op70.assign( _python_var_mid.asObject() ), BINARY_OPERATION_ADD( op70.asObject0(), _python_var_winUp.asObject() ) ) ), BINARY_OPERATION_ADD( op72.asObject0(), _python_var_idx.asObject() ) ) ), LOOKUP_SLICE( slice78.asObject0(), slice79.asObject0(), PyObjectTemporary( ( op76.assign( ( op74.assign( _python_var_mid.asObject() ), BINARY_OPERATION_ADD( op74.asObject0(), _python_var_winUp.asObject() ) ) ), BINARY_OPERATION_ADD( op76.asObject0(), _python_var_maxIdx.asObject() ) ) ).asObject() ) ) ).asObject(), _python_str_plain_sum ) ).asObject() ) ), BINARY_OPERATION_MUL( op81.asObject0(), _python_var_norm.asObject() ) ) );
                                                PyObject *tmp_target = _python_var_sig.asObject();
                                                PyObject *tmp_lower = _python_var_idx.asObject();
                                                SET_SLICE( tmp_identifier.asObject(), tmp_target, tmp_lower, _python_var_maxIdx.asObject() );
                                        }
                                        }

                                       CONSIDER_THREADING();
                                    }
                                }
                                {
                                    frame_guard.setLineNumber( 181 );
                                    PyObject *_python_tmp_inplace_start = _python_var_windowSumsBoundary.asObject();
                                    PyObject *_tmp_python_tmp_inplace_end;
                                    {
                                        PyObjectTempKeeper0 op83;
                                        _tmp_python_tmp_inplace_end = ( op83.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op83.asObject0(), _python_var_sig.asObject() ) );
                                    }
                                    PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
                                    if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                                    {
                                        _python_var_windowSumsBoundary.assign0( _python_tmp_inplace_end.asObject() );
                                    }
                                }
                                {
                                    frame_guard.setLineNumber( 182 );
                                    PyObject *_python_tmp_inplace_start = _python_var_numWindowsBoundary.asObject();
                                    PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceAdd, _python_tmp_inplace_start, _python_int_pos_1 ) );
                                    if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                                    {
                                        _python_var_numWindowsBoundary.assign0( _python_tmp_inplace_end.asObject() );
                                    }
                                }
                            }
                            }
                        }
                        }
                        frame_guard.setLineNumber( 185 );
                        {
                            PyObjectTempKeeper0 call120;
                            PyObjectTempKeeper0 slice122;
                            PyObjectTempKeeper1 slice123;
                            if ( ( CHECK_IF_TRUE( PyObjectTemporary( ( call120.assign( _python_var_isValidLocus.asObject() ), CALL_FUNCTION_WITH_POSARGS( call120.asObject0(), PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_d1.asObject(), _python_str_plain_center ) ).asObject() ) ).asObject() ) ).asObject() ) ) ).asObject() ) && RICH_COMPARE_BOOL_GT( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice122.assign( _python_var_vals.asObject() ), slice123.assign( LOOKUP_ATTRIBUTE( _python_var_d1.asObject(), _python_str_plain_start ) ), LOOKUP_SLICE( slice122.asObject0(), slice123.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_d2.asObject(), _python_str_plain_stop ) ).asObject() ) ) ).asObject(), _python_str_plain_sum ) ).asObject() ) ).asObject(), _python_int_0 ) ) )
                        {
                            frame_guard.setLineNumber( 186 );
                            _python_var_sig.assign1( CALL_FUNCTION_WITH_POSARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar___main___np.asObject0(), _python_str_plain_zeros ) ).asObject(), _python_tuple_int_pos_1000000_tuple ) );
                            {
                                frame_guard.setLineNumber( 187 );
                                PyObject *_tmp_python_tmp_for_iterator;
                                {
                                    PyObjectTempKeeper1 make_tuple97;
                                    PyObjectTempKeeper1 op94;
                                    _tmp_python_tmp_for_iterator = MAKE_ITERATOR( PyObjectTemporary( CALL_FUNCTION_WITH_POSARGS( LOOKUP_BUILTIN( _python_str_plain_xrange ), PyObjectTemporary( ( make_tuple97.assign( ( op94.assign( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_sig.asObject(), _python_str_plain_shape ) ).asObject(), _python_int_0, 0 ) ), BINARY_OPERATION_ADD( op94.asObject0(), _python_var_res.asObject() ) ) ), MAKE_TUPLE3( _python_int_0, make_tuple97.asObject0(), _python_var_res.asObject() ) ) ).asObject() ) ).asObject() );
                                }
                                PyObjectTemporary _python_tmp_for_iterator( _tmp_python_tmp_for_iterator );
                                while( true )
                                {
                                    {
                                        frame_guard.setLineNumber( 187 );
                                        PyObject *_tmp_unpack_5 = ITERATOR_NEXT( _python_tmp_for_iterator.asObject() );

                                        if ( _tmp_unpack_5 == NULL )
                                        {
                                            break;
                                        }
                                        PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_5 );
                                        _python_var_idx.assign0( _python_tmp_iter_value.asObject() );
                                    }
                                    frame_guard.setLineNumber( 188 );
                                    {
                                        PyObjectTempKeeper1 make_tuple101;
                                        PyObjectTempKeeper0 op99;
                                        _python_var_maxIdx.assign1( CALL_FUNCTION_WITH_POSARGS( LOOKUP_BUILTIN( _python_str_plain_min ), PyObjectTemporary( ( make_tuple101.assign( ( op99.assign( _python_var_idx.asObject() ), BINARY_OPERATION_ADD( op99.asObject0(), _python_var_res.asObject() ) ) ), MAKE_TUPLE2( make_tuple101.asObject0(), PyObjectTemporary( LOOKUP_SUBSCRIPT_CONST( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_sig.asObject(), _python_str_plain_shape ) ).asObject(), _python_int_0, 0 ) ).asObject() ) ) ).asObject() ) );
                                    }
                                    frame_guard.setLineNumber( 189 );
                                    {
                                        PyObjectTempKeeper0 op103;
                                        _python_var_norm.assign1( BINARY_OPERATION_DIV( _python_float_1_0, PyObjectTemporary( BINARY_OPERATION_ADD( PyObjectTemporary( ( op103.assign( _python_var_maxIdx.asObject() ), BINARY_OPERATION_SUB( op103.asObject0(), _python_var_idx.asObject() ) ) ).asObject(), _python_int_pos_1 ) ).asObject() ) );
                                    }
                                    frame_guard.setLineNumber( 190 );
                                    {
                                        PyObjectTempKeeper1 op105;
                                        PyObjectTempKeeper1 op107;
                                        PyObjectTempKeeper1 op109;
                                        PyObjectTempKeeper1 op111;
                                        PyObjectTempKeeper1 op116;
                                        PyObjectTempKeeper0 slice113;
                                        PyObjectTempKeeper1 slice114;
                                        {
                                            PyObjectTemporary tmp_identifier( ( op116.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( ( slice113.assign( _python_var_signal.asObject() ), slice114.assign( ( op107.assign( ( op105.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_d1.asObject(), _python_str_plain_center ) ).asObject() ) ), BINARY_OPERATION_ADD( op105.asObject0(), _python_var_winUp.asObject() ) ) ), BINARY_OPERATION_ADD( op107.asObject0(), _python_var_idx.asObject() ) ) ), LOOKUP_SLICE( slice113.asObject0(), slice114.asObject0(), PyObjectTemporary( ( op111.assign( ( op109.assign( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_d1.asObject(), _python_str_plain_center ) ).asObject() ) ), BINARY_OPERATION_ADD( op109.asObject0(), _python_var_winUp.asObject() ) ) ), BINARY_OPERATION_ADD( op111.asObject0(), _python_var_maxIdx.asObject() ) ) ).asObject() ) ) ).asObject(), _python_str_plain_sum ) ).asObject() ) ), BINARY_OPERATION_MUL( op116.asObject0(), _python_var_norm.asObject() ) ) );
                                            PyObject *tmp_target = _python_var_sig.asObject();
                                            PyObject *tmp_lower = _python_var_idx.asObject();
                                            SET_SLICE( tmp_identifier.asObject(), tmp_target, tmp_lower, _python_var_maxIdx.asObject() );
                                    }
                                    }

                                   CONSIDER_THREADING();
                                }
                            }
                            {
                                frame_guard.setLineNumber( 191 );
                                PyObject *_python_tmp_inplace_start = _python_var_windowSumsCenter.asObject();
                                PyObject *_tmp_python_tmp_inplace_end;
                                {
                                    PyObjectTempKeeper0 op118;
                                    _tmp_python_tmp_inplace_end = ( op118.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceAdd, op118.asObject0(), _python_var_sig.asObject() ) );
                                }
                                PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
                                if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                                {
                                    _python_var_windowSumsCenter.assign0( _python_tmp_inplace_end.asObject() );
                                }
                            }
                            {
                                frame_guard.setLineNumber( 192 );
                                PyObject *_python_tmp_inplace_start = _python_var_numWinsCenter.asObject();
                                PyObjectTemporary _python_tmp_inplace_end( BINARY_OPERATION( PyNumber_InPlaceAdd, _python_tmp_inplace_start, _python_int_pos_1 ) );
                                if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
                                {
                                    _python_var_numWinsCenter.assign0( _python_tmp_inplace_end.asObject() );
                                }
                            }
                        }
                        }

                       CONSIDER_THREADING();
                    }
                }
                frame_guard.setLineNumber( 194 );
                {
                    PyObjectTempKeeper0 make_tuple125;
                    PRINT_ITEM_TO( NULL, PyObjectTemporary( TO_STR( PyObjectTemporary( ( make_tuple125.assign( _python_var_numWindowsBoundary.asObject() ), MAKE_TUPLE2( make_tuple125.asObject0(), _python_var_numWinsCenter.asObject() ) ) ).asObject() ) ).asObject() );
                PRINT_NEW_LINE_TO( NULL );
                }

               CONSIDER_THREADING();
            }
        }
        {
            frame_guard.setLineNumber( 196 );
            PyObject *_python_tmp_inplace_start = _python_var_windowSumsBoundary.asObject();
            PyObject *_tmp_python_tmp_inplace_end;
            {
                PyObjectTempKeeper0 op127;
                _tmp_python_tmp_inplace_end = ( op127.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceDivide, op127.asObject0(), _python_var_numWindowsBoundary.asObject() ) );
            }
            PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
            if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
            {
                _python_var_windowSumsBoundary.assign0( _python_tmp_inplace_end.asObject() );
            }
        }
        {
            frame_guard.setLineNumber( 197 );
            PyObject *_python_tmp_inplace_start = _python_var_windowSumsCenter.asObject();
            PyObject *_tmp_python_tmp_inplace_end;
            {
                PyObjectTempKeeper0 op129;
                _tmp_python_tmp_inplace_end = ( op129.assign( _python_tmp_inplace_start ), BINARY_OPERATION( PyNumber_InPlaceDivide, op129.asObject0(), _python_var_numWinsCenter.asObject() ) );
            }
            PyObjectTemporary _python_tmp_inplace_end( _tmp_python_tmp_inplace_end );
            if ( ( _python_tmp_inplace_start != _python_tmp_inplace_end.asObject() ) )
            {
                _python_var_windowSumsCenter.assign0( _python_tmp_inplace_end.asObject() );
            }
        }
        frame_guard.setLineNumber( 199 );
        _python_var_scipy.assign1( IMPORT_MODULE( _python_str_digest_70e6205803ec3c66a2fdd2c934f08873, ((PyModuleObject *)_module___main__)->md_dict, PyObjectTemporary( _python_var_opts.updateLocalsDict( _python_var_l.updateLocalsDict( _python_var_numPlotPoints.updateLocalsDict( _python_var_font.updateLocalsDict( _python_var_domainPlotPoints.updateLocalsDict( _python_var_boundaryPlotPoints.updateLocalsDict( _python_var_sigLen.updateLocalsDict( _python_var_halfRes.updateLocalsDict( _python_var_areaDifference.updateLocalsDict( _python_var_areaUnderDomainSignal.updateLocalsDict( _python_var_areaUnderBoundarySignal.updateLocalsDict( _python_var_scipy.updateLocalsDict( _python_var_norm.updateLocalsDict( _python_var_maxIdx.updateLocalsDict( _python_var_idx.updateLocalsDict( _python_var_sig.updateLocalsDict( _python_var_mid.updateLocalsDict( _python_var_d2.updateLocalsDict( _python_var_d1.updateLocalsDict( _python_var_j.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_random.updateLocalsDict( _python_var_numDomains.updateLocalsDict( _python_var_domainBuffer.updateLocalsDict( _python_var_isValidLocus.updateLocalsDict( _python_var_boundaryMidpoint.updateLocalsDict( _python_var_isBoundary.updateLocalsDict( _python_var_lastFeatPos.updateLocalsDict( _python_var_firstFeatPos.updateLocalsDict( _python_var_vals.updateLocalsDict( _python_var_signal.updateLocalsDict( _python_var_domains.updateLocalsDict( _python_var_flist.updateLocalsDict( _python_var_chrom.updateLocalsDict( _python_var_sampleRatio.updateLocalsDict( _python_var_numControlPeaks.updateLocalsDict( _python_var_interDomainLengths.updateLocalsDict( _python_var_numTotalDomains.updateLocalsDict( _python_var_ifile.updateLocalsDict( _python_var_allDomains.updateLocalsDict( _python_var_numWinsCenter.updateLocalsDict( _python_var_numWindowsBoundary.updateLocalsDict( _python_var_windowSumsCenter.updateLocalsDict( _python_var_windowSumsBoundary.updateLocalsDict( _python_var_winDown.updateLocalsDict( _python_var_winUp.updateLocalsDict( _python_var_itertools.updateLocalsDict( _python_var_feats.updateLocalsDict( _python_var_isPeak.updateLocalsDict( _python_var_res.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ).asObject(), Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 200 );
        {
            PyObjectTempKeeper1 call131;
            _python_var_areaUnderBoundarySignal.assign1( ( call131.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_scipy.asObject(), _python_str_plain_integrate ) ).asObject(), _python_str_plain_trapz ) ), CALL_FUNCTION_WITH_POSARGS( call131.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_windowSumsBoundary.asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 201 );
        {
            PyObjectTempKeeper1 call133;
            _python_var_areaUnderDomainSignal.assign1( ( call133.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_scipy.asObject(), _python_str_plain_integrate ) ).asObject(), _python_str_plain_trapz ) ), CALL_FUNCTION_WITH_POSARGS( call133.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_windowSumsCenter.asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 203 );
        {
            PyObjectTempKeeper0 op135;
            _python_var_areaDifference.assign1( ( op135.assign( _python_var_areaUnderBoundarySignal.asObject() ), BINARY_OPERATION_SUB( op135.asObject0(), _python_var_areaUnderDomainSignal.asObject() ) ) );
        }
        frame_guard.setLineNumber( 204 );
        {
            PyObjectTempKeeper1 call137;
            PRINT_ITEM_TO( NULL, PyObjectTemporary( TO_STR( PyObjectTemporary( ( call137.assign( LOOKUP_ATTRIBUTE( _python_str_digest_dbdf9e465e56b8046daa1d64216bffac, _python_str_plain_format ) ), CALL_FUNCTION_WITH_POSARGS( call137.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_areaDifference.asObject() ) ).asObject() ) ) ).asObject() ) ).asObject() );
        PRINT_NEW_LINE_TO( NULL );
        }
        frame_guard.setLineNumber( 206 );
        _python_var_halfRes.assign1( BINARY_OPERATION_DIV( _python_var_res.asObject(), _python_int_pos_2 ) );
        frame_guard.setLineNumber( 207 );
        _python_var_sigLen.assign1( BUILTIN_LEN( _python_var_windowSumsBoundary.asObject() ) );
        frame_guard.setLineNumber( 208 );
        {
            PyObjectTempKeeper0 op139;
            PyObjectTempKeeper0 sliceobj141;
            PyObjectTempKeeper1 sliceobj142;
            PyObjectTempKeeper0 subscr144;
            _python_var_boundaryPlotPoints.assign1( ( subscr144.assign( _python_var_windowSumsBoundary.asObject() ), LOOKUP_SUBSCRIPT( subscr144.asObject0(), PyObjectTemporary( ( sliceobj141.assign( _python_var_halfRes.asObject() ), sliceobj142.assign( ( op139.assign( _python_var_sigLen.asObject() ), BINARY_OPERATION_ADD( op139.asObject0(), _python_var_halfRes.asObject() ) ) ), MAKE_SLICEOBJ( sliceobj141.asObject0(), sliceobj142.asObject0(), _python_var_res.asObject() ) ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 209 );
        {
            PyObjectTempKeeper0 op146;
            PyObjectTempKeeper0 sliceobj148;
            PyObjectTempKeeper1 sliceobj149;
            PyObjectTempKeeper0 subscr151;
            _python_var_domainPlotPoints.assign1( ( subscr151.assign( _python_var_windowSumsCenter.asObject() ), LOOKUP_SUBSCRIPT( subscr151.asObject0(), PyObjectTemporary( ( sliceobj148.assign( _python_var_halfRes.asObject() ), sliceobj149.assign( ( op146.assign( _python_var_sigLen.asObject() ), BINARY_OPERATION_ADD( op146.asObject0(), _python_var_halfRes.asObject() ) ) ), MAKE_SLICEOBJ( sliceobj148.asObject0(), sliceobj149.asObject0(), _python_var_res.asObject() ) ) ).asObject() ) ) );
        }
        _python_var_font.assign1( PyDict_Copy( _python_dict_9cc58b1859648755d276d5241d90b6bc ) );
        frame_guard.setLineNumber( 214 );
        {
            PyObjectTempKeeper1 call_tmp153;
            DECREASE_REFCOUNT( ( call_tmp153.assign( LOOKUP_ATTRIBUTE( _mvar___main___matplotlib.asObject0(), _python_str_plain_rc ) ), impl_function_1_complex_call_helper_pos_star_dict_of_module___internal__( call_tmp153.asObject(), INCREASE_REFCOUNT( _python_tuple_str_plain_font_tuple ), _python_var_font.asObject1() ) ) );
        }
        frame_guard.setLineNumber( 216 );
        {
            PyObjectTempKeeper1 call156;
            DECREASE_REFCOUNT( ( call156.assign( LOOKUP_ATTRIBUTE( _mvar___main___plt.asObject0(), _python_str_plain_plot ) ), CALL_FUNCTION( call156.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_boundaryPlotPoints.asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_cd1e41bbb36b492f0ffb5128d92630c6 ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 217 );
        {
            PyObjectTempKeeper1 call159;
            DECREASE_REFCOUNT( ( call159.assign( LOOKUP_ATTRIBUTE( _mvar___main___plt.asObject0(), _python_str_plain_plot ) ), CALL_FUNCTION( call159.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _python_var_domainPlotPoints.asObject() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_cd1e41bbb36b492f0ffb5128d92630c6 ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 218 );
        {
            PyObjectTempKeeper1 call162;
            DECREASE_REFCOUNT( ( call162.assign( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar___main___plt.asObject0(), _python_str_plain_gca ) ).asObject() ) ).asObject(), _python_str_plain_yaxis ) ).asObject(), _python_str_plain_set_major_locator ) ), CALL_FUNCTION_WITH_POSARGS( call162.asObject0(), PyObjectTemporary( MAKE_TUPLE1( PyObjectTemporary( CALL_FUNCTION_WITH_KEYARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar___main___matplotlib.asObject0(), _python_str_plain_ticker ) ).asObject(), _python_str_plain_MaxNLocator ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_750d4f380d4ab83aa8add2cfc1a6dbba ) ).asObject() ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 219 );
        DECREASE_REFCOUNT( CALL_FUNCTION_WITH_POSARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar___main___plt.asObject0(), _python_str_plain_ylabel ) ).asObject(), _python_tuple_str_digest_2e953ccbf738085588fd0a483a12c808_tuple ) );
        frame_guard.setLineNumber( 221 );
        _python_var_numPlotPoints.assign1( BUILTIN_LEN( _python_var_boundaryPlotPoints.asObject() ) );
        frame_guard.setLineNumber( 222 );
        {
            PyObjectTempKeeper1 call167;
            PyObjectTempKeeper1 make_list165;
            DECREASE_REFCOUNT( ( call167.assign( LOOKUP_ATTRIBUTE( _mvar___main___plt.asObject0(), _python_str_plain_xticks ) ), CALL_FUNCTION_WITH_POSARGS( call167.asObject0(), PyObjectTemporary( MAKE_TUPLE2( PyObjectTemporary( ( make_list165.assign( BINARY_OPERATION_DIV( _python_var_numPlotPoints.asObject(), _python_int_pos_2 ) ), MAKE_LIST3( INCREASE_REFCOUNT( _python_int_0 ), make_list165.asObject(), _python_var_numPlotPoints.asObject1() ) ) ).asObject(), PyObjectTemporary( LIST_COPY( _python_list_8aacf1c2ae7752a942c743c3422bf66c_list ) ).asObject() ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 223 );
        DECREASE_REFCOUNT( CALL_FUNCTION_NO_ARGS( PyObjectTemporary( LOOKUP_ATTRIBUTE( _mvar___main___plt.asObject0(), _python_str_plain_show ) ).asObject() ) );
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_opts.updateLocalsDict( _python_var_l.updateLocalsDict( _python_var_numPlotPoints.updateLocalsDict( _python_var_font.updateLocalsDict( _python_var_domainPlotPoints.updateLocalsDict( _python_var_boundaryPlotPoints.updateLocalsDict( _python_var_sigLen.updateLocalsDict( _python_var_halfRes.updateLocalsDict( _python_var_areaDifference.updateLocalsDict( _python_var_areaUnderDomainSignal.updateLocalsDict( _python_var_areaUnderBoundarySignal.updateLocalsDict( _python_var_scipy.updateLocalsDict( _python_var_norm.updateLocalsDict( _python_var_maxIdx.updateLocalsDict( _python_var_idx.updateLocalsDict( _python_var_sig.updateLocalsDict( _python_var_mid.updateLocalsDict( _python_var_d2.updateLocalsDict( _python_var_d1.updateLocalsDict( _python_var_j.updateLocalsDict( _python_var_i.updateLocalsDict( _python_var_random.updateLocalsDict( _python_var_numDomains.updateLocalsDict( _python_var_domainBuffer.updateLocalsDict( _python_var_isValidLocus.updateLocalsDict( _python_var_boundaryMidpoint.updateLocalsDict( _python_var_isBoundary.updateLocalsDict( _python_var_lastFeatPos.updateLocalsDict( _python_var_firstFeatPos.updateLocalsDict( _python_var_vals.updateLocalsDict( _python_var_signal.updateLocalsDict( _python_var_domains.updateLocalsDict( _python_var_flist.updateLocalsDict( _python_var_chrom.updateLocalsDict( _python_var_sampleRatio.updateLocalsDict( _python_var_numControlPeaks.updateLocalsDict( _python_var_interDomainLengths.updateLocalsDict( _python_var_numTotalDomains.updateLocalsDict( _python_var_ifile.updateLocalsDict( _python_var_allDomains.updateLocalsDict( _python_var_numWinsCenter.updateLocalsDict( _python_var_numWindowsBoundary.updateLocalsDict( _python_var_windowSumsCenter.updateLocalsDict( _python_var_windowSumsBoundary.updateLocalsDict( _python_var_winDown.updateLocalsDict( _python_var_winUp.updateLocalsDict( _python_var_itertools.updateLocalsDict( _python_var_feats.updateLocalsDict( _python_var_isPeak.updateLocalsDict( _python_var_res.updateLocalsDict( PyDict_New() ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_4_main_of_module___main__ )
        {
           Py_DECREF( frame_function_4_main_of_module___main__ );
           frame_function_4_main_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }
    return INCREASE_REFCOUNT( Py_None );
}
static PyObject *_fparse_function_4_main_of_module___main__( Nuitka_FunctionObject *self, PyObject *args, PyObject *kw )
{
    assert( PyTuple_Check( args ) );
    assert( kw == NULL || PyDict_Check( kw ) );

    Py_ssize_t args_size = PyTuple_GET_SIZE( args );
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_opts = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "main() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_opts == key )
            {
                if (unlikely( _python_par_opts ))
                {
                    PyErr_Format( PyExc_TypeError, "main() got multiple values for keyword argument 'opts'" );
                    goto error_exit;
                }

                _python_par_opts = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_opts, key ) )
            {
                if (unlikely( _python_par_opts ))
                {
                    PyErr_Format( PyExc_TypeError, "main() got multiple values for keyword argument 'opts'" );
                    goto error_exit;
                }

                _python_par_opts = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "main() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "main() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "main() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "main() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "main() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "main() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "main() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "main() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "main() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "main() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "main() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "main() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "main() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_opts != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "main() got multiple values for keyword argument 'opts'" );
             goto error_exit;
         }

        _python_par_opts = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 0 ) );
    }


    return impl_function_4_main_of_module___main__( self, _python_par_opts );

error_exit:;

    Py_XDECREF( _python_par_opts );

    return NULL;
}


static PyObject *impl_lambda_1_lambda_of_function_4_main_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_x( _python_str_plain_x, _python_par_x );

    // Actual function code.
    static PyFrameObject *frame_lambda_1_lambda_of_function_4_main_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_lambda_1_lambda_of_function_4_main_of_module___main__ ) )
    {
        if ( frame_lambda_1_lambda_of_function_4_main_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_1_lambda_of_function_4_main_of_module___main__" );
#endif
            Py_DECREF( frame_lambda_1_lambda_of_function_4_main_of_module___main__ );
        }

        frame_lambda_1_lambda_of_function_4_main_of_module___main__ = MAKE_FRAME( _codeobj_fe7e41cf266be56a879b1d02a7f026a8, _module___main__ );
    }

    FrameGuard frame_guard( frame_lambda_1_lambda_of_function_4_main_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_lambda_1_lambda_of_function_4_main_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 96 );
        return LOOKUP_ATTRIBUTE( _python_var_x.asObject(), _python_str_plain_chrom );
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_x.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_lambda_1_lambda_of_function_4_main_of_module___main__ )
        {
           Py_DECREF( frame_lambda_1_lambda_of_function_4_main_of_module___main__ );
           frame_lambda_1_lambda_of_function_4_main_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *_fparse_lambda_1_lambda_of_function_4_main_of_module___main__( Nuitka_FunctionObject *self, PyObject *args, PyObject *kw )
{
    assert( PyTuple_Check( args ) );
    assert( kw == NULL || PyDict_Check( kw ) );

    Py_ssize_t args_size = PyTuple_GET_SIZE( args );
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_x == key )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_x, key ) )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "<lambda>() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "<lambda>() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_x != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 0 ) );
    }


    return impl_lambda_1_lambda_of_function_4_main_of_module___main__( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}


NUITKA_LOCAL_MODULE PyObject *impl_listcontr_2_of_function_4_main_of_module___main__( PyObject *_python_par___iterator,PyObjectLocalVariable &python_closure_l )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyList_New( 0 ) );
        {
            frame_guard.setLineNumber( 115 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 115 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                python_closure_l.assign0( _python_tmp_iter_value.asObject() );
                {
                    PyObjectTempKeeper0 call1;
                    APPEND_TO_LIST( _python_tmp_result.asObject(), PyObjectTemporary( ( call1.assign( _mvar___main___Domain.asObject0() ), CALL_FUNCTION_WITH_POSARGS( call1.asObject0(), PyObjectTemporary( MAKE_TUPLE1( python_closure_l.asObject() ) ).asObject() ) ) ).asObject() ), Py_None;
                }

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_lambda_3_lambda_of_function_4_main_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_x( _python_str_plain_x, _python_par_x );

    // Actual function code.
    static PyFrameObject *frame_lambda_3_lambda_of_function_4_main_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_lambda_3_lambda_of_function_4_main_of_module___main__ ) )
    {
        if ( frame_lambda_3_lambda_of_function_4_main_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_3_lambda_of_function_4_main_of_module___main__" );
#endif
            Py_DECREF( frame_lambda_3_lambda_of_function_4_main_of_module___main__ );
        }

        frame_lambda_3_lambda_of_function_4_main_of_module___main__ = MAKE_FRAME( _codeobj_ba0bc878ff42bb0f15a64e2407dc4f08, _module___main__ );
    }

    FrameGuard frame_guard( frame_lambda_3_lambda_of_function_4_main_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_lambda_3_lambda_of_function_4_main_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 118 );
        return LOOKUP_ATTRIBUTE( _python_var_x.asObject(), _python_str_plain_chrom );
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_x.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_lambda_3_lambda_of_function_4_main_of_module___main__ )
        {
           Py_DECREF( frame_lambda_3_lambda_of_function_4_main_of_module___main__ );
           frame_lambda_3_lambda_of_function_4_main_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *_fparse_lambda_3_lambda_of_function_4_main_of_module___main__( Nuitka_FunctionObject *self, PyObject *args, PyObject *kw )
{
    assert( PyTuple_Check( args ) );
    assert( kw == NULL || PyDict_Check( kw ) );

    Py_ssize_t args_size = PyTuple_GET_SIZE( args );
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_x == key )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_x, key ) )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "<lambda>() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "<lambda>() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_x != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 0 ) );
    }


    return impl_lambda_3_lambda_of_function_4_main_of_module___main__( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}


NUITKA_LOCAL_MODULE PyObject *impl_dictcontr_4_of_function_4_main_of_module___main__( PyObject *_python_par___iterator )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var___iterator( _python_str_plain___iterator, _python_par___iterator );
    PyObjectLocalVariable _python_var_chrom( _python_str_plain_chrom );
    PyObjectLocalVariable _python_var_dlist( _python_str_plain_dlist );

    // Actual function code.
    FrameGuardVeryLight frame_guard;

    {
        PyObjectTemporary _python_tmp_result( PyDict_New() );
        {
            frame_guard.setLineNumber( 120 );
            PyObject *_python_tmp_contraction_iter = _python_var___iterator.asObject();
            while( true )
            {
                frame_guard.setLineNumber( 120 );
                PyObject *_tmp_unpack_1 = ITERATOR_NEXT( _python_tmp_contraction_iter );

                if ( _tmp_unpack_1 == NULL )
                {
                    break;
                }
                PyObjectTemporary _python_tmp_iter_value( _tmp_unpack_1 );
                {
                    frame_guard.setLineNumber( 120 );
                    PyObjectTemporary _python_tmp_source_iter( MAKE_ITERATOR( _python_tmp_iter_value.asObject() ) );
                    PyObjectTemporary _python_tmp_element_1( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 0 ) );
                    PyObjectTemporary _python_tmp_element_2( UNPACK_NEXT( _python_tmp_source_iter.asObject(), 1 ) );
                    UNPACK_ITERATOR_CHECK( _python_tmp_source_iter.asObject(), 2 );
                    _python_var_chrom.assign0( _python_tmp_element_1.asObject() );
                    _python_var_dlist.assign0( _python_tmp_element_2.asObject() );
                }
                DICT_SET_ITEM( _python_tmp_result.asObject(), _python_var_chrom.asObject(), PyObjectTemporary( TO_LIST( _python_var_dlist.asObject() ) ).asObject() ), Py_None;

               CONSIDER_THREADING();
            }
        }
        return INCREASE_REFCOUNT( _python_tmp_result.asObject() );
    }
}


static PyObject *impl_lambda_5_lambda_of_function_4_main_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_x( _python_str_plain_x, _python_par_x );

    // Actual function code.
    static PyFrameObject *frame_lambda_5_lambda_of_function_4_main_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_lambda_5_lambda_of_function_4_main_of_module___main__ ) )
    {
        if ( frame_lambda_5_lambda_of_function_4_main_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_5_lambda_of_function_4_main_of_module___main__" );
#endif
            Py_DECREF( frame_lambda_5_lambda_of_function_4_main_of_module___main__ );
        }

        frame_lambda_5_lambda_of_function_4_main_of_module___main__ = MAKE_FRAME( _codeobj_1961af640a37b5a9e63e79fa65d67be9, _module___main__ );
    }

    FrameGuard frame_guard( frame_lambda_5_lambda_of_function_4_main_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_lambda_5_lambda_of_function_4_main_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 120 );
        return LOOKUP_ATTRIBUTE( _python_var_x.asObject(), _python_str_plain_chrom );
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_x.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_lambda_5_lambda_of_function_4_main_of_module___main__ )
        {
           Py_DECREF( frame_lambda_5_lambda_of_function_4_main_of_module___main__ );
           frame_lambda_5_lambda_of_function_4_main_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *_fparse_lambda_5_lambda_of_function_4_main_of_module___main__( Nuitka_FunctionObject *self, PyObject *args, PyObject *kw )
{
    assert( PyTuple_Check( args ) );
    assert( kw == NULL || PyDict_Check( kw ) );

    Py_ssize_t args_size = PyTuple_GET_SIZE( args );
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_x == key )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_x, key ) )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "<lambda>() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "<lambda>() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_x != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 0 ) );
    }


    return impl_lambda_5_lambda_of_function_4_main_of_module___main__( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}


static PyObject *impl_lambda_6_lambda_of_function_4_main_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_x( _python_str_plain_x, _python_par_x );

    // Actual function code.
    static PyFrameObject *frame_lambda_6_lambda_of_function_4_main_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_lambda_6_lambda_of_function_4_main_of_module___main__ ) )
    {
        if ( frame_lambda_6_lambda_of_function_4_main_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_6_lambda_of_function_4_main_of_module___main__" );
#endif
            Py_DECREF( frame_lambda_6_lambda_of_function_4_main_of_module___main__ );
        }

        frame_lambda_6_lambda_of_function_4_main_of_module___main__ = MAKE_FRAME( _codeobj_3e0fa4d2fceab70f6822bef546f42175, _module___main__ );
    }

    FrameGuard frame_guard( frame_lambda_6_lambda_of_function_4_main_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_lambda_6_lambda_of_function_4_main_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 133 );
        return LOOKUP_ATTRIBUTE( _python_var_x.asObject(), _python_str_plain_chrom );
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_x.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_lambda_6_lambda_of_function_4_main_of_module___main__ )
        {
           Py_DECREF( frame_lambda_6_lambda_of_function_4_main_of_module___main__ );
           frame_lambda_6_lambda_of_function_4_main_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *_fparse_lambda_6_lambda_of_function_4_main_of_module___main__( Nuitka_FunctionObject *self, PyObject *args, PyObject *kw )
{
    assert( PyTuple_Check( args ) );
    assert( kw == NULL || PyDict_Check( kw ) );

    Py_ssize_t args_size = PyTuple_GET_SIZE( args );
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_x == key )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_x, key ) )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "<lambda>() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "<lambda>() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_x != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 0 ) );
    }


    return impl_lambda_6_lambda_of_function_4_main_of_module___main__( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}


static PyObject *impl_lambda_7_lambda_of_function_4_main_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_x( _python_str_plain_x, _python_par_x );

    // Actual function code.
    static PyFrameObject *frame_lambda_7_lambda_of_function_4_main_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_lambda_7_lambda_of_function_4_main_of_module___main__ ) )
    {
        if ( frame_lambda_7_lambda_of_function_4_main_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_7_lambda_of_function_4_main_of_module___main__" );
#endif
            Py_DECREF( frame_lambda_7_lambda_of_function_4_main_of_module___main__ );
        }

        frame_lambda_7_lambda_of_function_4_main_of_module___main__ = MAKE_FRAME( _codeobj_40348a611a8c2703d2930d6da816052a, _module___main__ );
    }

    FrameGuard frame_guard( frame_lambda_7_lambda_of_function_4_main_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_lambda_7_lambda_of_function_4_main_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 141 );
        return LOOKUP_ATTRIBUTE( _python_var_x.asObject(), _python_str_plain_start );
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_x.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_lambda_7_lambda_of_function_4_main_of_module___main__ )
        {
           Py_DECREF( frame_lambda_7_lambda_of_function_4_main_of_module___main__ );
           frame_lambda_7_lambda_of_function_4_main_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *_fparse_lambda_7_lambda_of_function_4_main_of_module___main__( Nuitka_FunctionObject *self, PyObject *args, PyObject *kw )
{
    assert( PyTuple_Check( args ) );
    assert( kw == NULL || PyDict_Check( kw ) );

    Py_ssize_t args_size = PyTuple_GET_SIZE( args );
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_x == key )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_x, key ) )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "<lambda>() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "<lambda>() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_x != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 0 ) );
    }


    return impl_lambda_7_lambda_of_function_4_main_of_module___main__( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}


static PyObject *impl_lambda_8_lambda_of_function_4_main_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_x )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_x( _python_str_plain_x, _python_par_x );

    // Actual function code.
    static PyFrameObject *frame_lambda_8_lambda_of_function_4_main_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_lambda_8_lambda_of_function_4_main_of_module___main__ ) )
    {
        if ( frame_lambda_8_lambda_of_function_4_main_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for lambda_8_lambda_of_function_4_main_of_module___main__" );
#endif
            Py_DECREF( frame_lambda_8_lambda_of_function_4_main_of_module___main__ );
        }

        frame_lambda_8_lambda_of_function_4_main_of_module___main__ = MAKE_FRAME( _codeobj_ba87d533bce20217ef5367f5d61b1b25, _module___main__ );
    }

    FrameGuard frame_guard( frame_lambda_8_lambda_of_function_4_main_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_lambda_8_lambda_of_function_4_main_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 142 );
        return LOOKUP_ATTRIBUTE( _python_var_x.asObject(), _python_str_plain_start );
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_x.updateLocalsDict( PyDict_New() );

        if ( frame_guard.getFrame0() == frame_lambda_8_lambda_of_function_4_main_of_module___main__ )
        {
           Py_DECREF( frame_lambda_8_lambda_of_function_4_main_of_module___main__ );
           frame_lambda_8_lambda_of_function_4_main_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *_fparse_lambda_8_lambda_of_function_4_main_of_module___main__( Nuitka_FunctionObject *self, PyObject *args, PyObject *kw )
{
    assert( PyTuple_Check( args ) );
    assert( kw == NULL || PyDict_Check( kw ) );

    Py_ssize_t args_size = PyTuple_GET_SIZE( args );
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_x = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_x == key )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_x, key ) )
            {
                if (unlikely( _python_par_x ))
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
                    goto error_exit;
                }

                _python_par_x = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "<lambda>() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "<lambda>() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "<lambda>() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_x != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "<lambda>() got multiple values for keyword argument 'x'" );
             goto error_exit;
         }

        _python_par_x = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 0 ) );
    }


    return impl_lambda_8_lambda_of_function_4_main_of_module___main__( self, _python_par_x );

error_exit:;

    Py_XDECREF( _python_par_x );

    return NULL;
}


static PyObject *impl_function_9_isBoundary_of_function_4_main_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_d1, PyObject *_python_par_d2 )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_d1( _python_str_plain_d1, _python_par_d1 );
    PyObjectLocalParameterVariableNoDel _python_var_d2( _python_str_plain_d2, _python_par_d2 );

    // Actual function code.
    static PyFrameObject *frame_function_9_isBoundary_of_function_4_main_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_function_9_isBoundary_of_function_4_main_of_module___main__ ) )
    {
        if ( frame_function_9_isBoundary_of_function_4_main_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_9_isBoundary_of_function_4_main_of_module___main__" );
#endif
            Py_DECREF( frame_function_9_isBoundary_of_function_4_main_of_module___main__ );
        }

        frame_function_9_isBoundary_of_function_4_main_of_module___main__ = MAKE_FRAME( _codeobj_40b7b0914b4ec885000d16eaf40a8831, _module___main__ );
    }

    FrameGuard frame_guard( frame_function_9_isBoundary_of_function_4_main_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_function_9_isBoundary_of_function_4_main_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 153 );
        {
            PyObjectTempKeeper1 op1;
            return RICH_COMPARE_LE( PyObjectTemporary( ( op1.assign( LOOKUP_ATTRIBUTE( _python_var_d2.asObject(), _python_str_plain_start ) ), BINARY_OPERATION_SUB( op1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_d1.asObject(), _python_str_plain_stop ) ).asObject() ) ) ).asObject(), _python_int_pos_400000 );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_d2.updateLocalsDict( _python_var_d1.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_9_isBoundary_of_function_4_main_of_module___main__ )
        {
           Py_DECREF( frame_function_9_isBoundary_of_function_4_main_of_module___main__ );
           frame_function_9_isBoundary_of_function_4_main_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *_fparse_function_9_isBoundary_of_function_4_main_of_module___main__( Nuitka_FunctionObject *self, PyObject *args, PyObject *kw )
{
    assert( PyTuple_Check( args ) );
    assert( kw == NULL || PyDict_Check( kw ) );

    Py_ssize_t args_size = PyTuple_GET_SIZE( args );
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_d1 = NULL;
    PyObject *_python_par_d2 = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "isBoundary() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_d1 == key )
            {
                if (unlikely( _python_par_d1 ))
                {
                    PyErr_Format( PyExc_TypeError, "isBoundary() got multiple values for keyword argument 'd1'" );
                    goto error_exit;
                }

                _python_par_d1 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_d2 == key )
            {
                if (unlikely( _python_par_d2 ))
                {
                    PyErr_Format( PyExc_TypeError, "isBoundary() got multiple values for keyword argument 'd2'" );
                    goto error_exit;
                }

                _python_par_d2 = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_d1, key ) )
            {
                if (unlikely( _python_par_d1 ))
                {
                    PyErr_Format( PyExc_TypeError, "isBoundary() got multiple values for keyword argument 'd1'" );
                    goto error_exit;
                }

                _python_par_d1 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_d2, key ) )
            {
                if (unlikely( _python_par_d2 ))
                {
                    PyErr_Format( PyExc_TypeError, "isBoundary() got multiple values for keyword argument 'd2'" );
                    goto error_exit;
                }

                _python_par_d2 = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "isBoundary() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "isBoundary() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "isBoundary() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "isBoundary() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "isBoundary() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "isBoundary() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "isBoundary() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "isBoundary() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "isBoundary() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "isBoundary() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "isBoundary() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "isBoundary() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "isBoundary() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_d1 != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "isBoundary() got multiple values for keyword argument 'd1'" );
             goto error_exit;
         }

        _python_par_d1 = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 0 ) );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_d2 != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "isBoundary() got multiple values for keyword argument 'd2'" );
             goto error_exit;
         }

        _python_par_d2 = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 1 ) );
    }


    return impl_function_9_isBoundary_of_function_4_main_of_module___main__( self, _python_par_d1, _python_par_d2 );

error_exit:;

    Py_XDECREF( _python_par_d1 );
    Py_XDECREF( _python_par_d2 );

    return NULL;
}


static PyObject *impl_function_10_boundaryMidpoint_of_function_4_main_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_d1, PyObject *_python_par_d2 )
{
    // No context is used.

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_d1( _python_str_plain_d1, _python_par_d1 );
    PyObjectLocalParameterVariableNoDel _python_var_d2( _python_str_plain_d2, _python_par_d2 );

    // Actual function code.
    static PyFrameObject *frame_function_10_boundaryMidpoint_of_function_4_main_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_function_10_boundaryMidpoint_of_function_4_main_of_module___main__ ) )
    {
        if ( frame_function_10_boundaryMidpoint_of_function_4_main_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_10_boundaryMidpoint_of_function_4_main_of_module___main__" );
#endif
            Py_DECREF( frame_function_10_boundaryMidpoint_of_function_4_main_of_module___main__ );
        }

        frame_function_10_boundaryMidpoint_of_function_4_main_of_module___main__ = MAKE_FRAME( _codeobj_2a7b5c2d688e14d56a1fba9bab6f2fd3, _module___main__ );
    }

    FrameGuard frame_guard( frame_function_10_boundaryMidpoint_of_function_4_main_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_function_10_boundaryMidpoint_of_function_4_main_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 156 );
        {
            PyObjectTempKeeper1 op1;
            return BINARY_OPERATION_DIV( PyObjectTemporary( ( op1.assign( LOOKUP_ATTRIBUTE( _python_var_d2.asObject(), _python_str_plain_start ) ), BINARY_OPERATION_ADD( op1.asObject0(), PyObjectTemporary( LOOKUP_ATTRIBUTE( _python_var_d1.asObject(), _python_str_plain_stop ) ).asObject() ) ) ).asObject(), _python_int_pos_2 );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_d2.updateLocalsDict( _python_var_d1.updateLocalsDict( PyDict_New() ) );

        if ( frame_guard.getFrame0() == frame_function_10_boundaryMidpoint_of_function_4_main_of_module___main__ )
        {
           Py_DECREF( frame_function_10_boundaryMidpoint_of_function_4_main_of_module___main__ );
           frame_function_10_boundaryMidpoint_of_function_4_main_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *_fparse_function_10_boundaryMidpoint_of_function_4_main_of_module___main__( Nuitka_FunctionObject *self, PyObject *args, PyObject *kw )
{
    assert( PyTuple_Check( args ) );
    assert( kw == NULL || PyDict_Check( kw ) );

    Py_ssize_t args_size = PyTuple_GET_SIZE( args );
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_d1 = NULL;
    PyObject *_python_par_d2 = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "boundaryMidpoint() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_d1 == key )
            {
                if (unlikely( _python_par_d1 ))
                {
                    PyErr_Format( PyExc_TypeError, "boundaryMidpoint() got multiple values for keyword argument 'd1'" );
                    goto error_exit;
                }

                _python_par_d1 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && _python_str_plain_d2 == key )
            {
                if (unlikely( _python_par_d2 ))
                {
                    PyErr_Format( PyExc_TypeError, "boundaryMidpoint() got multiple values for keyword argument 'd2'" );
                    goto error_exit;
                }

                _python_par_d2 = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_d1, key ) )
            {
                if (unlikely( _python_par_d1 ))
                {
                    PyErr_Format( PyExc_TypeError, "boundaryMidpoint() got multiple values for keyword argument 'd1'" );
                    goto error_exit;
                }

                _python_par_d1 = value;

                found = true;
                kw_found += 1;
            }
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_d2, key ) )
            {
                if (unlikely( _python_par_d2 ))
                {
                    PyErr_Format( PyExc_TypeError, "boundaryMidpoint() got multiple values for keyword argument 'd2'" );
                    goto error_exit;
                }

                _python_par_d2 = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "boundaryMidpoint() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 2 ))
    {
        if ( 2 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "boundaryMidpoint() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "boundaryMidpoint() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "boundaryMidpoint() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "boundaryMidpoint() takes exactly %d arguments (%zd given)", 2, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "boundaryMidpoint() takes exactly %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "boundaryMidpoint() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#else
            if ( 2 == 2 )
            {
                PyErr_Format( PyExc_TypeError, "boundaryMidpoint() takes %d positional arguments but %zd were given", 2, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "boundaryMidpoint() takes at most %d positional arguments (%zd given)", 2, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 2 ))
    {
        if ( 2 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "boundaryMidpoint() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "boundaryMidpoint() takes exactly %d non-keyword arguments (%zd given)", 2, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 2 == 2 )
                {
                    PyErr_Format( PyExc_TypeError, "boundaryMidpoint() takes exactly %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "boundaryMidpoint() takes at least %d arguments (%zd given)", 2, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 2 ? args_given : 2;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_d1 != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "boundaryMidpoint() got multiple values for keyword argument 'd1'" );
             goto error_exit;
         }

        _python_par_d1 = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 0 ) );
    }
    if (likely( 1 < args_usable_count ))
    {
         if (unlikely( _python_par_d2 != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "boundaryMidpoint() got multiple values for keyword argument 'd2'" );
             goto error_exit;
         }

        _python_par_d2 = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 1 ) );
    }


    return impl_function_10_boundaryMidpoint_of_function_4_main_of_module___main__( self, _python_par_d1, _python_par_d2 );

error_exit:;

    Py_XDECREF( _python_par_d1 );
    Py_XDECREF( _python_par_d2 );

    return NULL;
}


static PyObject *impl_function_11_isValidLocus_of_function_4_main_of_module___main__( Nuitka_FunctionObject *self, PyObject *_python_par_l )
{
    // The context of the function.
    struct _context_function_11_isValidLocus_of_function_4_main_of_module___main___t *_python_context = (struct _context_function_11_isValidLocus_of_function_4_main_of_module___main___t *)self->m_context;

    // Local variable declarations.
    PyObjectLocalParameterVariableNoDel _python_var_l( _python_str_plain_l, _python_par_l );

    // Actual function code.
    static PyFrameObject *frame_function_11_isValidLocus_of_function_4_main_of_module___main__ = NULL;

    if ( isFrameUnusable( frame_function_11_isValidLocus_of_function_4_main_of_module___main__ ) )
    {
        if ( frame_function_11_isValidLocus_of_function_4_main_of_module___main__ )
        {
#if _DEBUG_REFRAME
            puts( "reframe for function_11_isValidLocus_of_function_4_main_of_module___main__" );
#endif
            Py_DECREF( frame_function_11_isValidLocus_of_function_4_main_of_module___main__ );
        }

        frame_function_11_isValidLocus_of_function_4_main_of_module___main__ = MAKE_FRAME( _codeobj_5113f53d5a63400bc8d0611429b000e5, _module___main__ );
    }

    FrameGuard frame_guard( frame_function_11_isValidLocus_of_function_4_main_of_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_function_11_isValidLocus_of_function_4_main_of_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 159 );
        {
            PyObjectTempKeeper1 cmp5;
            PyObjectTempKeeper1 keeper_0;
            PyObjectTempKeeper0 op1;
            PyObjectTempKeeper0 op3;
            return ( CHECK_IF_TRUE( keeper_0.assign( RICH_COMPARE_GE( PyObjectTemporary( ( op1.assign( _python_var_l.asObject() ), BINARY_OPERATION_ADD( op1.asObject0(), _python_context->python_closure_winUp.asObject() ) ) ).asObject(), _python_int_0 ) ) ) ? ( cmp5.assign( ( op3.assign( _python_var_l.asObject() ), BINARY_OPERATION_ADD( op3.asObject0(), _python_context->python_closure_winDown.asObject() ) ) ), RICH_COMPARE_LT( cmp5.asObject0(), _python_context->python_closure_lastFeatPos.asObject() ) ) : keeper_0.asObject() );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = _python_var_l.updateLocalsDict( _python_context->python_closure_lastFeatPos.updateLocalsDict( _python_context->python_closure_winDown.updateLocalsDict( _python_context->python_closure_winUp.updateLocalsDict( PyDict_New() ) ) ) );

        if ( frame_guard.getFrame0() == frame_function_11_isValidLocus_of_function_4_main_of_module___main__ )
        {
           Py_DECREF( frame_function_11_isValidLocus_of_function_4_main_of_module___main__ );
           frame_function_11_isValidLocus_of_function_4_main_of_module___main__ = NULL;
        }

        _exception.toPython();
        return NULL;
    }

}
static PyObject *_fparse_function_11_isValidLocus_of_function_4_main_of_module___main__( Nuitka_FunctionObject *self, PyObject *args, PyObject *kw )
{
    assert( PyTuple_Check( args ) );
    assert( kw == NULL || PyDict_Check( kw ) );

    Py_ssize_t args_size = PyTuple_GET_SIZE( args );
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_size = kw ? PyDict_Size( kw ) : 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_found = 0;
    NUITKA_MAY_BE_UNUSED Py_ssize_t kw_only_found = 0;
    Py_ssize_t args_given = args_size;
    PyObject *_python_par_l = NULL;
    Py_ssize_t args_usable_count;
    // Copy given dictionary values to the the respective variables:
    if ( kw_size > 0 )
    {
        Py_ssize_t ppos = 0;
        PyObject *key, *value;

        while( PyDict_Next( kw, &ppos, &key, &value ) )
        {
#if PYTHON_VERSION < 300
            if (unlikely( !PyString_Check( key ) && !PyUnicode_Check( key ) ))
#else
            if (unlikely( !PyUnicode_Check( key ) ))
#endif
            {
                PyErr_Format( PyExc_TypeError, "isValidLocus() keywords must be strings" );
                goto error_exit;
            }

            NUITKA_MAY_BE_UNUSED bool found = false;

            Py_INCREF( key );
            Py_INCREF( value );

            // Quick path, could be our value.
            if ( found == false && _python_str_plain_l == key )
            {
                if (unlikely( _python_par_l ))
                {
                    PyErr_Format( PyExc_TypeError, "isValidLocus() got multiple values for keyword argument 'l'" );
                    goto error_exit;
                }

                _python_par_l = value;

                found = true;
                kw_found += 1;
            }

            // Slow path, compare against all parameter names.
            if ( found == false && RICH_COMPARE_BOOL_EQ_PARAMETERS( _python_str_plain_l, key ) )
            {
                if (unlikely( _python_par_l ))
                {
                    PyErr_Format( PyExc_TypeError, "isValidLocus() got multiple values for keyword argument 'l'" );
                    goto error_exit;
                }

                _python_par_l = value;

                found = true;
                kw_found += 1;
            }


            Py_DECREF( key );

            if ( found == false )
            {
               Py_DECREF( value );

               PyErr_Format(
                   PyExc_TypeError,
                   "isValidLocus() got an unexpected keyword argument '%s'",
                   Nuitka_String_Check( key ) ? Nuitka_String_AsString( key ) : "<non-string>"
               );

               goto error_exit;
            }
        }

#if PYTHON_VERSION < 300
        assert( kw_found == kw_size );
        assert( kw_only_found == 0 );
#endif
    }

    // Check if too many arguments were given in case of non star args
    if (unlikely( args_given > 1 ))
    {
        if ( 1 == 1 )
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "isValidLocus() takes exactly 1 argument (%zd given)", args_given + kw_found );
#elif PYTHON_VERSION < 330
            PyErr_Format( PyExc_TypeError, "isValidLocus() takes exactly 1 positional argument (%zd given)", args_given + kw_only_found );
#else
            PyErr_Format( PyExc_TypeError, "isValidLocus() takes 1 positional argument but %zd were given", args_given + kw_only_found );
#endif
        }
        else
        {
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_TypeError, "isValidLocus() takes exactly %d arguments (%zd given)", 1, args_given + kw_size );
#elif PYTHON_VERSION < 330
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "isValidLocus() takes exactly %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "isValidLocus() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#else
            if ( 1 == 1 )
            {
                PyErr_Format( PyExc_TypeError, "isValidLocus() takes %d positional arguments but %zd were given", 1, args_given + kw_only_found );
            }
            else
            {
                PyErr_Format( PyExc_TypeError, "isValidLocus() takes at most %d positional arguments (%zd given)", 1, args_given + kw_only_found );
            }
#endif
        }

        goto error_exit;
    }

    // Check if too little arguments were given.
    if (unlikely( args_given + kw_found - kw_only_found < 1 ))
    {
        if ( 1 == 1 )
        {
            PyErr_Format( PyExc_TypeError, "isValidLocus() takes exactly 1 argument (%zd given)", args_given + kw_found - kw_only_found );
        }
        else
        {
#if PYTHON_VERSION < 270
            if ( kw_size > 0 )
            {
                PyErr_Format( PyExc_TypeError, "isValidLocus() takes exactly %d non-keyword arguments (%zd given)", 1, args_given + kw_found  );
            }
            else
#endif
            {
                if ( 1 == 1 )
                {
                    PyErr_Format( PyExc_TypeError, "isValidLocus() takes exactly %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
                else
                {
                    PyErr_Format( PyExc_TypeError, "isValidLocus() takes at least %d arguments (%zd given)", 1, args_given + kw_found - kw_only_found );
                }
            }
        }

        goto error_exit;
    }

    // Copy normal parameter values given as part of the args list to the respective variables:
    args_usable_count = args_given < 1 ? args_given : 1;

    if (likely( 0 < args_usable_count ))
    {
         if (unlikely( _python_par_l != NULL ))
         {
             PyErr_Format( PyExc_TypeError, "isValidLocus() got multiple values for keyword argument 'l'" );
             goto error_exit;
         }

        _python_par_l = INCREASE_REFCOUNT( PyTuple_GET_ITEM( args, 0 ) );
    }


    return impl_function_11_isValidLocus_of_function_4_main_of_module___main__( self, _python_par_l );

error_exit:;

    Py_XDECREF( _python_par_l );

    return NULL;
}



static PyObject *MAKE_FUNCTION_function_10_boundaryMidpoint_of_function_4_main_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        _fparse_function_10_boundaryMidpoint_of_function_4_main_of_module___main__,
        NULL,
        _python_str_plain_boundaryMidpoint,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_2a7b5c2d688e14d56a1fba9bab6f2fd3,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_11_isValidLocus_of_function_4_main_of_module___main__( PyObjectSharedLocalVariable &python_closure_lastFeatPos, PyObjectSharedLocalVariable &python_closure_winDown, PyObjectSharedLocalVariable &python_closure_winUp )
{
    struct _context_function_11_isValidLocus_of_function_4_main_of_module___main___t *_python_context = new _context_function_11_isValidLocus_of_function_4_main_of_module___main___t;

    // Copy the parameter default values and closure values over.
    _python_context->python_closure_lastFeatPos.shareWith( python_closure_lastFeatPos );
    _python_context->python_closure_winDown.shareWith( python_closure_winDown );
    _python_context->python_closure_winUp.shareWith( python_closure_winUp );

    PyObject *result = Nuitka_Function_New(
        _fparse_function_11_isValidLocus_of_function_4_main_of_module___main__,
        NULL,
        _python_str_plain_isValidLocus,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_5113f53d5a63400bc8d0611429b000e5,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module___main__,
        Py_None,
        _python_context,
        _context_function_11_isValidLocus_of_function_4_main_of_module___main___destructor
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_1___init___of_class_1_Domain_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        _fparse_function_1___init___of_class_1_Domain_of_module___main__,
        _mparse_function_1___init___of_class_1_Domain_of_module___main__,
        _python_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_4cdfcb35486aaeb95489f4f5567bfe06,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_center_of_class_1_Domain_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        _fparse_function_2_center_of_class_1_Domain_of_module___main__,
        _mparse_function_2_center_of_class_1_Domain_of_module___main__,
        _python_str_plain_center,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_45cd8c1e4bb0fefdb4a0a47611fe6ff6,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_2_processPeaks_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        _fparse_function_2_processPeaks_of_module___main__,
        NULL,
        _python_str_plain_processPeaks,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_9dc3f027de29dc0cbf7b850431438629,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_3_processSignal_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        _fparse_function_3_processSignal_of_module___main__,
        NULL,
        _python_str_plain_processSignal,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3043f609e2dd0a0c732273b02113e78a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_4_main_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        _fparse_function_4_main_of_module___main__,
        NULL,
        _python_str_plain_main,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_db705fa97cb027949eedf47e30a83952,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_function_9_isBoundary_of_function_4_main_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        _fparse_function_9_isBoundary_of_function_4_main_of_module___main__,
        NULL,
        _python_str_plain_isBoundary,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_40b7b0914b4ec885000d16eaf40a8831,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_1_lambda_of_function_4_main_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        _fparse_lambda_1_lambda_of_function_4_main_of_module___main__,
        NULL,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_fe7e41cf266be56a879b1d02a7f026a8,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_3_lambda_of_function_4_main_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        _fparse_lambda_3_lambda_of_function_4_main_of_module___main__,
        NULL,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ba0bc878ff42bb0f15a64e2407dc4f08,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_5_lambda_of_function_4_main_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        _fparse_lambda_5_lambda_of_function_4_main_of_module___main__,
        NULL,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_1961af640a37b5a9e63e79fa65d67be9,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_6_lambda_of_function_4_main_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        _fparse_lambda_6_lambda_of_function_4_main_of_module___main__,
        NULL,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_3e0fa4d2fceab70f6822bef546f42175,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_7_lambda_of_function_4_main_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        _fparse_lambda_7_lambda_of_function_4_main_of_module___main__,
        NULL,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_40348a611a8c2703d2930d6da816052a,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module___main__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_lambda_8_lambda_of_function_4_main_of_module___main__(  )
{
    PyObject *result = Nuitka_Function_New(
        _fparse_lambda_8_lambda_of_function_4_main_of_module___main__,
        NULL,
        _python_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        _codeobj_ba87d533bce20217ef5367f5d61b1b25,
        INCREASE_REFCOUNT( Py_None ),
#if PYTHON_VERSION >= 300
        INCREASE_REFCOUNT( Py_None ),
        NULL,
#endif
        _module___main__,
        Py_None
    );

    return result;
}


#if PYTHON_VERSION >= 300
static struct PyModuleDef _moduledef =
{
    PyModuleDef_HEAD_INIT,
    "__main__",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

#define _MODULE_UNFREEZER 0

#if _MODULE_UNFREEZER
// For embedded modules, to be unpacked. Used by main program/package only
extern void registerMetaPathBasedUnfreezer( struct _inittab *_frozen_modules );

// Our own inittab for lookup of "frozen" modules, i.e. the ones included in this binary.
static struct _inittab _frozen_modules[] =
{

    { NULL, NULL }
};

// For loader attribute.
#if PYTHON_VERSION >= 330
extern PyObject *loader_frozen_modules;
#endif

#endif

#ifdef _NUITKA_EXE
static bool init_done = false;
#endif

// The exported interface to CPython. On import of the module, this function gets
// called. It has have that exact function name.

MOD_INIT_DECL( __main__ )
{
#ifdef _NUITKA_EXE
    // Packages can be imported recursively in deep executables.
    if ( init_done )
    {
        return MOD_RETURN_VALUE( _module___main__ );
    }
    else
    {
        init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization the init here
    // because that's how we are going to get called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    _initConstants();

    // Initialize the compiled types of Nuitka.
    PyType_Ready( &Nuitka_Generator_Type );
    PyType_Ready( &Nuitka_Function_Type );
    PyType_Ready( &Nuitka_Method_Type );
    PyType_Ready( &Nuitka_Frame_Type );

    patchInspectModule();

    patchBuiltinModule();
#endif

#if _MODULE_UNFREEZER
    registerMetaPathBasedUnfreezer( _frozen_modules );
#endif

    // puts( "in init__main__" );

    // Create the module object first. There are no methods initially, all are added
    // dynamically in actual code only.  Also no __doc__ is initially set, as it could not
    // contain 0 this way, added early in actual code.  No self for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    _module___main__ = Py_InitModule4(
        "__main__",       // Module Name
        NULL,                    // No methods initially, all are added dynamically in actual code only.
        NULL,                    // No __doc__ is initially set, as it could not contain 0 this way, added early in actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    _module___main__ = PyModule_Create( &_moduledef );
#endif

    _moduledict___main__ = (PyDictObject *)((PyModuleObject *)_module___main__)->md_dict;

    assertObject( _module___main__ );

#ifndef _NUITKA_MODULE
// Seems to work for Python2.7 out of the box, but for Python3.2, the module doesn't automatically enter
// "sys.modules" with the object that it should, so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), _python_str_plain___main__, _module___main__ );

        assert( r != -1 );
    }
#endif
#endif

    // For deep importing of a module we need to have "__builtins__", so we set it
    // ourselves in the same way than CPython does. Note: This must be done before
    // the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( _module___main__ );

    if ( PyDict_GetItem( module_dict, _python_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = ( PyObject *)module_builtin;

#ifdef _NUITKA_EXE
        if ( _module___main__ != _module___main__ )
        {
            value = PyModule_GetDict( value );
        }
#endif

#ifndef __NUITKA_NO_ASSERT__
        int res =
#endif
            PyDict_SetItem( module_dict, _python_str_plain___builtins__, value );

        assert( res == 0 );
    }

#if PYTHON_VERSION >= 330
#if _MODULE_UNFREEZER
    PyDict_SetItem( module_dict, _python_str_plain___loader__, loader_frozen_modules );
#else
    PyDict_SetItem( module_dict, _python_str_plain___loader__, Py_None );
#endif
#endif

    // Module code
    UPDATE_STRING_DICT0( _moduledict___main__, (Nuitka_StringObject *)_python_str_plain___doc__, _python_str_digest_d98f321d05a4cbcb8d879727b9d89c5f );
    UPDATE_STRING_DICT0( _moduledict___main__, (Nuitka_StringObject *)_python_str_plain___file__, _python_str_digest_6db5b7658154875cb20ec23242e200d6 );
    PyFrameObject *frame_module___main__ = MAKE_FRAME( _codeobj_a950acda6ae899b07047749eb8237768, _module___main__ );

    FrameGuard frame_guard( frame_module___main__ );
    try
    {
        assert( Py_REFCNT( frame_module___main__ ) == 2 ); // Frame stack
        frame_guard.setLineNumber( 12 );
        UPDATE_STRING_DICT1( _moduledict___main__, (Nuitka_StringObject *)_python_str_plain_docopt, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_docopt, ((PyModuleObject *)_module___main__)->md_dict, ((PyModuleObject *)_module___main__)->md_dict, _python_list_str_plain_docopt_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_docopt ) );
        frame_guard.setLineNumber( 13 );
        UPDATE_STRING_DICT1( _moduledict___main__, (Nuitka_StringObject *)_python_str_plain_Features, IMPORT_MODULE( _python_str_plain_Features, ((PyModuleObject *)_module___main__)->md_dict, ((PyModuleObject *)_module___main__)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 14 );
        UPDATE_STRING_DICT1( _moduledict___main__, (Nuitka_StringObject *)_python_str_plain_np, IMPORT_MODULE( _python_str_plain_numpy, ((PyModuleObject *)_module___main__)->md_dict, ((PyModuleObject *)_module___main__)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 15 );
        UPDATE_STRING_DICT1( _moduledict___main__, (Nuitka_StringObject *)_python_str_plain_matplotlib, IMPORT_MODULE( _python_str_plain_matplotlib, ((PyModuleObject *)_module___main__)->md_dict, ((PyModuleObject *)_module___main__)->md_dict, Py_None, _python_int_neg_1 ) );
        frame_guard.setLineNumber( 16 );
        UPDATE_STRING_DICT1( _moduledict___main__, (Nuitka_StringObject *)_python_str_plain_plt, IMPORT_NAME( PyObjectTemporary( IMPORT_MODULE( _python_str_plain_matplotlib, ((PyModuleObject *)_module___main__)->md_dict, ((PyModuleObject *)_module___main__)->md_dict, _python_list_str_plain_pyplot_list, _python_int_neg_1 ) ).asObject(), _python_str_plain_pyplot ) );
        {
            frame_guard.setLineNumber( 19 );
            PyObjectTemporary _python_tmp_bases( MAKE_TUPLE1( LOOKUP_BUILTIN( _python_str_plain_object ) ) );
            PyObjectTemporary _python_tmp_class_dict( impl_class_1_Domain_of_module___main__(  ) );
            PyObjectTemporary _python_tmp_metaclass( ( SEQUENCE_CONTAINS_BOOL( _python_str_plain___metaclass__, _python_tmp_class_dict.asObject() ) ? DICT_GET_ITEM( _python_tmp_class_dict.asObject(), _python_str_plain___metaclass__ ) : SELECT_METACLASS( _python_tmp_bases.asObject(), ( _mvar___main_____metaclass__.isInitialized( false ) ? _mvar___main_____metaclass__.asObject0() : NULL ) ) ) );
            PyObject *_tmp_python_tmp_class;
            {
                PyObjectTempKeeper0 call4;
                PyObjectTempKeeper0 make_tuple2;
                _tmp_python_tmp_class = ( call4.assign( _python_tmp_metaclass.asObject() ), CALL_FUNCTION_WITH_POSARGS( call4.asObject0(), PyObjectTemporary( ( make_tuple2.assign( _python_tmp_bases.asObject() ), MAKE_TUPLE3( _python_str_plain_Domain, make_tuple2.asObject0(), _python_tmp_class_dict.asObject() ) ) ).asObject() ) );
            }
            PyObjectTemporary _python_tmp_class( _tmp_python_tmp_class );
            UPDATE_STRING_DICT0( _moduledict___main__, (Nuitka_StringObject *)_python_str_plain_Domain, _python_tmp_class.asObject() );
        }
        UPDATE_STRING_DICT1( _moduledict___main__, (Nuitka_StringObject *)_python_str_plain_processPeaks, MAKE_FUNCTION_function_2_processPeaks_of_module___main__(  ) );
        UPDATE_STRING_DICT1( _moduledict___main__, (Nuitka_StringObject *)_python_str_plain_processSignal, MAKE_FUNCTION_function_3_processSignal_of_module___main__(  ) );
        UPDATE_STRING_DICT1( _moduledict___main__, (Nuitka_StringObject *)_python_str_plain_main, MAKE_FUNCTION_function_4_main_of_module___main__(  ) );
        frame_guard.setLineNumber( 231 );
        {
            PyObjectTempKeeper0 call6;
            UPDATE_STRING_DICT1( _moduledict___main__, (Nuitka_StringObject *)_python_str_plain_opts, ( call6.assign( _mvar___main___docopt.asObject0() ), CALL_FUNCTION( call6.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _mvar___main_____doc__.asObject0() ) ).asObject(), PyObjectTemporary( PyDict_Copy( _python_dict_545204919ac8f630f464787793212a65 ) ).asObject() ) ) );
        }
        frame_guard.setLineNumber( 232 );
        {
            PyObjectTempKeeper0 call9;
            DECREASE_REFCOUNT( ( call9.assign( _mvar___main___main.asObject0() ), CALL_FUNCTION_WITH_POSARGS( call9.asObject0(), PyObjectTemporary( MAKE_TUPLE1( _mvar___main___opts.asObject0() ) ).asObject() ) ) );
        }
    }
    catch ( PythonException &_exception )
    {
        if ( !_exception.hasTraceback() )
        {
            _exception.setTraceback( MAKE_TRACEBACK( frame_guard.getFrame() ) );
        }
        else
        {
            _exception.addTraceback( frame_guard.getFrame0() );
        }

#if 0
    // TODO: Recognize the need for it
        Py_XDECREF( frame_guard.getFrame0()->f_locals );
        frame_guard.getFrame0()->f_locals = INCREASE_REFCOUNT( ((PyModuleObject *)_module___main__)->md_dict );
#endif

    // TODO:
        _exception.toPython();
        return MOD_RETURN_VALUE( _module___main__ );
    }

   return MOD_RETURN_VALUE( _module___main__ );
}
// The main program for C++. It needs to prepare the interpreter and then calls the
// initialization code of the __main__ module.

int main( int argc, char *argv[] )
{
#ifdef _NUITKA_PORTABLE
    _initPortableEnvironment( argv[0] );
#endif

    // Initialize Python environment.
    Py_DebugFlag = 0;
#if 0
    Py_Py3kWarningFlag = 0;
#endif
#if 0
    Py_DivisionWarningFlag =
#if 0
        Py_Py3kWarningFlag ||
#endif
        0;
#endif
    Py_InspectFlag = 0;
    Py_InteractiveFlag = 0;
    Py_OptimizeFlag = 0;
    Py_DontWriteBytecodeFlag = 0;
    Py_NoUserSiteDirectory = 0;
    Py_NoSiteFlag = 0;
    Py_IgnoreEnvironmentFlag = 0;
#if 0
    Py_TabcheckFlag = 0;
#endif
    Py_VerboseFlag = 0;
#if 0
    Py_UnicodeFlag = 0;
#endif
    Py_BytesWarningFlag = 0;
#if 0
    Py_HashRandomizationFlag = 0;
#endif
    Py_Initialize();

    setCommandLineParameters( argc, argv );

    // Initialize the constant values used.
    _initBuiltinModule();
    _initConstants();
    _initBuiltinOriginalValues();

    // Initialize the compiled types of Nuitka.
    PyType_Ready( &Nuitka_Generator_Type );
    PyType_Ready( &Nuitka_Function_Type );
    PyType_Ready( &Nuitka_Method_Type );
    PyType_Ready( &Nuitka_Frame_Type );

    enhancePythonTypes();

    // Set the sys.executable path to the original Python executable on Linux
    // or to python.exe on Windows.
    PySys_SetObject(
        (char *)"executable",
        _python_str_digest_c33694c72d824dd28bdac36ec81a5e8c
    );

    patchInspectModule();

    patchBuiltinModule();

    // Execute the "__main__" module init function.
    MOD_INIT_NAME( __main__ )();

    if ( ERROR_OCCURED() )
    {
        // Cleanup code may need a frame, so put one back.
        PyThreadState_GET()->frame = MAKE_FRAME( _codeobj_a950acda6ae899b07047749eb8237768, _module___main__ );

        PyErr_PrintEx( 0 );
        Py_Exit( 1 );
    }
    else
    {
        Py_Exit( 0 );
    }
}
