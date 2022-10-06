#include<stdio.h>
int fibonacci(int);
int main()	{
	int n,i,m=0;
	printf("How many terms of series : ");
	scanf("%d",&n);
	printf("Fibonaaci Series : ");
	for(i=1;i<=n;i++)	{
		printf("%d ",fibonacci(m));
		m++;
	}
	return 0;
}
int fibonacci(int x)	{
	if(x==0||x==1)	
	return x;
	else
	return (fibonacci(x-1)+fibonacci(x-2));
}