#include<stdio.h>
#include<math.h>
int prime(int n)//�ж�һ�����ǲ�������
{
	int i;
	if(n<=1) return 0;//С��2��������
	else if(n==2)
		return 1;//2������
	else //����2�ж��ǲ���
	{
		for(i=2;i<=sqrt(n);i++)
			if(n%i==0) return 0;
			return 1;
	}

}
int ab_prime(int m)//�ж��ǲ��Ǿ�������
{
	int a;
	a=(m%10)*10+m/10;//�õ�����λ�ú�ĵ�����
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