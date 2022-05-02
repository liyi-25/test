#include<stdio.h>
int main()
{
	int n,t,i,j;
	double sum;
	printf("请输入一个整数："); 
	scanf("%d",&n);
	sum=0;
	for(i=1;i<=n;i++){
		t=1;
		for(j=1;j<=i;j++){
			t=t*j;
		}
		sum=sum+1.0/t;
	}
	printf("%.4f",sum);
}
