#include <stdio.h>

struct employee
{
    char name[30];
    int id;
    float salary;
} employees[5];

int main()
{
    int n;
    printf("Enter the number of employees:");
    scanf("%d", &n);

    printf("Enter %d employee details :\n", n);

    for (int i = 0; i < n; i++)
    {
        printf("Employee %d : ", i + 1);

        printf("Name : ");
        scanf("%s", employees[i].name);
        printf("ID : ");
        scanf("%d",&employees[i].id);
        printf("Salary : ");
        scanf("%f",&employees[i].salary);
    }

    printf("--------------- ALL EMPLOYEE DETAILS----------");

     for (int i = 0; i < n; i++)
    {
        printf("Name : ");
        printf("%s \n", employees[i].name);
        printf("ID : ");
        printf("%d \n", employees[i].id);
        printf("Salary : ");
        printf("%f\n", employees[i].salary);

        printf("\n");
    }

    return 0;
}
