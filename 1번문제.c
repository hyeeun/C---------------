#include <stdio.h>

int main(void)
{
	char code2;
	float r3 , a;
	
	printf("¼·¾¾¸¦ È­¾¾·Î È­¾¾¸¦ ¼·¾¾·Î º¯È¯ÇÏ´Â ÇÁ·Î±×·¥\n");
	printf("ÀÔ·Â: ");
	scanf("%f", &a);
	fflush(stdin);

	printf("ÀÔ·Â(f = È­¾¾¿¡¼­¼·¾¾,c = ¼·¾¾¿¡¼­È­¾¾): ");
	scanf("%c", &code2);

	if(code2 == 'c' || code2 == 'C')
	{
		r3 = 1.8 * a + 32 ;
		printf("°á°ú: %lf\n\n", r3);
	}
	else if(code2 == 'f' || code2 == 'F')
	{
		r3 = 1.8 / a + 32 ;
		printf("°á°ú: %f\n\n", r3);

	}
	
    system("PAUSE");	
    return 0;
}
