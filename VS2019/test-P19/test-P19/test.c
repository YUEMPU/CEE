#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//
//	return 0;
//
//}
//
//int main()
//{
	//int a = 10;
	//int b = a++;//����++ ��ʹ�� ��++
	//int a = 10;
	//int b = ++a;//ǰ��++ ��++ ��ʹ��
	//printf("%d\n", b);
	//printf("%d\n", a);
//
//	return 0;
//
//
//
//int main()
//{
//	int a = (int)3.14;//ǿ������ת��
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 0;
//	int c = a || b;//����	�߼���
//	int c = a && b;//����	�߼���
//
//	return 0;
////}
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int c = 5;
//			//a=5		c=1			b=3
//	int d = (a = b + 2, c = a - 4, b = c + 2);
//	//���ű��ʽ�����������μ���
//	//�������ʽ�Ľ�������һ�����ʽ�Ľ��
//	printf("%d\n", d);
//	return 0;
////}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", arr[0]);
//					//�±����ò�����
//	return 0;
////}
//int main()
//{
//	int a = 0;
//	printf("�����Ұ��㣬�㰮����\n");
//	printf("�������룺1 �������뿪\n");
//	scanf("%d", & a);
//	if (a == 1);
//	{
//		printf(" \n\n ��Ҳ����\n");
//		printf("***    ***\n");
//		printf("****  *** \n");
//		printf(" *******  \n");
//		printf("  *****   \n");
//		printf("   ***    \n");
//		printf("    *     \n");
//	}
//	return 0;
//
//}
//#define ADD(X,Y) ((X)+(Y))
//
//int main()
//{
//	printf("%d\n", 5*4*ADD(2, 3));
//
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n", sizeof(int*));

struct Stu
{
	char name[20];
	int age;
	double score;
};

struct Book
{
	char name[20];
	float price;
	char id[30];
};

int main()
{
	struct Stu s = { "����",20,85.5 };
	printf("1: %s %d %lf\n", s.name, s.age, s.score);

	struct Stu * ps = &s;
	printf("2: %s %d %lf\n", (*ps).name,(*ps).age,(*ps).score);

	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);


	return 0;

}