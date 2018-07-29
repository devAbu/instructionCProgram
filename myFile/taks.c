// uzeti ime od usera (take user's name)
// uzeti prezime od usera (take user's surname)
// pozeljeti dobrodoslicu useru (Wish a welcome)
// pitati usera za godine --> ako je mladji od 18 ne moze dalje (ask user for his years --> he can not continue if he is younger than 18)
// traziti od usera da unese 2 broja (user should enter two number)
// sabrati i pomnoziti unesena 2 broja i prikazati ih useru (add and multiple that numbers and display the result to the user)
// provjeriti da li je prvi uneseni broj paran ili neparan (check if the first first number even or odd)

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{

    char name[20], lastName[20];

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your last name: ");
    scanf("%s", lastName);
    printf("Welcome, %s %s", name, lastName);

    int age;
    bool go = false;

    while (!go)
    {
        printf("Enter your age: ");
        scanf("%d", &age);

        if (age < 18)
        {
            printf("You must be 18 year old!!!");
        }
        else
        {
            printf("Great, you are older than 18");
            go = true;
        }
    }

    int num1, num2;

    printf("Enter two number (they can be decimal) : ");
    scanf("%d %d", &num1, &num2);

    printf("Add %d and %d : %d", num1, num2, num1 + num2);
    printf("Multiple %d and %d : %d", num1, num2, num1 * num2);

    if (num1 % 2 == 0)
    {
        printf("Even number");
    }
    else
    {
        printf("Odd number");
    }

    system("pause");
    return 0;
}