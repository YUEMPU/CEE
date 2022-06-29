#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>//	库函数打印，printf  引用头文件
//
//int main()
//{
//	int mun = 20;//类型 变量名称 = 数据
//	double weight = 12.1;
//	mun = mun + 2;
//	printf("%d\n", mun);
//	printf("%lf\n", weight);
//	return 0;
//	//% f表示输入或输出浮点数（float）
//	//% lf表示输入或输出双精度浮点数（double）
//}


//	int a = 100;//全部变量
//
//int main()
//{
//	//局部变量
//	//局部变量和全局变量冲突情况下局部优先
//    //不建议局部变量全局变量名称相同
//	int a = 10;
//	printf("%d\n",a);
//	return 0;
//}

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);//输入函数
	sum = a + b;
	printf("sun = %d\n", sum);
	return 0;
}