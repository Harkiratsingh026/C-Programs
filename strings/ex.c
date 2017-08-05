#include<stdio.h>
int main()
{
	char *s="hello";
	char am[]="Good bye";
	printf("%d\n",sizeof(s));
	printf("%d",sizeof(am));
	//printf("%c",s[0]);
	//s[0]='x';
	//printf("%c",s[0]);
	printf("%c",am[0]);
	am[0]='x';
	printf("%c",am[0]);
	am=s;
	printf("%c",am[2]);
}
