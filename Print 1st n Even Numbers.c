#include<stdio.h>
int main()

{
    int i,n;
    printf("Enter Value Of n:\n");
    scanf("%d",&n);
    i=0;
    while(i<n)
    {
        i++;
        printf("%d",i*2);
    }
}