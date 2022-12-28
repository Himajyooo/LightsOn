#include <stdio.h>
#include <windows.h>
int main()
{
    int n=9;
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=2*(n+2);j++)
            printf(" ");
        for(int j=n;j>i;j--)
            printf(" ");
        for(int k=1;k<=i;k++)
	    printf("! ");
        printf("\r");
        Sleep(100);
	    for(int j=1;j<=2*(n+2);j++)
            printf(" ");
        for(int j=n;j>i;j--)
            printf(" ");
        for(int k=1;k<=i;k++)
	        printf("* "); 
	    printf("\n");
	}
    for(int i=1;i<=(n+3)/2;i++)
    {
        for(int j=1;j<=3*(i-1)+1;j++)
            printf(" ");   
        for(int k=3*(n+1);k>=3*(i-1)+1;k--)
            printf("! ");
	    printf("\r");
        Sleep(100);
        for(int j=1;j<=3*(i-1)+1;j++)
            printf(" ");   
        for(int k=3*(n+1);k>=3*(i-1)+1;k--)
            printf("* ");
        printf("\n");
    }
    for(int i=1;i<=n/2-1;i++)
    {
        for(int j=3*(n+1)/2;j>=i;j--) 
            printf(" ");
        for(int k=1;k<=(3*n+3)/2+i;k++)
            printf("! ");
        printf("\r");
        Sleep(100);
        for(int j=3*(n+1)/2;j>=i;j--) 
            printf(" ");
        for(int k=1;k<=(3*n+3)/2+i;k++)
            printf("* ");
        printf("\n");
    }
    for(int i=1;i<=(n+2)/2;i++)
    {
        for(int j=(2*n+7)/2;j>=i;j--)
            printf(" ");
        for(int k=n;k>2*(i-1);--k)
            printf("! ");
        for(int j=1;j<=10*(i-1)+2;j++)
            printf(" ");
        for(int k=n;k>2*(i-1);--k)
            printf("! ");
        printf("\r");
        Sleep(100);
        for(int j=(2*n+7)/2;j>=i;j--)
            printf(" ");
        for(int k=n;k>2*(i-1);--k)
            printf("* ");
        for(int j=1;j<=10*(i-1)+2;j++)
            printf(" ");
        for(int k=n;k>2*(i-1);--k)
            printf("* ");
        printf("\n");
    }
    return 0;
}