#include<stdio.h>
int fact(int);
int main(){
    int n,f;
    printf("Enter the number whose factorial you want to find:");
    scanf("%d",&n);
    f=fact(n);
    printf("Facotrial =%d",f);
    return 0;
}

int fact(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else{
        return n*fact(n-1);
    }
}
