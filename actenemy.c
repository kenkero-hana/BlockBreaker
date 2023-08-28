#include <stdio.h>

#include "function.h"
// 敵
void actenemy(struct param* target, struct param* actor, int enemycommand){
    int enepoint;
    switch (enemycommand)
    {
    case 3:// 体力
        enepoint = target->attack - actor->defense;
        actor->life -= enepoint;
        printf("%s attacks! %s takes %d damage points!\n", target->name, actor->name, enepoint);
        break;
    case 4://気合いだめ
        enepoint = 20;
        target->attack += enepoint;
        printf("%s casts Boost! %s's Attack increases by %d!\n", target->name, actor->name, enepoint);
        break;
    case 5:// ガード
        enepoint = 50;
        target->life += enepoint;
        printf("%s casta Heal! %s's Life increases by %d!\n", target->name, target->name, enepoint);
        break;
    default:
        break;
    }
}