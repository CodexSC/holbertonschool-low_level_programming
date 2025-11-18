#include "function_pointers.h"
#include <string.h>

/**
 * get_op_func - Selects the correct function to perform an operation
 * @s: The operator passed as argument
 *
 * Return: Pointer to the function that corresponds to the operator,
 * or NULL if the operator is not recognized
 */
int (*get_op_func(char *s))(int, int)
{
	int i;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
