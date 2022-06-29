#include<stdio.h>//	库函数打印，printf  引用头文件

//int main()//整型  主程序
//{
//	
//	
//	printf("Hello, World! \n");//printf是打印的一个函数使用前需要调用头文件#include<stdio.h>  \n是换行
//	printf("%d\n",100);
//	return 0;//返回的int数值
//
//}
//
char SM = 'w';
int main()
{
	//sizeof() 是一个判断数据类型或者表达式长度的运算符。
	printf("%d\n",sizeof(char));// 字符
	printf("%d\n",sizeof(short));//短整形
	printf("%d\n",sizeof(int));//整形
	printf("%d\n", sizeof(long));//长整形
	printf("%d\n", sizeof(long long));//更长整形
	printf("%d\n", sizeof(float));//单精度浮点数
	printf("%d\n", sizeof(double));//双精度浮点数
	return 0;
}
	