#include<stdio.h>

void main(){
    float length,width,area,perimeter;

    printf("Enter the length of the rectangle:\n");
    scanf("%f",&length);

    printf("Enter the width of the rectangle:\n");
    scanf("%f",&width);

    area=length*width;
    perimeter=2*(length+width);

    printf("Area of the rectangle : %f\n",area);
    printf("Perimeter of the rectangle : %f\n",perimeter);
}
