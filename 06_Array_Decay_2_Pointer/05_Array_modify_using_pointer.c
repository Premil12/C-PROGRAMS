#include <stdio.h>

void modify(int *ptr)
{
    ptr[0] = 100;
    ptr[1] = 200;
    ptr[2] = 300;
}

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    modify(arr);

    for(int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}