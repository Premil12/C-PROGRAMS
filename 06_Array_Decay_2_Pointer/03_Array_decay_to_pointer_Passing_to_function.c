/*Array decays to pointer when passing to the function*/

#include <stdio.h>

void display(int * arr)
{
    printf(" Size of arr inside in the function ---> %zu\n", sizeof(arr));
}

int main()
{
    int arr[5] = {1,2,3,4,5};

    /*when we use arr inside the sizeof function it doesnot decay to 
    pointer , it represent the array object(entire array)*/

    printf(" Size of arr inside in main ---> %zu\n", sizeof(arr));

    display(arr);
    
    return 0;
}