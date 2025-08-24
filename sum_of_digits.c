#include<stdio.h>
int s=0;
int sum(int x){
    if(x==0){
        return s;
    }
    // printf("%d",x%10);
    s=s+(x%10);
    sum(x/10);
}

void main()
{
int x=sum(123);
printf("%d",x);
}
