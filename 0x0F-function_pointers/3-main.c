#include "3-calc.h"
/**
 * main - checks code
 * @argc: argument count
 * @argv: argument vector
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	char *operation;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	operation = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(operation) == NULL || operation[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*operation == '/' && num2 == 0) ||
	    (*operation == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(operation)(num1, num2));
	return (0);
}
