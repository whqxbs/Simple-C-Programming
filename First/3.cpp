#include<stdio.h>
#include<string.h>
int isAll0(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]!=0)
		{
			return 0;
		}
	}
	return 1;	
}
int main(void)
{
	char sp[100],len;
	int i,num[100],res[1000],cou=0,temp,pre;
	printf("请输入十进制大数:\n");
	scanf("%s",sp);
	printf("生成的二进制数为:\n");
	len=strlen(sp);
	for(i=0;i<len;i++)
	{
		num[i]=sp[i]-'0';
	}
	if(isAll0(num,len))
	{
		printf("%d",0);
	}
	while(!isAll0(num,len))
	{
		pre=0;
		for(i=0;i<len;i++)
		{
			temp=(num[i]+pre*10)/2;
			pre=(num[i]+pre*10)%2;
			num[i]=temp;
		}
		res[cou]=pre;
		cou++;
	}
	for(i=cou-1;i>=0;i--)
	{
		printf("%d",res[i]);
	}
	return 0;
}
