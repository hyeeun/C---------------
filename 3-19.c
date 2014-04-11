#include <stdio.h>

int main(void)
{
 int num, half, count=0;
 int i;

 printf("정수 입력: ");
 scanf("%d", &num);

 half = num / 2;
 
 printf("약수: ");

 for(i=1; i<=half; i++){
  if(num % i == 0){
   printf("%d ",i);
   count++;
  }
 }

 printf("\n약수갯수: %d\n", count);
 system("PAUSE");
 return 0;
}
