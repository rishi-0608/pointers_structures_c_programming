#include <stdio.h>

int main(){
    int n=25;
    void*p;

    p=&n;

    printf("%d", *(int*)p);
    return 0;
}
