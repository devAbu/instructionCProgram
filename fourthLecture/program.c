// functions

/* 1- printing 
#include <stdio.h>

void printHello(){
    printf("Hello");
}

int main()
{
    
    printHello();
    
    return 0;
}
*/

/* 2- return value
#include <stdio.h>

int check(int num, int num2){
   if(num > num2){
       return num;
   } else if(num2 > num){
       return num2;
   } else{
       printf("Equal");
   }
}

int main()
{
    int num = 100;
    int num2 = 200;
    
    int num3 = 50;
    int num4 = 100;
    
    int res;
    
    res = check(num,num2);
    
    printf("Max is: %d \n" ,res);
    
    res = check(num3, num4);
    printf("Max is: %d\n" ,res);
    
    check(num, num4);
    
    
    return 0;
}
*/

/* 3- user input
#include <stdio.h>

int check(int num, int num2){
   if(num > num2){
       return num;
   } else if(num2 > num){
       return num2;
   } else{
       printf("Equal");
   }
}

int main()
{
    int num ;
    int num2;
    
    printf("Enter two number: ");
    scanf("%d %d", &num, &num2);
    
    
    int num3;
    int num4;
    
    printf("Enter two number: ");
    scanf("%d %d", &num3, &num4);
    
    int res;
    
    res = check(num,num2);
    
    printf("Max is: %d \n" ,res);
    
    res = check(num3, num4);
    printf("Max is: %d\n" ,res);
    
    check(num, num4);
    
    
    return 0;
}
*/

/* 4- example
#include <stdio.h>

int add(int num, int num2);

int main()
{
    int num;
    int num2;
    
    printf("Enter two number: ");
    scanf("%d %d", &num, &num2);
    
    int res;
    
    res = add(num,num2);
    printf("Result is %d", res);
    
    
    return 0;
}

int add(int num, int num2){
    return num+num2;
}

*/