#include<stdio.h>
int main(){
    char ch;
    printf("Enter any charecter :");
    scanf("%c",&ch);

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
        printf("Charecter is vowel :");
    }
    else{
        printf("charecter is not vowel :");
    }
    return 0;
p