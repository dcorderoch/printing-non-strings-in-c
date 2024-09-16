/*
 * This program illustrates how to print non-string arrays of characters in the
 * C programming langeuage
 *
 * compile and execute like so:
 *     cc -O0 -o non_strings posix_main.c && ./non_strings
 *
 * */

#include <stdio.h>

#define external
#define internal static

internal void
print_non_string(void)
{
  /* In The C programming language,a string is an array of characters,
   * terminated with a '\0', in a string literal, the '\0' is automatically
   * inserted by the compiler, the variable `non_string` does not qualify as a
   * string, because it is not terminated by '\0', but it can still be printed,
   * using the printf() function, by using `*` as the width precision
   * specifier, and using an additional argument, which must be of type int,
   * immediately before the array of characters that is not a string */
  unsigned char string[14] = "Hello, World!";
  unsigned char non_string[13] = {
      [0] = 'H',
      [1] = 'e',
      [2] = 'l',
      [3] = 'l',
      [4] = 'o',
      [5] = ',',
      [6] = ' ',
      [7] = 'W',
      [8] = 'o',
      [9] = 'r',
      [10] = 'l',
      [11] = 'd',
      [12] = '!',
  };

  printf("%s\n", string);
  printf("%.*s\n", (int)(sizeof non_string), non_string);

  printf("sizeof(non_string): %zu\n", sizeof non_string);
  printf("sizeof(string): %zu\n", sizeof string);
}

external int
main(void)
{
  print_non_string();

  return 0;
}
