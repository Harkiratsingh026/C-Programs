#include<stdio.h>
int main()
{
    int i,j,count=1;
    for(i=1;count<=91;++i)
    {
        for(j=1;j<=i;++j)
        {
        
            printf("%d ",count);
            count++;
        }
        printf("\n");
    }
    return 1;
}
