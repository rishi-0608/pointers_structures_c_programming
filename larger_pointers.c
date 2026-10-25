#include <stdio.h>

int main(){
    int a[100],n,i,max;
    int *p;

    printf("enter the number of values:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("enter a number and press enter: ");
        scanf("%d",&a[i]);
    }

    p=a;
    max=*p;

    for(i=0;i<n;i++){
        if(*(p+i)>max){
            max=*(p+i);
        }
    }
    printf("largest number in the array is %d",max);

    return 0;
}
