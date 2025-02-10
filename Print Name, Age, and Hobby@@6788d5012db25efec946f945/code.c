#include <stdio.h>

int main() {
    char name[50];
    int age;
    char hobby[50];
    scanf("%s%s%d",&name,&hobby,&age);
    print("Name: %s \n Age: %d \n Hobby: %s",name,age,hobby);
}