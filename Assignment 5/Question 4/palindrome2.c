// 4. Write a C program to check whether the given string is palindrome or not.
// Palindrome should be checked by user defined function.without using string library

#include <stdio.h>
#include <conio.h>

int palindrome();

int main()
{
  char str[20];
  printf("Enter a string\n");
  gets(str);
  palindrome(str);

  return 0;
}

int palindrome(char str[])
{
  int len = 0, i, flag = 0;
  while (str[len] != '\0')
  {
    len++;
  }
  int j = (len - 1);
  for (i = 0; i < len; i++)
  {
    if (str[i] != str[j])
    {
      flag = 1;
      break;
    }

    j--;
  }
  if (flag == 1)
  {
    printf("String is not a palindrome");
  }
  else
  {
    printf("String is a palindrome");
  }
}
