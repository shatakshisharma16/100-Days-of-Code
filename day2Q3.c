#include<stdio.h>
int main() {
    int length,breath,area,perimeter;
    printf("enter the length of rectangle\n");
    scanf("%d",&length);
    printf("enter the breadth of reactangle\n");
    scanf("%d",&breath);
    area= length*breath;
    perimeter= 2*(length+breath);
    printf("area of the rectangle is %d\n",area);
    printf("perimeter of the rectangle is%d\n",perimeter);
    return 0;
}