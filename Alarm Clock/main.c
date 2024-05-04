#include <stdio.h>
#include <unistd.h>
#include <signal.h>
#include <stdlib.h>
void alarm_h(){
    system("aplay ./Audio/mixkit-arcade-retro-game-over-213.wav");
}

void EXIT(int flag){
    flag?printf("Wrong Input\n"):(printf("SUCCESS END\n"),exit(EXIT_SUCCESS));;
}

int main(){
    signal(SIGALRM, alarm_h);
    
    char f='y';
    
    while(f=='y'){
        int sec=-1;

        
    while (sec<0){
         printf("SECONDS :");
         scanf("%d",&sec);
         sec<0?EXIT(1):NULL;
    }
        alarm(sec);

        pause();

        printf("y-yes\nn-no :");

        scanf(" %c",&f);
        }
        f=='n'?EXIT(0):EXIT(1);

}