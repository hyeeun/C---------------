#include <stdio.h>

int main(void)
{
	char code2;
	float r3 , a;
	
	printf("������ ȭ���� ȭ���� ������ ��ȯ�ϴ� ���α׷�\n");
	printf("�Է�: ");
	scanf("%f", &a);
	fflush(stdin);

	printf("�Է�(f = ȭ����������,c = ��������ȭ��): ");
	scanf("%c", &code2);

	if(code2 == 'c' || code2 == 'C')
	{
		r3 = 1.8 * a + 32 ;
		printf("���: %lf\n\n", r3);
	}
	else if(code2 == 'f' || code2 == 'F')
	{
		r3 = 1.8 / a + 32 ;
		printf("���: %f\n\n", r3);

	}
	
    system("PAUSE");	
    return 0;
}
