#include <stdio.h>
int main()
{
   int i, j, N;
    printf("Enter N:");
    scanf("%d", &N);
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}
