#include <stdio.h>

int main()
{
    int password;
    int password2;
   int confrim = 1;
    scanf("%d",&password);
    scanf("%d", &password2);
    
    while(confrim == 1){
        if(password == password2){
            confrim = 0;
        } else{
            scanf("%d", &password2);
        }
    }

    return 0;
}
