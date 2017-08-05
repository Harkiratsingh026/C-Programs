#include<stdio.h>
int main()
{
	FILE *fp; 
	int roll,count=0;
	float gpa,sum_gpa=0.0,avg_gpa;
	char name[100];
	fp=fopen("f1.txt","r");
	while(fscanf(fp,"%s %d %f",name,&roll,&gpa)!=EOF)
	{
		printf("The student %s with roll no %d has gpa=%f\n",name,roll,gpa);
		sum_gpa+=gpa;
		count++;
	}
	avg_gpa=sum_gpa/count;
	printf("Average gpa=%f",avg_gpa);
	fclose(fp);
}
