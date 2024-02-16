#include<stdio.h>
int main()
    {
        int a=0,b=1,c,n,i;

        printf("a=%d, b=%d",a,b);
        printf("Enter any no:");
        scanf("%d",&n);
        while (i<n)
        {
            c=a+b;
            printf("c=%d",c);
            a=b;
            b=c;
            i++;
        }
        return 0;
    }
