#include<stdio.h>
struct fushu{
	int sb,xb;
};
int main(void)
{
	struct fushu a,b;
	printf("������aʵ��:\n");
	scanf("%d",&a.sb);
	printf("������a�鲿:\n");
	scanf("%d",&a.xb);
	printf("������bʵ��:\n");
	scanf("%d",&b.sb);
	printf("������b�鲿:\n");
	scanf("%d",&b.xb);
	printf("��:%d+%di\n",a.sb+b.sb,a.xb+b.xb);
	printf("��:%d+%di\n",a.sb-b.sb,a.xb-b.xb);
	printf("��:%d+%di\n",a.sb*b.sb-b.xb*a.xb,a.xb*b.sb+a.sb*b.xb);
	return 0;
 } 
