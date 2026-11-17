/*Print the name entered by the user*/

#include <stdio.h>

int main()
{
    char name[20];
    printf("Enter your name\n");
    scanf("%[^\n]", name);
    printf("Your name is %s\n", name);
    
    return 0;
}