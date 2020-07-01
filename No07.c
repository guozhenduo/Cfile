#include <stdio.h>
#include "06.c"
//尝试导入06.c文件
//
//这里还要尝试C有没有Python的0b,0o,0x
//因为导入的06.c文件已有main()函数,所以将报错
int mai()
{
	int u=0101; //发现C使用0定义八进制
	int l=0x197f;
	int k=0x197F; //尝试大写 
	//还有,C不能同时定义两个名称相同的变量
	//C没有二进制
	return 0;
}
