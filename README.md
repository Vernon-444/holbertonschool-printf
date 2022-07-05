#Printf

This was a custom recreation of printf and a few conversion specifiers
with Doug D and Brayden V.

###What It Does:

_printf takes an input and uses conversion specifiers (examples provided)
to determine data type to be printed into a string.

###Examples:

> Using a string

> - _printf("%s", "Hello, World!");
> - Output: Hello World!

> - _printf("Hello %s!", "World!");
> - Output: Hello World!

> Using Characters

> - _printf("%c", 'A');
> - Output: A

> - _printf("Old Mcdonald had a farm, %c-%c-%c-%c-%c!", 'E', 'I', 'E', 'I', 'O');
> - Output: Old Mcdonald had a farm, E-I-E-I-O!

> Using Integers:

> - _printf("My favorite number is %d, because its two %i's", 44, 4);
> - Output: My favorite number is 44, because its two 4's

> - _printf("There are 12 eggs in a dozen, so 87 dozens is %d eggs", 87 * 12);
> - Output: There are 12 eggs in a dozen, so 87 dozens is 1044 eggs

You can find the link to the github source code [here]!
(https://github.com/Vernon-444/holbertonschool-printf)

### What is next?
Over time we plan to include functionality for more types of data such as octal
and hexadecimal numbers, as well as float values.

This project was coded in C and coded in the Betty style.

###Credits
Douglas D. (@wdmd2022)
Brayden V. (@Vernon-444)