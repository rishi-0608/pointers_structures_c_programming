#include <stdio.h>
#include <stdlib.h>
int main(){
    int *p,n,i,sum=0;

    printf("enter the number of elements:");
    scanf("%d",&n);
    if(n<=0){
        printf("enter valid value");
    }

    p=(int *)malloc(n* sizeof(int));

    if(p==NULL){
        printf("memory allocation failed");
        return 1;
    }

    for(i=0;i<n;i++){
        printf("enter the value and press enter:");
        scanf("%d",&p[i]);
        sum+=p[i];
    }

    printf("sum of the numbers is %d",sum);

    free(p);
    return 0;
}
