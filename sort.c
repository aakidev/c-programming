#include<stdio.h>
int strcomp(char *a,char *b)
{int i;
	for(i=0;a[i]&&b[i];i++)
	{if (a[i]==b[i])
		continue;
		else
			break;
	}
	if (a[i]==b[i])
		return 0;
	if(a[i]<b[i])
		return -1;
	return 1;
}
void strcopy(char *s1,char *s2)
{
        while(*s2!='\0')
        {*s1 = *s2;
        s1++;
        s2++;
        }
*s1='\0';
}

int main()
{	int i,j;
	char t[10];
	char arr[6][10];
	printf("enter names\n");
	for(i=0;i<6;i++)
	scanf("%s",arr[i]);
	
	for(i=0;i<6;i++)
	printf("%s \t",arr[i]);
	
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{	if(strcomp(arr[i],arr[j])>0)
			{
				strcopy(t,arr[i]);
				strcopy(arr[i],arr[j]);
				strcopy(arr[j],t);
			}
		}
	}
	printf("sorted array is:\n");
	for(i=0;i<6;i++)
		printf("%s\t",arr[i]);
}
	








