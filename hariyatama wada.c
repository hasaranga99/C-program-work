#include <stdio.h>


int main()
{
    char name[10];
    char grade;
    int age;


    printf("Enter Name=\n");
    scanf("%s",&name);
    printf("Enter Grade=\n ");
    scanf(" %c",&grade);
    printf("Enter age=\n");
    scanf("%d",&age);

    printf("\n\n %s %c %d",name,grade,age);

    return 0;
}
