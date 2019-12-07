#include<stdio.h>
int main(void)
{
	int  y,m,d,n,i;
	int sum;
	scanf("%d",&n);
	int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};//平年每月天数存入
	while(n--)
	{
		sum=0;
		scanf("%d%d%d",&y,&m,&d);
		for(i=0;i<m-1;i++)
		{
			sum+=arr[i];//除了m月共有几个月
		}
		if((y%400==0)||(y%4==0&&y%100!=0))//判断闰年
		{
			sum=sum+1;//闰年比平年多一天
		}
		printf("%d\n",sum+d);
	}
	return 0;
}