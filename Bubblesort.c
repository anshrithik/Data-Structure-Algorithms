#include<stdio.h>
int main()	{
	int n;
	printf("How many elements : ");
	scanf("%d",&n);
	int arr[n],i,j,temp;
	printf("Enter %d elements : \n",n);
	for(i=0;i<n;i++)	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)	{
		for(j=0;j<n-i-1;j++)	{
			if(arr[j]>arr[j+1])	{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
	printf("After Applying Bubble Sort : \n");
	for(i=0;i<n;i++)	{
		printf("%d ",arr[i]);
	}
	return 0;
}
