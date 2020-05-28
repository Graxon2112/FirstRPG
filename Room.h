#include <vector>
#include "Item.h"
#include "GameCharacter.h"
#ifndef ROOM_H
#define ROOM_H

class room
{
    public:
	    int pos;
	    bool isExit;
	    vector<item> items;
	    vector<GameCharacter> enemies;
	    Room(int, bool, vector<item>, vector<GameCharactor>);
	    void clearLoot();
	    void clearEnemies();

};

#endif
