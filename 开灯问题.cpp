#include<stdio.h>
int main(void)
{
	int i,j,n,k,open;
	scanf("%d%d",&n,&k);
	for(i=1;i<=n;i++)
	{
		open=1;
		for(j=2;j<=k;j++)
		{
			if(i%j==0)
			{
				open=(open+1)%2;
			}
		}
		if(open)
		{
			printf("%d ",i);
		}
	}
	return 0;
}

