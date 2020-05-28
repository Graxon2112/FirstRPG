#include "gameCharacter.h"

GameCharacter::Gamecharacter(string n, int h, int a, int d){
    name = n;
    maxhealth = h;
    currentHealth =h;
    attack = a;
    defence = d;

}




int GameCharacter::takedamage(int amount)
{
   int damage = amount-defence;
   if (damage < 0)
   {
	   damage = 0;
   }

}
currentHealth -= damage;
return damage;


bool GameCharacter::checkisdead()
{
     ruturn currentHealth <= 0;
}
