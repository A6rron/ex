#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char str1[20], str2[20];
    int ch, len = 0;

    do
    {
        printf("\n-----------MENU------------\n");
        printf("1. Find Length of string\n");
        printf("2. Find Reverse of a string\n");
        printf("3. Concatenate strings\n");
        printf("4. Copy strings\n");
        printf("5. Exit the loop\n");

        printf("Enter your choice");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter a string : ");
            scanf("%s", str1);
            len = strlen(str1);
            printf("Length of the string %d", len);
            break;
        case 2:
            printf("Enter first string : ");
            scanf("%s", str1);
            strrev(str1);
            printf("Reverse of the string %s", str1);
            break;
        case 3:
            printf("Enter first string : ");
            scanf("%s", str1);
            printf("Enter second string : ");
            scanf("%s", str2);
            strcat(str1, str2);
            printf("String after concatenation %s", str1);
            break;
        case 4:
            printf("Enter first string : ");
            scanf("%s", str1);
            printf("Enter second string : ");
            scanf("%s", str2);
            strcpy(str1, str2);
            printf("String after copy %s", str1);
            break;
        case 5:
            printf("Exiting...");
            break;
        default:
            printf("Wrong choice");
            break;
        }

    } while (ch != 5);

    return 0;
}
