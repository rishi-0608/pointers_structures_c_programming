#include <stdio.h>

int main(){
    int a=10;
    int *p; //declaring a pointer

    p=&a;//stores the address of a

    printf("%d\n",a);
    printf("%d\n",&p);//accesses the value stored at the address


    return 0;
}
