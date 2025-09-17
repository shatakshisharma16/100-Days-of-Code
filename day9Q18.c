#include<stdio.h>
int main () {
    int percentage;
    printf("enter your percentage:");
    scanf("%d",&percentage);
    if(percentage>=90)
        printf("your grade is A");
    else if(percentage>=80)
        printf("your grade is B");
    else if(percentage>=70)
        printf("your grade is C");
    else if(percentage>=60)
        printf("your grade is D");
    else if(percentage>=40)
        printf("your grade is E");
    else
        printf("your grade is F");
    return 0;
}