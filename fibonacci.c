#include<stdio.h>
int main()
{
    int x=0,y=1,z,i=3,term;
    scanf("%d",&term);
    z=x+y;
    printf("%d%d%d",x,y,z);
    while(i<=term)
    {
        x=y;
        y=z;
        z=x+y;
        printf("%d \n",z);

        i++;
    }
    return 0;
}