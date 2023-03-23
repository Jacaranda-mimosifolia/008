#include<stdio.h>
int main()
{
	char ch;
	printf("输入ch=0则退出循环"); 
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
		{printf("循环结束");break;}
	}
	return 0;
}

