#include<stdio.h>//	�⺯����ӡ��printf  ����ͷ�ļ�

//int main()//����  ������
//{
//	
//	
//	printf("Hello, World! \n");//printf�Ǵ�ӡ��һ������ʹ��ǰ��Ҫ����ͷ�ļ�#include<stdio.h>  \n�ǻ���
//	printf("%d\n",100);
//	return 0;//���ص�int��ֵ
//
//}
//
char SM = 'w';
int main()
{
	//sizeof() ��һ���ж��������ͻ��߱��ʽ���ȵ��������
	printf("%d\n",sizeof(char));// �ַ�
	printf("%d\n",sizeof(short));//������
	printf("%d\n",sizeof(int));//����
	printf("%d\n", sizeof(long));//������
	printf("%d\n", sizeof(long long));//��������
	printf("%d\n", sizeof(float));//�����ȸ�����
	printf("%d\n", sizeof(double));//˫���ȸ�����
	return 0;
}
	