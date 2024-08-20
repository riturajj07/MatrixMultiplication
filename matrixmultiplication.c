#include<stdio.h>
int main()
{
    int a,b,p,q;
    printf("enter row and column for matrix 1:");
    scanf("%d%d",&a,&b);
    printf("enter row and column for matrix 2:");
    scanf("%d%d",&p,&q);
    if(b != p)
    {
        printf("\n muktiplication is not possible \n");
    }
    else
    {
        int arr1[a][b],arr2[p][q],arr3[a][q];
        int i,j,k;
        for(i=0;i<a;i++)
        {
            for(j=0;j<b;j++)
            {
                printf("\n enter first matrix element:");
                scanf("%d",&arr1[i][j]);
            }
        }
        for(i=0;i<p;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("\n enter second matrix element:");
                scanf("%d",&arr2[i][j]);
            }
        }
        for(i=0;i<a;i++)
        {
            for(j=0;j<q;j++)
            {
                arr3[i][j]=0;
                for(k=0;k<b;k++)
                {
                    arr3[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
        for(i=0;i<a;i++)
        {
            for(j=0;j<q;j++)
            {
                printf("%d\t",arr3[i][j]);
            }
            printf("\n");
        }
    }
}