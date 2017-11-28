#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "Projectile.h"
#include "Player.h"
#include "Monster.h"
bool isCollide(Projectile p, Monster m)
{
    if(p.getRect().getGlobalBounds().intersects(m.getRect().getGlobalBounds()))
    {
        return true;
    }
    return false;
}
bool isMouseOn(float x, float y, float buttonSize)
{
    
    
}    
#endif // FUNCTIONS_H
