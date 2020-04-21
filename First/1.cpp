#include<stdio.h>
#include<string.h>
int main(void)
{
	char h[10000];
	int len,i,d=0;
	printf("请输入二进制数:\n");
	scanf("%s",h);
	len=strlen(h);
	for(i=0;i<len;i++)
	{
		d=d*2+h[i]-'0';
	}
	printf("十进制数为:\n%d",d);
	return 0;
 } 
