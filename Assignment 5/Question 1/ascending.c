/* 1. WAP to initialize five values in 1D array and sort them in ascending order,
 use three functions to read, sort and display the array. */

#include <stdio.h>
#include <conio.h>

int read(int x[]);
void sort(int x[], int n);
void display();

int main()
{

  int a[100];
  int number;
  number = read(a);
  sort(a, number);
  display(a, number);
  return 0;
}

int read(int x[])
{
  int n, i;
  printf("Enter the numebr of elements that you want to enter\n");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    scanf("%d", &x[i]);
  }
  return n;
}

void sort(int x[], int n)
{
  int temp;
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      if (x[i] > x[j])
      {
        temp = x[i];
        x[i] = x[j];
        x[j] = temp;
      }
    }
  }
}

void display(int x[], int n)
{
  printf("In ascending order");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", x[i]);
  }
}
