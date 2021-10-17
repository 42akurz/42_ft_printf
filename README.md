# ft_printf

## About
The task of the 'ft_printf' project from the 42 School was, to recode the behaviour of the original printf function.
The printf function copies a string of character to the stdout. The string can include format specifiers, which start with a % character, which indicate the method to translate a piece of data (such as a number) to characters.

ft_printf includes the following format specifiers:

| Format specifier        | Description                                                              |
| :---                   | :---                                                                    |
| %d                      | converts signed integers                                                  |
| %i                      | converts signed integers                                                  |
| %u                      | converts unsigned integers                                               |
| %x                      | converts unsigned hexadecimal integer (lowercase)                        |
| %X                      | converts unsigned hexadecimal integer (uppercase)                        |
| %c                      | converts single characters                                               |
| %s                      | converts a string of characters                                          |
| %p                      | converts a pointer address                                               |
| %%                      | a % followed by another % character will write a single % to the stream  |

## How to use:

Clone the repository:
```bash
https://github.com/42akurz/42_ft_printf.git
```
Go to the repository and run make
```bash
make
```
Make sure that libftprintf.a and ft_printf.h are in the same directory that you want to call ft_printf from.
Include ft_printf.h in your files
```c
#include "ft_printf.h"
```
Compile your files with libftprintf.a
```bash
gcc yourfile_01.c libftprintf.a
```
Use clean to delete all object files, fclean to remove all object files and libftprintf.a and re to recompile the library
```bash
make clean / make fclean / make re
```
