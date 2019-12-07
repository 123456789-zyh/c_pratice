#include<stdio.h>
int main()
{
	int m,n,a,i;
	int x,flag=1;
	scanf("%d",&a);
	for(i=1;i<=a;i++)
	{
		scanf("%d%d",&n,&m);
		{
			for(i=0;i<=n;i++)
			{
				if(2*i+4*(n-i)==m) 
			{
					flag=0;
			printf("%d %d\
				n",i,n-i);
			break;
			}
			}
            if(flag) printf("No answer");
		}
	}
	
	return 0;
}