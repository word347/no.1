#include<stdio.h>
int main()
{
	char *m[13]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int i;
	printf("please input a month\n");
	scanf("%d",&i);
	printf("���·ݵ�Ӣ��Ϊ��%s\n",m[i-1]);
	return 0;


}