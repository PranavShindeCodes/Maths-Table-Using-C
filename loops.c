#include <stdio.h>

// void display()
// {
//     printf("Good Morning!");
// }

// void display2()
// {
//     printf("Good Afternoon!");
// }
int main()
{

    // int input;
    // printf("Enter Time:- \n");
    // scanf("%d", &input);

    // if (input < 12)
    // {

    //     display();
    // }
    // else
    // {
    //     display2();
    // }

    for (int i = 0; i < 100; i++)
    {

        printf("*");
    }
    printf("\n");
    printf(" \t \t\t\t\t Table's");
    printf("\n");

    for (int j = 0; j < 100; j++)
    {
        printf("*");
    }

    printf("\n");
    int name;
    int sum = 1;
    printf("\n");

    printf("Enter Table No:- ");
    scanf("%d", &name);
    printf("\n");
    for (int i = 1; i <= 10; i++)
    {
        sum = sum * i;
        printf("%d X %d = %d \n", name, i, name * i);
    }
    printf("Sum of Table:- %d \n", sum);

    for (int j = 0; j < 100; j++)
    {
        printf("*");
    }
    printf("\n");
    printf("\t\t\t\t\tThank You! \n");
    for (int j = 0; j < 100; j++)
    {
        printf("* ");
    }
    return 0;
}