#include<stdio.h>
int main()	{
	int n;
	printf("How many elements : ");
	scanf("%d",&n);
	int a[n],i,k,flag=0;
	printf("Enter %d elements : ",n);
	for(i=0;i<n;i++)	{
		scanf("%d",&a[i]);
	}
	printf("Element to Find : ");
	scanf("%d",&k);
	for(i=0;i<n;i++)	{
		if(k==a[i])	{
			printf("Element found at Index : %d",i);
			flag = 1;
		}
	}
	if(flag==0)	{
		printf("Element not Found !!");
	}
	return 0;
}
