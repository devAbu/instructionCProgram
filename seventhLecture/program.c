#include <stdio.h>

struct Books {
    int bookID;
    int price;
    int year;
    int rent;
};

struct numbers
{
   int num1, num2;
};

struct Student
{
   char name[20];
   int age;
   int year;
};


int main()
{
    struct Books book;


    book.bookID = 5;
    book.price = 100;
    book.year = 2017;
    book.rent = 20;
    printf("Book ID: %d \n", book.bookID);
    printf("Book price: %d \n", book.price);
    printf("Book year: %d \n", book.year);
    printf("Book rent: %d \n", book.rent);

    struct numbers s1 = {.num2 = 22, .num1 = 11};
    struct numbers s2 = {.num2 = 30};

    printf ("num1: %d, num2: %d\n", s1.num1, s1.num2);
    printf ("num2: %d \n", s2.num2);
    printf ("test: %d \n", s1);

    struct Student student;

    printf("Enter your name: ");
    scanf("%s", &student.name);

    printf("Welcome %s \n", student.name);

    printf("Enter your age: ");
    scanf("%d", &student.age);

    printf("Which year: ");
    scanf("%d", &student.year);

    printf("You have %d and you are %d year", student.age, student.year);



    return 0;
}
