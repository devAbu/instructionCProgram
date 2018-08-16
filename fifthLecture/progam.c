#include <stdio.h>


int main()
{
    int numbers[5] = {1,2,3,4,5};
    
    printf("%d", numbers[2]);
    
    scanf("%d", &numbers[5]);
    
    printf("%d", numbers[5]);
    
    int numbers2[3];
    
    for(int i = 0; i < 3; i++){
        scanf("%d", &numbers2[i]);
        printf("%d", numbers2[i]);
    }
	
	int numbers[5] = {1,2,3,4,5};
    int max = 0;
    
    printf("Third number is %d \n", numbers[2]);
    
    scanf("%d", &numbers[5]);
    
    printf("Sixth number is %d \n", numbers[5]);
    
    for(int i = 0; i< 6; i++){
        if(numbers[i] > max ){
            max = numbers[i];
        }
    }
    
    printf("%d\n", max);

    return 0;
}
