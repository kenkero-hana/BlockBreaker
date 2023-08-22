#ifndef ARRAY_H
#define ARRAY_H

struct param
{
    char name[8];
    int life;
    int attack;
    int defense;
};
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

void act(struct param* actor, struct param* target, int command);

#endif