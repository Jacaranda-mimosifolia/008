#include<stdio.h>
int main()
{
	char ch;
	printf("����ch=0���˳�ѭ��"); 
	for(;;)
	{
		printf("\nch=");
		scanf("%c",&ch);
		getchar();
		if ((ch>=97)&&(ch<=110))
		{printf("ch+1=%c\n",ch+=1);}
		else if ((ch>=111)&&(ch<=123))
		{printf("ch-1=%c\n",ch-=1);}
		else if (ch==49)
		{printf("ѭ������");break;}
	}
	return 0;
}

