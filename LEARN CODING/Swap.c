//first method
// #include<stdio.h>
// int main(){
//     int a,b,temp;
//     printf("Enter two number :");
//     scanf("%d%d",&a,&b);

//     temp=a;
//     a=b;
//     b=temp;

//     printf("The first swap value is : %d\n",a);
//     printf("The second swap value is : %d",b);
//     return 0;
// }

//--------------------------------------++-----------------------------------


//second method withot using third variable

#include<stdio.h>
int main(){
    int a,b;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);

    a=a+b;
    b=a-b;
    a=a-b;
    printf("The swap value a : %d\n",a);
    printf("The swap value b : %d",b);
    return 0;
}
