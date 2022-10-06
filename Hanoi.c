#include<stdio.h>
void hanoi(char,char,char,int);
int main()	{
	int num;
	printf("How many Disks : ");
	scanf("%d",&num);
	printf("Steps for Towers of Hanoi for %d Disks : \n",num);
	hanoi('A','B','C',num);
}
void hanoi(char from,char to,char other,int n)	{
	if(n<=0){
	printf("Illegal number of Disks.");
	}
	if(n==1){
	printf("Move Disk from %c to %c.\n",from,other);
	}
	if(n>1){
	hanoi(from,other,to,n-1);
	hanoi(from,to,other,1);
	hanoi(to,from,other,n-1);
	}
}
