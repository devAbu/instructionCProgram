#include <stdio.h>


struct numbers
{
   int num, num2;
};

int main()
{
    struct numbers arrayNum[10];

    arrayNum[0].num = 10;
    arrayNum[0].num2 = 20;

    arrayNum[1].num = 100;
    arrayNum[1].num2 = 200;

    printf("%d %d ", arrayNum[0].num, arrayNum[0].num2);

    printf("%d %d", arrayNum[1].num, arrayNum[1].num2);
int index;
    printf("Enter index where you want to change value: ");
    scanf("%d", &index);

    printf("Enter the value: ");
    scanf("%d", &arrayNum[index].num);

    printf("New value is %d at %d", arrayNum[index].num, index);

    for(int i = 0; i<10; i++){
        printf("Enter value of %d index", i);
        scanf("%d", &arrayNum[i]);
    }

    for(int i = 0; i < 10; i++){
        printf("%d \n", arrayNum[i]);
    }

    return 0;
}
