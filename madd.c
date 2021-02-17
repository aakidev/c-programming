#include<stdio.h>
#define r 2
#define c 3
int main()
{
	int i,j;
	int a[r][c];
	int b[r][c];
	int t[r][c];
	printf("enter first matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter second matrix:\n");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
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
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%d\t",b[i][j]);
                }printf("\n");
        }
	printf("addition is :\n");
        for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        t[i][j]=a[i][j]+b[i][j];
                }
        }
	for(i=0;i<r;i++)
        {
                for(j=0;j<c;j++)
                {
                        printf("%d\t",t[i][j]);
                }
		printf("\n");
        }
}
