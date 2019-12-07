#include<stdio.h>
int main(void)
{
	int n,a,t;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&a);
		t=10;
		while(a/t>10)
		{
			t=t*10;
		}
		printf("%d\n",a%t);
	}
	
}
	

