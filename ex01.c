#include<stdio.h>
#include<string.h>

int main(){
    int i;
    struct profile{

        char name[100];
        int age;
        float score;
    }s[3];
    for(i=0;i<3;i++){
        printf("Student[%d]'s name: ",i+1);
        scanf("%s",s[i].name);
        printf("Student[%d]'s age: ",i+1);
        scanf("%d",&s[i].age);
        printf("Student[%d]'s score: ",i+1);
        scanf("%f",&s[i].score);
    }
    for(i=0;i<3;i++){
        
        printf("Student[%d] name is \"%s\", age %d. \n",i +1,s[i].name,s[i].age);
        
    }
    

    return 0;
}