#include<stdio.h>
#include<math.h>
int prime(int n)//判断一个数是不是素数
{
	int i;
	if(n<=1) return 0;//小于2不是素数
	else if(n==2)
		return 1;//2是素数
	else //大于2判断是不是
	{
		for(i=2;i<=sqrt(n);i++)
			if(n%i==0) return 0;
			return 1;
	}

}
int ab_prime(int m)//判断是不是绝对素数
{
	int a;
	a=(m%10)*10+m/10;//得到交换位置后的的数字
	if(prime(a)&&prime(m))
		return 1;
	else return 0;

}
main()
{
	int i;
	for(i=10;i<=99;i++)
		 if(ab_prime(i))
			 printf("%d ",i);
}