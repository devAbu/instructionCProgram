#include <stdio.h>

int main()
{

    char operator;
    int num, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("Enter two number: ");
    scanf("%d %d", &num, &num2);

    switch (operator)
    {
    case '+':
        printf("%d + %d = %d\n", num, num2, num + num2);
        break;

    case '-':
        printf("%d - %d = %d\n", num, num2, num - num2);
        break;

    case '*':
        printf("%d * %d = %d\n", num, num2, num * num2);
        break;

    case '/':
        printf("%d / %d = %d\n", num, num2, num / num2);
        break;
    default:
        printf("Error! operator is not correct\n");
    }

    char mark = 'A';

    switch (mark)
    {
    case 'A':
        printf("Excellent, your grade is 10\n");
        break;
    case 'B':
        printf("Perfect, your grade is 9\n");
        break;
    case 'C':
        printf("Very good, your grade is 8\n");
        break;
    case 'D':
        printf("Good, your grade is 7\n");
        break;
    case 'E':
        printf("Not bad, your grade is 6\n");
        break;
    default:
        printf("Bad, you fail!!!\n");
        break;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", i);
    }
    for (int i = 10; i > 0; i--)
    {
        printf("%d\n", i);
    }
    for (int i = 10; i > 0; i -= 5)
    {
        printf("%d\n", i);
    }
    for (int i = 0; i < 10; i += 5)
    {
        printf("%d\n", i);
    }

    int number;
    int result = 0;
    int max = 0;
    int min = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Enter a number : ");
        scanf("%d", &number);
        result += number;

        if (number > max)
        {
            max = number;
        }
        if (number < min)
        {
            min = number;
        }
    }

    printf("The result of your numbers is : %d\n", result);
    printf("Max %d\n", max);
    printf("Min %d\n", min);

    int i, j, rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
