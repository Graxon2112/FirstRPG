
#include <string>
using namespace std;

class GameCharacter
{
    Public:
	string name;
	int maxhealth, currentHealth, attack, defence;
	GameCharacter(string, int, int, int);
	int takedamage(int);
	bool checkisdead();

};
