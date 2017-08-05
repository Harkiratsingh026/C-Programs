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
	char ch[]="lalcoomadam";
	int i,j,k,fl,end,flag=-1,l,nex=0,p,q=0,max=0;
	l=strlength(ch);
	k=l-1;
	fl=l-1;
	i=0;
	while(i<l)
	{
		j=i;
		while(fl>j)
		{
			k=fl;
			while(j<k)
			{
				if(ch[j]==ch[k])
				{
					j++;
					k--;
					flag=1;
				}
				else
				{
					flag=-1;
					break;
				}
			}
			fl--;
			j=i;
			if(flag==1&&(nex<(fl-j+2)))
			{
				k=fl+1;
				for(p=j;p<k+1;p++)
				{
					printf("%c",ch[p]);
					nex++;
				}
				if(max<nex)
				{
					max=nex;
					q=j;
				}
				nex++;
				printf("\n");
				break;
			}
		}
		i++;
		fl=l-1;
		nex--;
		if(nex<0)
		nex=0;
	}
	for(i=0;i<max;i++,q++)
	{
		printf("%c",ch[q]);
	}
	
}











