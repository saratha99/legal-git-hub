#include <stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();
    printf("enter num");
    scanf("%d",&n);
    if(n>0)
        printf("positive number");
    else
        printf("negative number");
    getch();
}
