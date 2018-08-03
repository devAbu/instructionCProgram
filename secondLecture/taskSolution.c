#include <stdio.h>

int main()
{
    char name[20];
    char surname[20];
    int age;
    int option;
    int type;
    int grade1, grade2, grade3, grade4, grade5, grade6, gradeAvg;
    int salary;

    printf("Please enter your name... ");
    scanf("%s", name);
    printf("Please enter your surname...");
    scanf("%s", surname);

    printf("%s please enter your age... ", name);
    scanf("%d", &age);

    if (age < 18)
    {
        printf("Sorry but you can not continue, you must be older than 18");
        return 0;
    }

    printf("Press 1 to continue, press 0 to exit ");
    scanf("%d", &option);

    if (option == 0)
    {
        printf("Good bye");
        return 0;
    }

    printf("Welcome %s %s to our small program \n", name, surname);

    printf("Are you student (1) or employee (2) ? ");
    scanf("%d", &type);

    if (type == 1)
    {
        printf("Enter six grade ");
        scanf("%d %d %d %d %d %d ", &grade1, &grade2, &grade3, &grade4, &grade5, &grade6);

        //printf("%d %d %d %d %d %d", grade1, grade2, grade3, grade4, grade5, grade6 );

        gradeAvg = (grade1 + grade2 + grade3 + grade4 + grade5 + grade6) / 6;

        if (gradeAvg < 6)
        {
            printf("Your score is %d, and because of that you will fail ", gradeAvg);
        }
        else
        {
            printf("Your score is %d, and because of that you will pass ", gradeAvg);
        }
    }
    else if (type == 2)
    {
        printf("Please enter your salary ");
        scanf("%d", &salary);

        if (salary > 2000)
        {
            printf("Your job is good");
        }
        else
        {
            printf("I hope you will find better job");
        }
    }
    else
    {
        printf("Please enter a valid number next time!!!");
    }

    return 0;
}
