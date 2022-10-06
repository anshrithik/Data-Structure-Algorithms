#include<stdio.h>
long factorial(int);
int main()	{
	int n,i,j;
	printf("How many rows : ");
	scanf("%d",&n);
	printf("Pascal Triangle for %d Rows : \n",n);
	for(i=0;i<n;i++)	{
		for(j=0;j<=n-i-2;j++)	{
			printf(" ");
		}
		for(j=0;j<=i;j++)	{
			printf("%ld ",factorial(i)/(factorial(j)*factorial(i-j)));
		}
		printf("\n");
	}
	return 0;
}
long factorial(int n)	{
	int i;
	long res = 1;
	for(i=1;i<=n;i++)	{
		res = res * i;
	}
	return res;
}
