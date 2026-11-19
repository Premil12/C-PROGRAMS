/*Progrm trying to print an inversed right angled triangle with * */

#include <stdio.h>

int main()
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < (5-i); j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}