#include<stdio.h>
#include<math.h>
int convertsstringtoint(char a[50])
{
	int l=strlen(a);
	int i,sum=0,c=0,un;
	for(i=l-1;i>=0;--i)
	{
		un=a[i]-'0';
		sum+=un*pow(10,c);
		c++;
	}
}
int main(int argc,char *argv[])
{
	
	if(argc!=4)
	{
		printf("Supply proper # of arguments\n");
		exit(-1);
	}
	printf("%s %s %s %s",argv[0],argv[1],argv[2],argv[3]);
	printf("  %d",(convertsstringtoint(argv[1])));
}
