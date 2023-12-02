#include<stdio.h>

int main() {
    int term,x=0,y=1,i=3,z;
    printf("enter the term you want to print");
    scanf("%d",&term);
    z=x+y;
    printf("%d%d%d",x,y,z);
    while(i<=term) 
    {
        x=y;
        y=z;
        z=x+y;
        printf("%d\t",z);
        i++;
    }
    return 0;
}