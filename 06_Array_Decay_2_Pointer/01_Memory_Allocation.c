/*In array every elements are allocated in continous memory*/

#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};

    // memory address of array elements;
    for(int i = 0; i < 5; i++)
    {
        printf("arr[%d] ---> %p\n", i , &arr[i]);
    }

    /*This program proves the elements of array shares contiguous memory location*/
    return 0;
}