//How to printthe size of data type.
#include<stdio.h>
int main(){
    int a;
    char b;
    float c;
    double d;
    long e;
    printf("%d byte\n",sizeof(a));
    printf("%d byte\n",sizeof(b));
    printf("%d byte\n",sizeof(c));
    printf("%d byte\n",sizeof(d));
    printf("%d byte",sizeof(e));

    
    return 0;
}