/*Array are collection of same data types , it is a linear data structure where element of same 
data type are stored in continous memory location 
In this program we try to discuss some basic keypoints of array*/

#include <stdio.h> 

int main()
{
    /*1. Name of the array represent the base address of the array*/
    int arr[5] = {1,2,3,4,5};
    printf("Arr --> %p\n", arr);
    printf("&Arr --> %p\n", &arr);
    printf("&Arr[0] --> %p\n", &arr[0]);

    /*Element of the array can be accesed using index value staring from 0*/
    printf("arr[0] --> %d\n", arr[0]);
    printf("arr[1] --> %d\n", arr[1]);
    printf("arr[4] --> %d\n", arr[4]);

    /*method to print enter elemnt of the array*/
    for(int i = 0; i < 5; i++)
    {
        printf("Arr[%d] --> %d\n", i, arr[i]);
    }

    /*Array size if fixed after declaration we cannot change the size 
    which through error but we can change the elements , Hence array declaration is 
    static in nature*/
    arr[2] = 25;
    printf("arr[2] --> %d\n", arr[2]);

    /*array declaration without intilalization make the array 
    to store garbage values */
    int arr1[5]; 
    for(int i = 0; i < 5; i++)
    {
        printf("Arr1[%d] --> %d\n", i, arr1[i]);
    }
    
    /*array decalaratio with partial declaration leads in 
    storing 0 in the remaing places*/
    int arr2[5] = {1,2, 5};
    for(int i = 0; i < 5; i++)
    {
        printf("Arr2[%d] --> %d\n", i, arr2[i]);
    }

    /*sizeof the array = size of datatype * no of elements(size of array)*/
    printf("size of arr --> %zu\n", sizeof(arr));
    printf("size of arr1 --> %zu\n", sizeof(arr1));
    printf("size of arr2 --> %zu\n", sizeof(arr2));

    return 0;

}