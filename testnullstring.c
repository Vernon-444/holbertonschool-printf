#include <limits.h>
#include <stdio.h>
#include "main.h"

 /**
  * main - Entry point
  *
  * Return: Always 0
  */
int main(void)
{
	int number1 = 10;
	char *str1 = "this is a string";
	char *emptystring = "";
	char *str2 = "this is also a string";
	char *strwithnullmiddle = "this is a '\0' string with a null";
	char slashzero = '\0';
	
	_printf("String1: [%s] and String 2: [%s]\n", str1, str2);
	printf("String1: [%s] and String 2: [%s]\n", str1, str2);
	printf("Empty string here: [%s] does it print?\n", emptystring);
	_printf("Empty string here: [%s] does it print?\n", emptystring);
	printf("String with a null byte in the middle: [%s], does it print?\n", strwithnullmiddle);
	_printf("String with a null byte in the middle: [%s], does it print?\n", strwithnullmiddle);
	printf("Let's print a single character holding a null byte: [%c] just for fun\n", slashzero);
	_printf("Let's print a single character holding a null byte: [%c] just for fun\n", slashzero);
	/* printf("Let's try too few specifiers, str1: [%s] and another string but I don't tell it two args: [%s]\n", str1); */
	_printf("Let's try too few specifiers, str1: [%s] and another string but I don't tell it two args: [%s]\n", str1);
	/* printf("Let's give it an integer where it expects a string: [%s]\n", number1);*/
	_printf("Let's give it an integer where it expects a string: [%s]\n", number1);
	return (0);
}
