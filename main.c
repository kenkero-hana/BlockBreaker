// https://kuina.ch/l6prog/basic13
#include <stdio.h>
#include <stdlib.h>

struct param
{
    char name[8];
    int life;
    int attack;
    int defense;
};

int main(void){
    struct param you =
    {
        "Taro",
        100,
        100,
        100
    };
    struct param enemy =
    {
        "Hidora",
        1000,
        100,
        50
    };
    
    printf("%s appears!\n", enemy.name);
    
}