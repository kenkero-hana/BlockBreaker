#include <stdio.h>
#include <stdlib.h>

#include "function.h"
// ユーザー
void act(struct param* actor, struct param* target, int command){
    int point;
    switch (command)
    {
    case 0:// 体力
        point = actor->attack - target->defense;
        target->life -= point;
        printf("%s attacks! %s takes %d damage points!\n", actor->name, target->name, point);
        break;
    case 1: //気合いだめ
        point = 20;
        actor->attack += point;
        printf("%s casts Boost! %s's Attack increases by %d!\n", actor->name, actor->name, point);
        break;
    case 2: // ガード
        point = 50;
        actor->life += point;
        printf("%s casta Heal! %s's Life increases by %d!\n", actor->name, actor->name, point);
        break;
    default:
        break;
    }
}