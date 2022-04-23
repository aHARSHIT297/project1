#include<stdio.h>
int main()
{
    int marks;
    printf("enter the marks: ");
    scanf("%d",&marks);

    if (marks<=100  && marks>=90)
    {
        printf("In this exam you have a distinction",marks);
    }
    else if (marks<=89 && marks>=70)
    {
        printf("In this exam you have a first class",marks);
    }
    else if (marks<=69 && marks>=40)
    {
        printf("In this exam you have a second class",marks);
    }
    else
    {
        printf("You have fail",marks);
    }
    
    
    return 0;
}