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
        printf("%d + %d = %d", num, num2, num + num2);
        break;

    case '-':
        printf("%d - %d = %d", num, num2, num - num2);
        break;

    case '*':
        printf("%d * %d = %d", num, num2, num * num2);
        break;

    case '/':
        printf("%d / %d = %d", num, num2, num / num2);
        break;
    default:
        printf("Error! operator is not correct");
    }

    char mark = 'A';

    switch (mark)
    {
    case 'A':
        printf("Excellent, your grade is 10");
        break;
    case 'B':
        printf("Perfect, your grade is 9");
        break;
    case 'C':
        printf("Very good, your grade is 8");
        break;
    case 'D':
        printf("Good, your grade is 7");
        break;
    case 'E':
        printf("Not bad, your grade is 6");
        break;
    default:
        printf("Bad, you fail!!!");
        break;
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

    printf("The result of your numbers is : %d", result);
    printf("Max %d", max);
    printf("Min %d", min);

    return 0;
}
