/*There there some case where array will not decay to pointer to the firt element*/

#include <stdio.h>

int main()
{
    /* 1. Using sizeof*/
    int arr[5] = {1,2,3,4,5};
    printf("%zu", sizeof(arr));

    /*2. using &arr ---> This represent the address of the entire array*/

    printf("Address value of &arr ----> %p\n", &arr);

    /* As it represent the address of the entire value we need pointer 
    to array to store that address not pointer to interger wont work here*/

    int(*Ptr)[5] = &arr;
    int *ptr  = arr;

    printf("Address value of (ptr + 1) ----> %p\n", (ptr + 1));
    printf("Address value of (Ptr + 1) ----> %p\n", (Ptr + 1));

    /*3. while using string literals.*/
    char str[] = "Hello"; // data type is char[6] 
    char *sptr = "Hello"; // both look the same , but data type is char pointer;

    /*Both are fundamentally differnt as this represent 2 different thing 
    first is char array stores the string literal which stores all the elemnts of array continously in 
    stack segemnt and hence it is array of character we can modiffy first declaraction*/

    printf("%s\n", str);
    str[0]= 'Y';
    printf("%s\n", str);
    
    /*But second one we declared the string literal using pointer, where the ptr stores the address of 
    the first charcter and it is stored in the stack segment but the string literal itself is stored
    in the non modifiable data segment. Hence we cannot modify the string literal , trying to modify gives 
    warning*/

    return 0;
}