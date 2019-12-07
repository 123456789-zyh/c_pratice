#include<stdio.h>
int f(int a,int b)
{
	int x=0,y=0,i=0;
	if(a%10+b%10>=10)
	{
		 i+=1;
	     x+=1;
	}
	if(a%100/10+b%100/10+x>=10)
	{
		i+=1;
		y+=1;
	}
	if(a/100+b/100+y>=10)
	{
		i+=1;
	}
	return(i);
}
int main(void)
{
	int m,n,num=0;
	scanf("%d%d",&m,&n);
	if(m==0&&n==0) return 0;
	else
	{
		num=f(m,n);
	printf("%d\n",num);
	}
	return 0;

}


