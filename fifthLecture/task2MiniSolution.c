#include <stdio.h>

int main()
{

    int num;
    int num2;
    
    while(1){
        scanf("%d", &num);
        scanf("%d", &num2);
        
        if(num < 0 || num2 <0){
            break;
        }
    }

    return 0;
}
