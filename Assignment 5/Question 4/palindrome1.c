// 4. Write a C program to check whether the given string is palindrome or not.
// Palindrome should be checked by user defined function. using string library

#include <stdio.h>
#include <conio.h>
#include <string.h>

void palindrome();

int main()
{
  char string[20];
  printf("Enter a string\n");
  gets(string);
  palindrome(string);
  return 0;
}
void palindrome(char string[20])
{
  char word[20];
  strcpy(word, string);
  strrev(word);

  if (strcmp(word, string) == 0)
  {
    printf("\nthe string is palindrome");
  }
  else 
  {
    printf("\nthe string is not palindrome");
  }
}
