#include <stdio.h>

int main() {
    char name[50];
    int age;
    char hobby[50];
    scanf("%s %s",&name,&hobby);
    scanf("%d",&age);
    printf("Name: %s \n Age: %d \n Hobby: %s",name,age,hobby);
}