#include <stdio.h>
/**
 * main - print the entry point
 *
 * codes for printing all possible combination of two d/t digits
 * in ascending order and separated by a commas followed by a space
 *
 * Return: 0 Success
 */
int main(void)
{
	int digit1, digit2, digit3;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			for
