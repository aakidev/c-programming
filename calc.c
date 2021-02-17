#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int i,r;
	//printf("%d\n",argc);
	int a1;
	int a2;
	
	a1 = atoi(argv[1]);
	a2 = atoi(argv[3]);
	char c;
	c= *argv[2];
	if(c=='+')
		r=a1+a2;
	if(c=='-')
		r=a1-a2;
	if(c=='*')
		r=a1*a2;
	if(c=='/')
		r=a1/a2;
	printf("%d\n %d\n result is:%d",a1,a2,r);
	
}

