#include<stdio.h>

int main(){
    int num1,num2,num3,large;

    printf("Enter thee numbers:\n");
    scanf("%d%d%d",&num1,&num2,&num3);

    if((num1>num2)&&(num1>num3)){
        large=num1;
    }else if((num2>num1)&&(num2>num3)){
        large=num2;
    }else{
        large=num3;
    }

    printf("Largest amoung %d,%d and %d these numbers is %d",num1,num2,num3,large);

    return 0;
}
