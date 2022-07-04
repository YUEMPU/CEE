#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//
//int main()
//{
//	int i = 0;
//
//	for (i = 1 ; i <= 100 ; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ",i);
//		}
//
//	} 
//	





	//if (age < 18)
	//	printf("骚年\n");
	//else if (age >= 18 && age < 26)
	//	printf("青年\n");
	//else if (age >= 26 && age < 40)
	//	printf("中年\n");
	//else if (age >= 40 && age < 60)
	//	printf("壮年\n");
	//else if (age >= 26 && age < 40)
	//	printf("老年\n");
	//else
	//	printf("修仙者\n");

	/*if (age >= 18)
	{
		printf("成年\n");
	}

	else
	{
		printf("未成年\n");
		printf("禁止谈恋爱\n");
//	}*/
//	/*return 0;*/
//
//
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期1\n");
//		break;
//	case 2:
//		printf("星期2\n");
//		break;
//	case 3:
//		printf("星期3\n");
//		break;
//	case 4:
//		printf("星期4\n");
//		break;
//	case 5:
//		printf("星期5\n");
//		break;
//	case 6:
//		printf("星期6\n");
//		break;
//	case 7:
//		printf("星期7\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	return 0;
//}
////
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i++);
//	}
//	return 0;
//
//}

int main()
{
	int ch = 0;

	while ((ch = getchar())  != EOF)//读取键盘 
	{
		putchar(ch);//输出键盘
	}
	return 0;

}