/*#include<stdio.h>

 

void main(){
     int user;
     int com;

 

     while(1){
             printf("안내면 진거 가위(0)바위(1)보(2).\n");
             scanf("%d",&user);

             if(user>2){ 
                   printf("잘못 눌렀어\n");
                   continue;
             }

             srand(time(NULL)); 
             com=rand()%3; 

 

             if(user==1){
                         if(com==0) 
                                printf("사용자가 승리하였습니다\n");
                         else if(com==1)
                                printf("비겼습니다.\n");
                         else
                                printf("컴퓨터가 승리하였습니다\n");
                        }
             if(user==2){
                         if(com==0)
                               printf("컴퓨터가 승리하였습니다\n");
                         else if(com==1)
                               printf("사용자가 승리하였습니다\n");
                         else
                               printf("비겼습니다\n");
                        }
            if(user==0){
                         if(com==0)
                               printf("비겼습니다\n");
                         else if(com==1)
                               printf("컴퓨터가 승리하였습니다\n");
                         else
                               printf("사용자가 승리하였습니다\n");
                        }
            }
}
*/
