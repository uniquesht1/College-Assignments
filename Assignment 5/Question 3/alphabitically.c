/* 3. WAP to read 5 names of students and sort them alphabetically. 
The process must be done by the user defined function.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void sort();
void display();

int main()
{
  int i;
  int size = 5;
  char name[5][20];
  printf("Ener 5 strings\n");
  for (i = 0; i < 5; i++)
  {
    scanf("%s", &name[i]);
  }

  sort(name, size);
  display(name, size);
  return 0;
}

void sort(char name[][20], int size)
{
  char temp[20];
  for (int i = 0; i < size; i++)
  {
    for (int j = i; j < size; j++)
    {
      if (strcmp(name[i], name[j]) > 0)
      {
        strcpy(temp, name[i]);
        strcpy(name[i], name[j]);
        strcpy(name[j], temp);
      }
    }
  }
}

void display(char name[][20], int size)
{
  printf("In alphabetical order : \n");
  for (int i = 0; i < size; i++)
  {
    printf("%s \n", name[i]);
  }
  printf("\n");
}