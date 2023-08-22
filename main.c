// https://kuina.ch/l6prog/basic13
#include <stdio.h>
#include <stdlib.h>

#include "function.h"

int main(void){
    
    printf("%s appears!\n", enemy.name);
    
    for( ; ; ){
        int command;
        printf("%s: Life:%d, attack:%d, Defense:%d\n", you.name, you.life, you.attack, you.defense);
        printf("%s: Life:%d, attack:%d, Defense:%d\n", enemy.name, enemy.life, enemy.attack, enemy.defense);
        printf("(0) Attack\n(1) Boost\n(2) Heal\n");
        printf("Command:");
        scanf("%d", &command);
        act(&you, &enemy, command);
        if(enemy.life <= 0){
            printf("%s is defeated!\n", enemy.name);
            return 0;
        }
        act(&enemy, &you, rand() % 3);
        if(you.life <= 0){
            printf("%s has been killed...\n", you.name);
            return 0;
        }
    }
}