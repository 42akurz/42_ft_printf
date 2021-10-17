# ft_printf

## About
The task of the ft_printf project from the 42 School, was to recode the behaviour of the printf function, that exists within the <stdio.h> library.
The printf function copies a string of character to the stdout. The string can include format specifiers, which start with a % character, which indicate the method to translate a piece of data (such as a number) to characters.

ft_printf includes the following format specifiers:
| Format specifier        | Description |
| %d                      | converts signed inegers      |
| %i                      | converts signed inegers      |
| %u                      | converts unsigned integers       |
| %x                      | converts unsigned hexadecimal integer (lowercase)     |
| %X                      | converts unsigned hexadecimal integer (uppercase)     |
| %c                      | converts single characters       |
| %s                      | converts a string of characters     |
| %p                      | converts a pointer address     |
| %%                      | a % followed by another % character will write a single % to the stream    |
