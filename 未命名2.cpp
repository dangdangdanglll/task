#include<stdio.h> 
int main()
{
	int i=1,sum=0;
	
	while(sum<10000)
	{
		sum+=i*i;
		i++;
	}
	printf("%d",i);
}
