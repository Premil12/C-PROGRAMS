/*Name of the array decays to pointer to the first array element most of the 
time. Name suppose to not be a pointer , it has to be a object(Region of memory that 
stores the value or data)*/

#include <stdio.h>

int main()
{
    int arr[5] = {1,2,3,4,5};

    // arr decays to a pointer that stores the address of the first element.
    printf("arr value is ---> %p\n", arr);
    printf("&arr[0] value is ---> %p\n", &arr[0]);

    //hence arr ==== &arr[0]

    /*How compair the arr with pointer*/

    int *ptr = arr;
    printf("ptr value is ---> %p\n", ptr);

    printf("value of arr ---> %p, address of the first element\n", arr);
    printf("Value of (arr + 2) ----> %p, address of the 3rd element\n", (arr + 2));
    printf("Value of *(arr + 2) ----> %d, Value of the 3rd element\n", *(arr + 2));

    return 0;

}