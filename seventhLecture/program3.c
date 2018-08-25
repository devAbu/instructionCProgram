#include <stdio.h>


struct numbers
{
   int password;
   char name[20];
};

int main()
{
    struct numbers arrayNum[10];

    printf("Welcome to my small program!!!\n");
int i = 0;
    while(i<3){
        printf("Welcome, please enter your name: ");
        scanf("%s", &arrayNum[i].name);

        printf("%s please create a password: ", arrayNum[i].name);
        scanf("%d", &arrayNum[i].password);

        int izbor;
        printf("Your create your account successfully!!! \n");

        while(1){
            printf("If you want to view your info enter 1, to change password enter 2 and for exit enter 3");
            scanf("%d", &izbor);
            if(izbor == 2){
                printf("Your current password is %d \n", arrayNum[i].password);
                printf("Enter your new password: ");
                scanf("%d", &arrayNum[i].password);
            }else if(izbor == 1){
                printf("Your name: %s -- Your password: %d", arrayNum[i].name, arrayNum[i].password);
            }  else if(izbor == 3){
                break;
            }
        }
i++;
    }


    return 0;
}
