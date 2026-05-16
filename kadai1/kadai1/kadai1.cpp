
#include <iostream>
# include<string>
using namespace std;

struct Character
{
	char const name;
	int hp;
	int attack;
	int defense;
};

void Data(Character character) {
	
	printf("名前:%c\n", character.name);
	printf("HP:%d\n", character.hp);
	printf("攻撃力:%d\n", character.attack);
	printf("防御力:%d\n", character.defense);
	printf("\n");

}

int main()
{
	Character chara1 = { 'name',100,20,30 };

	Data(chara1);

	Character chara2 = { 'enem',20,3,400 };

	Data(chara2);

}
