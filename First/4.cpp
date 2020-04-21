#include<stdio.h>
#include<string.h>
int run(int num)
{
	int count=0,temp=0,res=0;
	while(num)
    {
        temp = num%10;
		if(num < 10)
        {
            temp = num;
        }
		//printf("第%d位数:%d\n",count+1,temp);
		res=res+temp*temp;
		//printf("%d",res);
		num = num/10;
		count++; //count表示num是一个几位数
    }
	return res;
}
int main(void)
{
	int N,mid,num=0;
	scanf("%d",&N);
	while(N>=10)
	{
		mid=N;
		printf("%d",N);
		while(mid>9)
		{
			printf("-->");
			mid=run(mid);
			printf("%d",mid);
		}
		if(mid==1)
		{
			num++;
		}
		printf("\n");
		N--;
	}
	printf("The number of rusult 1:%d",num);
	return 0;
}
