#include<math.h>
#include<stdio.h>

int main(){
      int base,exponent,result;

      printf("Enter a base number : \n");
      scanf("%d",&base);
      printf("Enter a exponent number : \n");
      scanf("%d",&exponent);

      result=pow(base,exponent);

      printf("%d^%d = %d",base,exponent,result);
    return 0;
}
