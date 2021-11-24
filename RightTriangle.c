#include <stdio.h>

int main()
{
    int n,i,j;
    printf("Provide the number of stairs required : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("01");
        }
        printf("\n");
    }
    return 0;
}
