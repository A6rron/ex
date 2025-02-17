#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    char *ptr;
    int length,i;

    printf("Enter a string : ");
    scanf("%s",str);

    length=strlen(str);
    ptr=str+length-1; // point to the last character

    printf("\nreversed string:");
    for ( i = length; i >0; i--)
    {
        printf("%c",*ptr);
        ptr--;
    }

    return 0;
}
