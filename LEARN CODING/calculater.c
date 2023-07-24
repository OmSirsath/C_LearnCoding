//calculate.
#include<stdio.h>
int main()
{
    int a,b,ch,add,sub,multi,div,rem;
    printf("Enter ueser choice :");
    scanf("%d",&ch);
    printf("Enter two number :");
    scanf("%d%d",&a,&b);

    if(ch==1){
        add=a+b;
        printf("Addition : %d",add);
    }
    else if(ch==2){
        sub=a-b;
        printf("subtraction : %d",sub);
    }
    else if(ch==3){
        multi=a*b;
        printf("multiplication : %d",multi);
    }
    else if(ch==4){
        div=a/b;
        printf("division : %d",div);
    }
    else if(ch==5){
        rem=a%b;
        printf("Remender :%d",rem);
    }
    else{
        printf("invalid choice..!");
    }


    return 0;
}