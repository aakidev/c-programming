#include<stdio.h>
#define r 2
#define c 3
int main()
{
	int i,j,k;
	int a[r][c];
	int b[c][r];
	int t[r][r];
	printf("enter first matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter second matrix:\n");
        for(i=0;i<c;i++)
        {
                for(j=0;j<r;j++)
                {
                        scanf("%d",&b[i][j]);
                }
        }
	printf("first matrix:\n");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%d\t",a[i][j]);
                }printf("\n");
        }
	printf("second matrix:\n");
        for(i=0;i<c;i++)
        {
                for(j=0;j<r;j++)
                {
                        printf("%d\t",b[i][j]);
                }printf("\n");
        }
	printf("multiplication is :\n");
        for(i=0;i<r;i++)
        {
                for(j=0;j<r;j++)
                {	t[i][j]=0;
			for(k=0;k<c;k++)
			{
                        t[i][j] += a[i][k] * b[k][j];
		}
		}
        }
	for(i=0;i<r;i++)
        {
                for(j=0;j<r;j++)
                {
                        printf("%d\t",t[i][j]);
                }
		printf("\n");
        }
}
