#include <stdio.h>

/**
 * clear_input - Discards the rest of the current input line
 */
void clear_input(void)
{
	int c;

	c = getchar();
	while (c != '\n' && c != EOF)
		c = getchar();
}

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
 * read_number - Asks for a number until a valid one is entered
 * @label: The prompt to display (A or B)
 * @n: Pointer where the number is stored
 *
 * Return: 1 on success, 0 if the input ended (EOF)
 */
int read_number(char label, double *n)
{
	int ret;

	while (1)
	{
		printf("%c: ", label);
		ret = scanf("%lf", n);
		if (ret == EOF)
			return (0);
		clear_input();
		if (ret == 1)
			return (1);
		printf("Invalid number\n");
	}
}

/**
 * do_operation - Reads two numbers and prints the result of an operation
 * @choice: The menu choice (1 add, 2 subtract, 3 multiply, 4 divide)
 *
 * Return: 1 on success, 0 if the input ended (EOF)
 */
int do_operation(int choice)
{
	double a, b;

	if (!read_number('A', &a) || !read_number('B', &b))
		return (0);
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
	return (1);
}

/**
 * main - Entry point of the calculator
 *
 * Description: Displays the menu, then asks for a choice
 * in a loop until the user chooses 0 or the input ends
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
		if (ret == EOF)
			break;
		clear_input();
		if (ret != 1 || choice < 0 || choice > 4)
		{
			printf("Invalid choice\n");
			choice = -1;
		}
		else if (choice != 0)
		{
			if (!do_operation(choice))
				break;
			print_menu();
		}
	}
	printf("Bye!\n");
	return (0);
}
