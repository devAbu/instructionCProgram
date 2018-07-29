#include <stdio.h>

int main()
{
    //display text
    printf("Hello world!! \n");
    //declare variable and display it
    int number = 5;
    printf("%d \n", number);
    //float variable
    float number2 = 555.5548;
    printf("%f \n", number2);
    printf("%.2f \n", number2);
    //char variable
    char character = 'a';
    printf("%c \n", character);
    //char variable
    char character2[20] = "abuJuhu";
    printf("%s\n", character2);
    //take user input (numbers, string)
    int userNumber;
    printf("Enter any number: ");
    scanf("%d", &userNumber);
    printf("You entered %d \n", userNumber);
    float userFlot;
    printf("Enter any number: ");
    scanf("%f", &userFlot);
    printf("You entered %f \n", userFlot);
    char name[30];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Your name : %s \n", name);
    

    return 0;
}