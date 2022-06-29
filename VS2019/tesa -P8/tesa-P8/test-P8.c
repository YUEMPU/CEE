#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//作用域和生命周期
//局部变量的作用域：就算变量的局部范围

//int gg = 2021;
//extern int xxx;//声明b.c源文件的变量xxx
//int main()
//{
//	printf("hehe\n");
//	printf(" 1:%d\n ", gg);
//	{
//		int a = 100;
//		printf("a = %d\n ", a);
//		printf("2:%d\n ", gg);
//		printf("3:%d\n ", xxx);//使用了b.c文件的变量
//	}
//	return 0;
//}

//生命周期
//变量的生命周期：变量的创建和销毁

//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：程序的生命周期
//
//
//int main()
//{
//	{
//		int a = 10;
//		printf("%d\n", a);
//	}
//
//	return 0;
//
//}
//#define DD 1000;
//
//int main()
//{
//	//1.字面常量
//	//3.14;
//	//10;
//	//"a";
//	//"avasd";
//	
//	
//	//2.const 修饰的常变量
//	//const int num = 10;//num 就是常变量 - 具有常属性（不能被修改的属性）
//	//num = 20;
//	//printf("num = %d\n",num);
//
//	//int arr[10] = {0};//10个元素
//
//	//const int n = 10;
//	//int arr2[a] = {0};//n是变量 不行的
//
//	//3.#define 定义标识符常量
//	//int n = DD;
//	//printf("n = %d\n", n);
//	//return 0;
//
//	
//}
//enum Sex
//{
//	//这种枚举类型的变量的未来可能取值
//	//枚举常量
//	MALE = 3,//赋初始值 从3开始
//	FEMALE,
//	SECRET
//};
//
//
//int main()
//{
//	//4.枚举常量
//	//可以一一列举的
//	enum Sex s = MALE;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	return 0;
//}

//字符串就是一串字符 用双引号" "的一串字符
//
//int main()
//{
//	"abcd";
//	"hello xy";
//	return 0;
//}
//
//int main()
//{
//	//字符数值 - 数组 一组相同类型的元素
//	//字符串在结尾隐藏了一个\0的字符
//	// \0是字符串的结束符
//	// 
//	//char arr[] = "hello";
//
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c','\0'};
//	//求字符串的长度
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	//int len = strlen("abc");
//	//printf("%d\n", len);
//
//
//	return 0;
//}
//
//int main()
//{
//	//printf("(are you ok??)");//  ??)会转变成 -- ] 三字母词
//	//(are you ok] 
//	//printf("% c\n" ,'\'');//要显示中间的'\'' ' 需要加\
//	printf("\a\a\a");
//
//
//	return 0;
//	 
//}
int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
//
//int main()
//{
//	int s1 = 0;
//	int s2 = 0;
//	printf("请输入数值：例如1 1（中间空格）\n");
//	scanf("%d%d", &s1, &s2);
//	int sum = Add(s1, s2);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
	//蠢方法 
	//int a = 1;
	//int b = 2;
	//int c = 3;
	//.....

	//数值 - 一组相同类型元素的集合
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//char ch[5] = { 'a','b','c' };//不完全初始化剩下的默认0
	//int i = 0;
	//while (i < 10)
	//{
	//	printf("%d ", arr[i]);
	//	i++;
	//}
	//return 0;
 //}

int main()
{
	//int a = 9 / 2;//两个整数相除出来的不带小数点 四舍五入
	//float a = 9 / 2.0;//任意一个小数相除出来带小数点
	int a = 9 % 2;//% - 取模（得到余数）
	printf("%d\n", a);
}
