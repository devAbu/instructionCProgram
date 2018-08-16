#include <stdio.h>

int juhu (int age){
    if (age < 18)
    {
        printf("Sorry but you can not continue, you must be older than 18");
        return 1;
    }else{
        return 0;
    }
}

int main()
{
    char name[20];
    char surname[20];
    int age;

    printf("Please enter your name... ");
    scanf("%s", name);
    printf("Please enter your surname...");
    scanf("%s", surname);

    printf("%s please enter your age... ", name);
    scanf("%d", &age);

    int x = juhu(age);
    if(x ==1){
        return 0;
    }

    printf("Good your are older than 18");

    return 0;
}
