#ifndef __NUITKA_TUPLES_H__
#define __NUITKA_TUPLES_H__

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE1( PyObject *element0 )
{
    PyObject *result = PyTuple_New( 1 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE2( PyObject *element0, PyObject *element1 )
{
    PyObject *result = PyTuple_New( 2 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE3( PyObject *element0, PyObject *element1, PyObject *element2 )
{
    PyObject *result = PyTuple_New( 3 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE4( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3 )
{
    PyObject *result = PyTuple_New( 4 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_TUPLE5( PyObject *element0, PyObject *element1, PyObject *element2, PyObject *element3, PyObject *element4 )
{
    PyObject *result = PyTuple_New( 5 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyTuple_SET_ITEM( result, 0, INCREASE_REFCOUNT( element0 ) );
    assertObject( element1 );
    PyTuple_SET_ITEM( result, 1, INCREASE_REFCOUNT( element1 ) );
    assertObject( element2 );
    PyTuple_SET_ITEM( result, 2, INCREASE_REFCOUNT( element2 ) );
    assertObject( element3 );
    PyTuple_SET_ITEM( result, 3, INCREASE_REFCOUNT( element3 ) );
    assertObject( element4 );
    PyTuple_SET_ITEM( result, 4, INCREASE_REFCOUNT( element4 ) );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

#endif
#ifndef __NUITKA_LISTS_H__
#define __NUITKA_LISTS_H__

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST0(  )
{
    PyObject *result = PyList_New( 0 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }



    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST1( PyObject *element0 )
{
    PyObject *result = PyList_New( 1 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyList_SET_ITEM( result, 0, element0 );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_LIST3( PyObject *element0, PyObject *element1, PyObject *element2 )
{
    PyObject *result = PyList_New( 3 );

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( element0 );
    PyList_SET_ITEM( result, 0, element0 );
    assertObject( element1 );
    PyList_SET_ITEM( result, 1, element1 );
    assertObject( element2 );
    PyList_SET_ITEM( result, 2, element2 );

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

#endif
#ifndef __NUITKA_DICTS_H__
#define __NUITKA_DICTS_H__

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT0(  )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }



    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT1( PyObject *value1, PyObject *key1 )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

NUITKA_MAY_BE_UNUSED static PyObject *MAKE_DICT2( PyObject *value1, PyObject *key1, PyObject *value2, PyObject *key2 )
{
    PyObject *result = PyDict_New();

    if (unlikely( result == NULL ))
    {
        throw PythonException();
    }

    assertObject( key2 );
    assertObject( value2 );

    {
        int status = PyDict_SetItem( result, key2, value2 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }
    assertObject( key1 );
    assertObject( value1 );

    {
        int status = PyDict_SetItem( result, key1, value1 );

        if (unlikely( status == -1 ))
        {
            throw PythonException();
        }
    }

    assert( Py_REFCNT( result ) == 1 );

    return result;
}

#endif
