#include "Magician.h"
#include "Monster.h"

Magician::Magician(string nickname) : Player(nickname) {
    job_name = "마법사";
    HP = 80;
    cout << "* 마법사로 전직하였습니다." << endl;
}

void Magician::attack() {
    cout << "* 마법을 사용합니다!" << endl;
}

void Magician::attack(Monster* monster) {
    int damage = this->power - monster->getDefence();
    if (damage <= 0) damage = 1;

    cout << "* " << nickname << "의 파이어 볼트! " << monster->getName() << "에게 " << damage << "의 피해를 입혔다!" << endl;
    monster->setHP(monster->getHP() - damage);

    if (monster->getHP() > 0) {
        cout << "* " << monster->getName() << "의 남은 체력: " << monster->getHP() << endl;
    }
    else {
        cout << "* " << monster->getName() << "을(를) 처치했습니다! 승리!" << endl;
    }
}