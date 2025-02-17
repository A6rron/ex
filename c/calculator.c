#include<stdio.h>

int main(){

    char ch;
    float num1,num2,result=0.0;

    printf("Enter the choice (+,-,*,/): ");
    scanf("%c",&ch);

    printf("Enter the two numbers:");
    scanf("%f%f",&num1,&num2);

    switch(ch){
        
        case '+':result=num1+num2;
                printf("Sum = %.2f",result);
                break;
        case '-':result=num1-num2;
                printf("Sub = %.2f",result);
                break;
        case '*':result=num1*num2;
                printf("Product = %.2f",result);
                break;
        case '/':result=num1/num2;
                printf("Quotient = %.2f",result);
                break;                        

        default:printf("Wrong choice\n");
                    break;
    }

    return 0;
}
