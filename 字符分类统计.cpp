//��Ŀ����
//����һ���ַ����Իس�����Ϊ��������ı�־��ͳ������Ӣ����ĸ�������ַ��������ַ��ĸ�����
//
//����
//����ַ����Իس����������س�������Ϊ��Ч�ַ�����Ч�ַ�����������100��
//
//���
//�����3�У���ʽ�����������
//
//�������� Copy
//Abse 4 + 5 * 3 = ?
//������� Copy
//letter : 4
//digit : 3
//other : 5
#include<stdio.h>
int main()
{
	char c, letter = 0, digit = 0, other = 0;
	while (1)
	{
		c = getchar();
		if (c == '\n')
		{
			break;
		}

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{letter++;
	}
		else if (c>='0'&&c<='9')
		{
			digit++;
		}
		else
		{
			other++;
		}
		
	}printf("letter:%d\n", letter);
		printf("digit:%d\n", digit);
		printf("other:%d\n", other);
	return 0;
}