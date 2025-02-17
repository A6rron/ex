#include<stdio.h>

int main(){

    int num,temp,result=0,remainder=0;

    printf("Enter the number : ");
    scanf("%d",&num);
    temp=num;
    while (num>0)
    {
       remainder=num%10;
       result=result+(remainder*remainder*remainder);
       num=num/10;
    }

    if(result==temp){
        printf("%d is amstrong number",temp);
    }else{
        printf("%d is not an amstrong number",temp);
    }
    return 0;
}
