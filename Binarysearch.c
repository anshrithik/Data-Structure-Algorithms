#include<stdio.h>
int binarys(int[],int,int,int);
int main()	{
	int n;
	printf("How many elements : ");
	scanf("%d",&n);
	int a[n],i,k,res;
	printf("Enter %d elements : ",n);
	for(i=0;i<n;i++)	{
		scanf("%d",&a[i]);
	}
	printf("Element to Find : ");
	scanf("%d",&k);
	res = binarys(a,k,0,n-1);
	if(res != -1)	{
		printf("Element found at Index : %d",res);
	}
	else
		printf("Element not Found !!");
	return 0;
}
int binarys(int a[],int k,int l,int h)	{
	int mid;
	if(l>h)
	return -1;
	mid = (l+h)/2;
	if(k==a[mid])	{
		return mid;
	}
	else if(k<a[mid])	{
		return binarys(a,k,l,mid-1);
	}
	else	{
		return binarys(a,k,mid+1,h);
	}
}
