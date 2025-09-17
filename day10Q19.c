#include<stdio.h>
int main () {
    int l1,l2,l3;
    printf("enter the lengths of the sides of the triangle:");
    scanf("%d,%d,%d",&l1,&l2,&l3);
    if(l1==l2 && l2==l3)
        printf("the triangle is isosceles");
    else if(l1==l2 || l2==l3 || l1==l3)
        printf("the triangle is equilateral");
    else
        printf("the triangle is scalene");
    return 0;
}