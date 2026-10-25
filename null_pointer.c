#include <stdio.h>

int main(){
    int *p=NULL;

    if(p==NULL){
        printf("pointer is null");
    }
    else{
        printf("%d",*p);
    }
    return 0;
}
