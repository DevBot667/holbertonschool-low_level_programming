#include <stdio.h>

/**
 * print_menu - Prints the calculator menu
 */
void print_menu(void)
{
	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");
}

/**
 * read_operands - Asks the user for two numbers
 * @a: Pointer to the first number
 * @b: Pointer to the second number
 *
 * Return: 1 if both numbers were read, 0 otherwise
 */
int read_operands(double *a, double *b)
{
	printf("A: ");
	if (scanf("%lf", a) != 1)
		return (0);
	printf("B: ");
	if (scanf("%lf", b) != 1)
		return (0);
	return (1);
}

/**
 * do_operation - Reads two numbers and prints the result of an operation
 * @choice: The menu choice (1 add, 2 subtract, 3 multiply, 4 divide)
 */
void do_operation(int choice)
{
	double a, b;

	if (!read_operands(&a, &b))
	{
		printf("Invalid input\n");
		return;
	}
	if (choice == 1)
		printf("Result: %g\n", a + b);
	else if (choice == 2)
		printf("Result: %g\n", a - b);
	else if (choice == 3)
		printf("Result: %g\n", a * b);
	else if (b == 0)
		printf("Error: division by zero\n");
	else
		printf("Result: %g\n", a / b);
}

/**
 * main - Entry point of the calculator
 *
 * Description: Displays the menu, then asks for a choice
 * in a loop until the user chooses 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice;
	int ret;

	choice = -1;
	print_menu();
	while (choice != 0)
	{
		printf("Choice: ");
		ret = scanf("%d", &choice);
		if (ret != 1 || choice < 0 || choice > 4)
		{
			printf("Invalid choice\n");
			choice = -1;
		}
		else if (choice != 0)
		{
			do_operation(choice);
			print_menu();
		}
	}
	printf("Bye!\n");
	return (0);
}
