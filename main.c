// https://kuina.ch/l6prog/basic13
#include <stdio.h>
#include <stdlib.h>

#include "function.h"


int main(void){


// 自分自身
struct param you =
{
    "Taro",
    100,
    100,
    100
};
// 敵
struct param enemy =
{
    "Hidora",
    1000,
    100,
    50
};

    
    printf("%s appears!\n", enemy.name);
    
    for( ; ; ){
        int command;
        printf("%s: 体力:%d, 攻撃力:%d, 防御力:%d\n", you.name, you.life, you.attack, you.defense);
        printf("%s: 体力:%d, 攻撃力:%d, 防御力:%d\n", enemy.name, enemy.life, enemy.attack, enemy.defense);
        printf("(0) 攻撃\n(1) 力だめ\n(2) 回復\n");
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