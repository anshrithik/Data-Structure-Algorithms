#include<stdio.h>
void quicksort(int[],int,int);
int main()	{
	int n;
	printf("How many elements : ");
	scanf("%d",&n);
	int list[n],i;
	printf("Enter %d Array elements : \n",n);
	for(i=0;i<n;i++)	{
		scanf("%d",&list[i]);
	}
	quicksort(list,0,n-1);
	printf("After applying Quicksort : \n");
	for(i=0;i<n;i++)	{
		printf("%d ",list[i]);
	}
	return 0;
}
void quicksort(int list[],int low,int high)	{
	int i,p,j,temp;
	if(low<high)	{
		p=low;
		i=low;
		j=high;
	while(i<j)	{
		while(list[i]<=list[p])	{
			i++;
		}
		while(list[j]>list[p])	{
			j--;
		}
		if(i<j)	{
			temp = list[i];
			list[i] = list[j];
			list[j] = temp;
		}
	}
	temp = list[j];
	list[j] = list[p];
	list[p] = temp;
	quicksort(list,low,j-1);
	quicksort(list,j+1,high);
	}
}
