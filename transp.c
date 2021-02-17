#include<stdio.h>
#define R 2
#define C 3
int main()
{
	int arr[R][C];
	int i,j;
	printf("enter matrix of[2][3]\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{	scanf("%d",&arr[i][j]);
		}
	}
	printf("entered matrix is \n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	printf("transpose of matrix is :\n");
	for(i=0;i<C;i++)
	{
		for(j=0;j<R;j++)
		{
			printf("%d",arr[j][i]);
		}
		printf("\n");
	}
}
