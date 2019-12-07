#include<stdio.h>
int f(int n)
{
	int i,s=1;
	for(i=1;i<=n;i+=2)
		s*=i;
	return s;
}
int main()
{
	int a,n,i,s;
	scanf("%d",&a);
	while(a--)
	{
		s=0;
		scanf("%d",&n);
		for(i=1;i<=n;i++)
			s+=f(i);
		printf("%d\n",s);
	}
	return 0;

}
