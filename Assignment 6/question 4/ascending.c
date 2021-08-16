// 4. WAP to initialize five values in 1D array and sort them in ascending order,
//  use three functions to read, sort and display the array using pointer. [5]

#include <stdio.h>
#include <conio.h>

int read(int *p);
void sort(int *p, int n);
void display(int *p, int n);

int main()
{

  int a[100];
  int number;
  int *p;
  p = a;
  number = read(p);
  sort(p, number);
  display(p, number);
  return 0;
}

int read(int *p)
{
  int n, i;
  printf("Enter the number of elements that you want to enter\n");
  scanf("%d", &n);
  printf("Enter %d numbers \n", n);

  for (i = 0; i < n; i++)
  {
    scanf("%d", (p + i));
  }
  return n;
}

void sort(int *p, int n)
{
  int temp;
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      if (*(p + i) > *(p + j))
      {
        temp = *(p + i);
        *(p + i) = *(p + j);
        *(p + j) = temp;
      }
    }
  }
}

void display(int *p, int n)
{
  printf("In ascending order\n");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", *(p + i));
  }
}
