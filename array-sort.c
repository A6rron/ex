#include<stdio.h>

int main(){
    int a[10],size,i,temp;

    printf("Enter the array size: ");
    scanf("%d",&size);

    printf("Enter the array elements: ");
    for(i=0;i<size;i++){
         scanf("%d",&a[i]);
    }

    printf("Array elements before sorting: ");
    for(i=0;i<size;i++){
         printf("%d\t",a[i]);
    }

    // sorting
    for(i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("\nArray elements after sorting: ");
    for(i=0;i<size;i++){
         printf("%d\t",a[i]);
    }

    return 0;
}
