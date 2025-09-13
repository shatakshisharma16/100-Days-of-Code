#include<stdio.h>
#include<ctype.h>
int main (){
    char alphabet, vowel;
    printf("enter an alphabet:");
    scanf(" %c", &alphabet); 
    vowel = tolower(alphabet);
    if(vowel=='a'||vowel=='e'||vowel=='i'||vowel=='o'||vowel=='u')
        printf("it's a vowel");
    else
        printf("it's a consonant");
    return 0;
}