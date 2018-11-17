#include "tamagochi.h"


tamagochi::tamagochi (QObject *parent) : QObject(parent)
{

}
int tamagochi::getHealth()
{
    return this->health;
}

int tamagochi::getHappiness()
{
    return this->happiness;
}

int tamagochi::getFood()
{
    return this->food;
}

void tamagochi::feed()
{
    food += 10;
}

void tamagochi::play()
{
    happiness += 10;
}

void tamagochi::wash()
{
    health += 10;
}

bool tamagochi::isAlive()
{
    if (health < 0){
        return false;
    }
    if (happiness < 0){
        return false;
    }
    if (food < 0){
        return false;
    }
}

void tamagochi::decrieseHealth()
    {
    health -= 1;
    }

void tamagochi::decrieseHappinneess()
    {
    happiness -= 1;
    }

void tamagochi::decrieseFood()
{
     food -= 1;
}

