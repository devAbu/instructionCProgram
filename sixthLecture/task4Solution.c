#include <stdio.h>

void check(int a[]){

    for(int i = 0; i< 5; i++){
        if(a[i]%2==0){
            continue;
        }else{
            printf("%d", a[i]);
        }
    }
}

void take(int w, int a[]){
    for(int i=0; i<w; i++){
        printf("Unesite %d broj ", i+1);
        scanf("%d", &a[i]);
    }
}

int main()
{
    int n;
    int num[n];

    printf("Koliko brojeva zelite brojeviti? ");
    scanf("%d", &n);

    take(n, num);

    check(num);

    return 0;
}
