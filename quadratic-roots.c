#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, root1, root2;

    printf("Enter the values for a,b and c:");
    scanf("%f%f%f", &a, &b, &c);

    d = b * b - 4 * a * c; // calculate discriminant

    if (d >= 0)
    {
        // root real
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Roots are %.2f and %.2f",root1,root2);
    }
    else
    {
        // root complex
        printf("Roots are complex.\n");
    }

    return 0;
}
