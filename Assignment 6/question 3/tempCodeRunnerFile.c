
    printf("\nb :: %d", *(p + 1));
    return 0;
}

void swap(int *p)
{
    int temp;
    temp = *p;
    *p = *(p + 1);
    *(p + 1) = temp;
}
