#include <stdio.h>

#include "function.h"
// 敵
void actenemy(struct param* actor, struct param* target, int enemycommand){
    int enepoint;
    switch (enemycommand)
    {
    case 3:// 体力
        enepoint = actor->attack - target->defense;
        target->life -= enepoint;
        printf("%s attacks! %s takes %d damage points!\n", actor->name, target->name, enepoint);
        break;
    case 4://気合いだめ
        enepoint = 20;
        actor->attack += enepoint;
        printf("%s casts Boost! %s's Attack increases by %d!\n", actor->name, actor->name, enepoint);
        break;
    case 5:// ガード
        enepoint = 50;
        actor->life += enepoint;
        printf("%s casta Heal! %s's Life increases by %d!\n", actor->name, actor->name, enepoint);
        break;
    default:
        break;
    }
}