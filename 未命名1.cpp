#include<stdio.h>
int main()
{
	int q,w;
	printf("������ɼ�������0��������");
	scanf("%d",&q);
	while(w!=0)
	{
		w=q/10;
		switch(w)
		{
			case 10 :printf("��");break;
			case 9 :printf("��") ;break;
			case 8 :printf("��");break;
			case 7: printf("��");break;
			case 6: printf("����");break; 
			default :printf("������");
			
		}
		scanf("%d",&q) ;
	}
	
}
