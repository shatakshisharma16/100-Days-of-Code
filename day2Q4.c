#include<stdio.h>
int main () {
    int radius,area,circumference;
    printf("enter the radius of the circle\n");
    scanf("%d",&radius);
    area =3.14*radius*radius;
    circumference=2*3.14*radius;
    printf("area of the circle is %d\n",area);
    printf("circumference of the circle is %d\n",circumference);
    return 0;
}