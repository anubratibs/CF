#include<stdio.h>
int main()
{
    int k,n,w;
    scanf("%d%d%d",&k,&n,&w);
    int t=k*(w*(w+1)/2);
    int b= t-n;
    if (b<0)b=0;
    printf("%d",b);
    return 0;
}
