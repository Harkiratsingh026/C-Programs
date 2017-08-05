#include<stdio.h>
int strlength(char *s)
{
	int i=0;
	while(*s!='\0')
	{
		i++;
		s++;
	}
	return i;
}
int main()
{
	int tl,l,i,max=0,k=0,pos=0;
	char ch[]="hello hhooowww   are yuuuuooouu   ?",temp[50];
	tl=strlength(ch);
	for(i=0;i<tl;i++)
	{
		if(ch[i]==' '||ch[i]=='\0')
		{
			temp[k]='\0';
			l=strlength(temp);
			if(max<l)
			{
				max=l;
				pos=i-k;
			}
			k=0;
		}
		else
		{
			temp[k]=ch[i];
			k++;
		}
	}
	printf("lengthiest_word:");
		for(i=0;i<max;i++,pos++)
	{
		printf("%c",ch[pos]);
	}
}
