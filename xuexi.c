#include <stdio.h>
int main (void)
{
    int x,run,ping;
    printf("Enter x:");
    scanf("%d",&x);
    if(x%4==0,x%100!=0){
        printf("yes\n");
    }
    if(x%400==0){
        printf("no\n");
    }
    return 0;
}