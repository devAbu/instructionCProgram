#include <stdio.h>

int main()
{
    printf("Hello Wolrd\n");

    int number = 5;
    printf("Number value is: %d ", number);
    printf("\n"); //drugi nacin za break line

    char letter;
    printf("Enter any character: ");
    scanf("%c", &letter);
    printf("Your character: %c \n", letter);

    float floatNum;
    printf("Enter some numbner (it can be decimal) : ");
    scanf("%f", &floatNum);
    printf("Your number is: %.2f \n", floatNum);

    int number2;
    printf("Enter some number: ");
    scanf("%d", &number2);
    printf("You entered: %d \n", number2);

    float num2 = 987.6543;

    printf("Two number after the dot: %.2f \n", num2);

    printf("None number after the dot: %.f \n", num2);

    const int someNumber = 5;
    //someNumber += 5;
    printf("%d \n", someNumber);
    printf("%d \n", someNumber + 10);

    int firstNum, secondNum, thirdNum;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &firstNum, &secondNum, &thirdNum);
    printf("The result by adding %d, %d and %d is: %d \n", firstNum, secondNum, thirdNum, firstNum + secondNum + thirdNum);

    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("welcome %s \n", name);

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age <= 10)
    {
        printf("You are younger than 10 \n");
    }
    else if (age <= 20)
    {
        printf("You are younger than 20 but older than 10 \n");
    }
    else if (age <= 30)
    {
        printf("You are younger than 30 but older than 20 \n");
    }
    else
    {
        printf("You are older than 30 \n");
    }

    char mark = 'F';

    switch (mark)
    {
    case 'A':
        printf("Excellent \n");
        break;
    case 'B':
        printf("Very good \n");
        break;
    case 'C':
        printf("Good \n");
        break;
    case 'D':
        printf("Bad \n");
        break;
    default:
        printf("Very bad \n");
        break;
    }

    int a = 0;
    printf("For Loop \n");
    for (a = 0; a < 10; a++)
    {
        printf("%d \n", a);
    }
    printf("While Loop \n");
    int b = 0;
    while (b < 10)
    {
        printf("%d \n", b);
        b++;
    }
    printf("Do-while Loop \n");
    int c = 0;
    do
    {
        printf("%d \n", c);
        c++;
    } while (c < 10);

    return 0;
}