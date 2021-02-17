#include<stdio.h>
#define R 2
#define C 3
int main()
{
	int arr[R][C];
	int i,j,a;
	printf("enter matrix of[2][3]\n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{	scanf("%d",&arr[i][j]);
		}
	}
	printf("enter elment to search:\n");
	scanf("%d",&a);
	printf("entered matrix is \n");
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<R;i++)
	{
		for(j=0;j<C;j++)
		{
			if (a==arr[i][j])
			{printf("found at row : %d, column : %d",i,j);
				break;}
		}
	
	}
}
