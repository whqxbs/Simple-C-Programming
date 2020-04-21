#include<stdio.h>
struct fushu{
	int sb,xb;
};
int main(void)
{
	struct fushu a,b;
	printf("请输入a实部:\n");
	scanf("%d",&a.sb);
	printf("请输入a虚部:\n");
	scanf("%d",&a.xb);
	printf("请输入b实部:\n");
	scanf("%d",&b.sb);
	printf("请输入b虚部:\n");
	scanf("%d",&b.xb);
	printf("和:%d+%di\n",a.sb+b.sb,a.xb+b.xb);
	printf("差:%d+%di\n",a.sb-b.sb,a.xb-b.xb);
	printf("积:%d+%di\n",a.sb*b.sb-b.xb*a.xb,a.xb*b.sb+a.sb*b.xb);
	return 0;
 } 
