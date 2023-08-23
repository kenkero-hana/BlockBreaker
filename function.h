#ifndef ARRAY_H
#define ARRAY_H

struct param
{
    char name[8];
    int life;
    int attack;
    int defense;
};


void act(struct param* actor, struct param* target, int command);

#endif