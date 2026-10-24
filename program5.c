#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (num > 0){
        printf("%d is Positive\n", number);
    }
    else if (num < 0)
    {
        printf("%d is Negative\n", number);
    }
    else
    {
        printf("The number is Zero");
    }

    return 0;
}