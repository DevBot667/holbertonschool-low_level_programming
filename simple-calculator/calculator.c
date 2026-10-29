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
 * main - Entry point of the calculator
 *
 * Description: Displays a menu in a loop until the user chooses 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int choice;
	int ret;

	choice = -1;
	while (choice != 0)
	{
		print_menu();
		printf("Choice: ");
		ret = scanf("%d", &choice);
		if (ret != 1 || choice < 0 || choice > 4)
		{
			printf("Invalid choice\n");
			choice = -1;
		}
	}
	printf("Bye!\n");
	return (0);
}