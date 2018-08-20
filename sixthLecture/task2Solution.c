#include <stdio.h>

int add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}


int multi(int a,int b){
    return a*b;
}


int divi(int a,int b){
    return a/b;
}

void check(int i, int a, int b){
    int result;
     if(i == 1){
            result = add(a, b);
            printf("%d \n", result);
        } else if(i == 2){
            result = sub(a,b);
            printf("%d \n", result);
        } else if(i == 3){
            result = multi(a,b );
            printf("%d \n", result);
        } else if(i == 4){
            result = divi(a,b);
            printf("%d \n", result);
        } else{
            printf("Unesite ispravan broj \n");
        }
}

int main()
{
    int izbor, num, num2, result;
    while(1){
        printf("pritisnite 1 za '+', 2 za '-', 3 za '*', 4 za '/' ili -1 za zavrsteak ");
        scanf("%d", &izbor);
        if(izbor == -1){
            printf("HVALA!!");
            break;
        }
        printf("Unesi prvi broj ");
        scanf("%d", &num);
        printf("Unesi drugi broj ");
        scanf("%d", &num2);
        check(izbor,num,num2);
    }


    return 0;
}
