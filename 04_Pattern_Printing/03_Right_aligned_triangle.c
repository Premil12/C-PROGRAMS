/*Progrm trying to print an Right aligned triangle with * */

#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        // Spaces
        for (int j = 1; j <= n - i; j++)
        {
            printf("  ");
        }

        // Stars
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}