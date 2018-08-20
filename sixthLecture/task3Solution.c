#include <stdio.h>

void check(int a){
    if(a%2==0){
        printf("Paran\n");
    }else{
        printf("Neparan\n");
    }
}

int main()
{

    int num;

    while(1){
        printf("Unestite broj koji zelite provjeriti ili -1 za prekid ");
        scanf("%d", &num);

        if(num==-1){
            printf("Hvala");
            break;
        }
        check(num);
    }

    return 0;
}
