
  printf("Enter the number of elements that you want to enter\n");
  scanf("%d", &n);
  printf("Enter %d numbers \n", n);

  for (i = 0; i < n; i++)
  {
    scanf("%d", (p + i));
  }
  return n;
}
