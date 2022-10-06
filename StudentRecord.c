#include<stdio.h>
#include<stdlib.h>
struct student{
	int rno;
	float per;
	char name[20],add[50];
}s;
int main()	{
	FILE *fp;
	fp=fopen("student.txt","a");
	printf("Enter Student's Details : \n");
	printf("Enter Roll no. : ");
	scanf("%d",&s.rno);
	printf("Enter Name : ");
	scanf("%s",s.name);
	printf("Enter Address : ");
	scanf("%s",s.add);
	printf("Enter Marks : ");
	scanf("%f",&s.per);
	fprintf(fp,"Name : %s \nRoll No. : %d \nAddress : %s \nPercentage : %.2f \n---------\n",s.name,s.rno,s.add,s.per);
	printf("\nRecord Stored Successfully.....");
	fclose(fp);
	return 0;
}
