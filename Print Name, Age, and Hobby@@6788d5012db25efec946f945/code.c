#include <stdio.h>

int main() {
    char name[50];
    int age;
    char hobby[50];
    scanf("%s", name);
    scanf("%s", hobby);
    scanf("%d",&age);
    printf("Name: %s \nAge:%d\nHobby: %s",name,age,hobby);
    return 0;
}
