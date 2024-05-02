#include <Python.h>

static PyObject *hello() {
    return PyUnicode_FromString("Hello, world");
}

static PyMethodDef methods[] = {
    {"hello", hello, METH_NOARGS, NULL},
    {NULL, NULL, 0, NULL}
};

static PyModuleDef moduledef = {
    .m_base = PyModuleDef_HEAD_INIT,
    .m_name = "example",
    .m_methods = methods
};

PyMODINIT_FUNC PyInit_example(void)
{
    return PyModule_Create(&moduledef);
}
