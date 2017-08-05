int main()
{
	int quot,rem,bin[50],i=1,j;
	quot=5;
		while(quot!=0)
		{
			bin[i++]=quot%2;
			quot/=2;
		}
		for(j=i-1;j>0;--j)
		{
			printf("%d",bin[j]);
		}
}
