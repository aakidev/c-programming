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
void swap(char **s1,char **s2)
{
        char *t;
        t=*s1;
	*s1=*s2;
	*s2=t;
 }

int main(int argc,char *argv[])
{
	int i,j;
	char t[10];
	printf("%d\n",argc);
//	for(i=0;i<argc;i++)
		//printf("%s\t",argv[i]);
for(i=1;i<=argc;i++)
        {
                for(j=i+1;j<argc;j++)
                {       if(strcomp(argv[i],argv[j])>0)
                        {
                            swap(&argv[i],&argv[j]);
                        }
                }
        }
        printf("sorted array is:\n");
        for(i=0;i<argc;i++)
                printf("%s\n",argv[i]);
		
}

