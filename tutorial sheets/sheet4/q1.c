#include<stdio.h>
int main()
{
    int A[10][10]={0},i,j;
    A[0][0]=1;
    for(i=1;i<=6;++i)
    {
        A[i][0]=1;
        for(j=1;j<=6;++j)
        {
            A[i][j]=A[i-1][j-1]+A[i-1][j];
        }

    }
    for(i=0;i<6;++i)
    {
        for(j=0;i>=j;++j)
        {

                printf("%d  ",A[i][j]);
        }
        printf("\n");
    }
}
