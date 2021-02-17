#include<stdio.h>
int rev(int s)
{int t=0,c;
	while(s>9)
	{c=s%10;
		t=t*10+c;
		s=s/10;
	}
	t=t*10+s;
	return t;
}

int main()
{
	char *s[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
int a,b;
int i;
scanf("%d",&a);
b=rev(a);
	while(b>0)
	{i=b%10;
		b=b/10;
		printf("%s ",s[i]);
	}
}
