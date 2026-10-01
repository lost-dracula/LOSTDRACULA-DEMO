#include <stdio.h>

int main() {
    float pi=3.14;
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float area= pi*radius*radius;
    printf("the area of circle is %f",area);


    return 0;
}