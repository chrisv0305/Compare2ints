#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Enter the first number:\n");
    scanf("%d", &a);
    printf("Enter the second number:\n");
    scanf("%d", &b);

    if(a > b)
        printf("%d is greater", a);
    else
        printf("%d is greater", b);

    return 0; 
}