#include<stdio.h>
#define r 6
#define c 10
int main()
{	char chr[r][c];
	int i,j;
	for(i=0;i<r;i++)
	{
		scanf("%s",chr[i]);
	}
	printf("print char by char\n");
	for(i=0;i<r;i++)
	{	
	//	for(j=0;chr[i][j]!=0;j++)
		{
		printf("%c",chr[i][3]);}
		printf("\n");
	}

}

