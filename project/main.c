#include <stdio.h>
int main(void)
{
    int i,n;
    printf("Enter an integer :");
    scanf ("%d",&n);
    printf("\n Divisors are :\n\n");
    for (i=1 ;i<=n ;i ++)
     if (n % i ==0)
        printf("%d\t", i);
     if (n % 2 ==0)
        printf("%d is even .",n);
     else
        printf("%d is odd.",n);
     return (0);
}
