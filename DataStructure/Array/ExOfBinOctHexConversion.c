
#include<stdio.h>
#include<process.h>
int main()
{
    int nx,n,bin[32],tbin,oct[32],toct,hex[32],thex,i;

    printf("Enter any no:");
    scanf("%d",&n);

//code for binary
    nx = n;
    tbin = 0;

    while(nx!= 0)
    {
        bin[tbin++] = nx % 2;
        nx = nx % 2;
    }
     
 // code for octal
    nx = n;
    toct = 0;

    while(nx!= 0)
    {
        oct[toct++] = nx % 8;
        nx = nx % 8;
    }

// code for hexadecimal
    nx = n;
    thex = 0;

    while(nx!= 0)
    {
        hex[thex++] = nx % 16;
        nx = nx % 16;
    }

//binary form
       printf("\n The BInary  of %d is:",n);
       for(i=tbin-1;i>=0;i-=1)
        printf("%d",bin[i]);

//octal form
        printf("\n The Octal of %d  is:",n);
        for(i=toct-1;i>=0;i-=1)
        printf("%d",oct[i]);

//hexadecimal form
        printf("\n The Octal of %d  is:",n);
        for(i=thex-1;i>=0;i-=1)
       {
             if(hex[i]>=10)
             printf("%c",hex[i]);
            else
             printf("%d",hex[i]+55);
       } 
     
    return 0;
}

