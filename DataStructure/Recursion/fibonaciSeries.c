/*#include<stdio.h>
int main()
    {
        int a=0,b=1,c,n,i;

        printf(" Enter any no:");
        scanf("%d",&n);
        printf(" Fibonacci Series of %d:- ",n);
        for(i=0;i<n;i++)
        {
        	c=a+b;
        	a=b;
        	b=c;
        	printf("\n  %d",c);
		}
        return 0;
    }
*/
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    printf(" Enter the number of terms: ");
    scanf("%d", &n);

    printf(" Fibonacci Series of %d are:- ",n);

    for (int i = 0; i < n; i++) {
       // if (i <= 1)
         //   next = i;
        //else {
            next = first + second;
            first = second;
            second = next;
        //}
        printf("\n  %d ", next);
    }

    return 0;
}
