#include<stdio.h>
int main()
{
	int q,w;
	printf("请输入成绩（输入0结束）：");
	scanf("%d",&q);
	while(w!=0)
	{
		w=q/10;
		switch(w)
		{
			case 10 :printf("优");break;
			case 9 :printf("优") ;break;
			case 8 :printf("良");break;
			case 7: printf("中");break;
			case 6: printf("及格");break; 
			default :printf("不及格");
			
		}
		scanf("%d",&q) ;
	}
	
}
