#include <stdio.h>

int main()
{
	printf("振动\a \n");
	int k=10;
	printf("k是%d \n",k);
	printf("k++是%d \n",k++);//10,怎么没有变化？
	printf("k--是%d \n",k--);//奇怪
	printf("--k是%d \n",--k);
	printf("++k是%d \n",++k);
	
	return 0;
}
