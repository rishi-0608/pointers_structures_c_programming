#include <stdio.h>

struct student{
    int roll;
    char name[50];
    float marks;
};

int main(){
    struct student s[100];
    int n,i,max=0;

    printf("enter the number of records:");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        printf("enter roll number, name, marks: ");
        scanf("%d %49s %f",&s[i].roll, &s[i].name,&s[i].marks);
    }

    for(i=0;i<n;i++){
        if(s[i].marks>s[max].marks){
            max=i;
        }
    }

    printf("\ndetails of student with highest marks\n");
    printf("roll number: %d\n",s[max].roll);
    printf("name : %s\n",s[max].name);
    printf("marks : %f\n",s[max].marks);

    return 0;
}
