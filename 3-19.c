#include <stdio.h>

int main(void)
{
 int num, half, count=0;
 int i;

 printf("���� �Է�: ");
 scanf("%d", &num);

 half = num / 2;
 
 printf("���: ");

 for(i=1; i<=half; i++){
  if(num % i == 0){
   printf("%d ",i);
   count++;
  }
 }

 printf("\n�������: %d\n", count);
 system("PAUSE");
 return 0;
}
