/*
* Filename: f3.cpp
* Project: Focused Assignment 3
* By: Mehtab Mohammed
* Date: February 2, 2023
* Description: Checks whether the number input by user is even or odd.
*/

#include <stdio.h>

int getNum(void);
int isOdd(int n);

int main(void) // this statement executes first in the programming language and contain other function to execute.
{
	printf("Enter a number to check whether the number is even or odd:\n");
	int z = getNum();
	int y = isOdd(z);
	if (y == 0)
	{
		printf("The number is even.\n");
	}
	else
	{
		printf("The number is odd.\n");
	}
}

#pragma warning(disable: 4996)
int getNum(void)
{
	/* the array is 121 bytes in size; we'll see in a later lecture how we can
	improve this code */
	char record[121] = { 0 }; /* record stores the string */
	int number = 0;
	/* NOTE to student: brace this function consistent with your others */
	/* use fgets() to get a string from the keyboard */
	fgets(record, 121, stdin);
	/* extract the number from the string; sscanf() returns a number
	* corresponding with the number of items it found in the string */
	if (sscanf(record, "%d", &number) != 1)
	{
		/* if the user did not enter a number recognizable by
		* the system, set number to -1 */
		number = -1;
	}
	return number;
}

int isOdd(int z) //this function checks condition with if else statement
{
	int y = 0;
	if (z % 2 == 0)
	{
		y = 0;
	}
	else
	{
		y = 1;
	}
	return y;
}

