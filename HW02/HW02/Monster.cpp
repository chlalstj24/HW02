#include "Monster.h"
#include "Player.h"

Monster::Monster(string name) {
    this->name = name;
    this->HP = 10;
    this->power = 30;
    this->defence = 10;
    this->speed = 10;
}

void Monster::attack(Player* player) {
    int damage = this->power - player->getDefence();
    if (damage <= 0) damage = 1;

    cout << "* " << name << "의 공격! " << player->getNickname() << "에게 " << damage << "의 데미지를 입혔다!" << endl;

    player->setHP(player->getHP() - damage);

    if (player->getHP() > 0) {
        cout << "* " << player->getNickname() << "의 남은 체력: " << player->getHP() << endl;
    }
    else {
        cout << "* " << player->getNickname() << "이(가) 쓰러졌습니다..." << endl;
    }
}