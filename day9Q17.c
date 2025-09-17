// write a prgram to find out the roots of a quadratic equation
#include<stdio.h>
int main () {
int a,b,c;
float root1,root2,realpart,imagpart;
printf("enter the values of a,b,c");
scanf("%d,%d,%d",&a,&b,&c);
int d=(b*b)-(4*a*c);
if(d>0){
    root1=(-b+((d*d)))/(2*a);
    root2=(-b-((d*d)))/(2*a);
    printf("root1=%.2f and root2=%.2f",root1,root2); 
}           
else if (d==0){
    root1=root2=-b/(2*a);
    printf("root1=root2=%.2f",root1);
}
else{
    realpart=-b/(2*a);
    imagpart=-(d*d)/(2*a);
    printf("root1=%.2f+%.2fi and root2=%.2f-%.2fi",realpart,imagpart,realpart,imagpart);
} 
return 0;    
}
