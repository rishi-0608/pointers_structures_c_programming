#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,i,sum=0;
    int *p;

    printf("how many numbers:");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));

    if(p==NULL)
        return 1;
    for(i=0; i<n;i++){
        printf("enter the number:");
        scanf("%d",&p[i]);
        sum=sum+p[i];
    }
    printf("sum=%d",sum);
    free(p);
    return 0;
}
