#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <time.h>
#include <Python.h>
#include <pytime.h>

/**
 * print_python_list_info - The function prints basic info about python objects
 * @p: PyObject
 */

void print_python_list_info(PyObject *p)
{
	int size;
	int allocate;
	int iter;
	PyObject *object;

	size = Py_SIZE(p);
	allocate = ((PyListObject *)p)->allocated;

	printf("[*] Size of the Python List = %d\n", size);
	printf("[*] Allocated = %d\n", allocate);
	for (iter = 0; iter < size; iter++)
	{
		printf("Element %d: ", iter);

		object = PyList_GetItem(p, iter);
		printf("%s\n", Py_TYPE(object)->tp_name);
	}
}
