#include<stdio.h>
int main(void)
{
	int  y,m,d,n,i;
	int sum;
	scanf("%d",&n);
	int arr[12]={31,28,31,30,31,30,31,31,30,31,30,31};//ƽ��ÿ����������
	while(n--)
	{
		sum=0;
		scanf("%d%d%d",&y,&m,&d);
		for(i=0;i<m-1;i++)
		{
			sum+=arr[i];//����m�¹��м�����
		}
		if((y%400==0)||(y%4==0&&y%100!=0))//�ж�����
		{
			sum=sum+1;//�����ƽ���һ��
		}
		printf("%d\n",sum+d);
	}
	return 0;
}