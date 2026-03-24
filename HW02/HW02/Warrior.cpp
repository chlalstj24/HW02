#include "Warrior.h"
#include "Monster.h"

Warrior::Warrior(string nickname) : Player(nickname) {
    job_name = "전사";
    HP = 80;
    cout <<"* 전사로 전직하였습니다." << endl;
}

void Warrior::attack() {
    cout << "* 장검을 휘두릅니다!" << endl;
}

void Warrior::attack(Monster* monster) {
    int damage = this->power - monster->getDefence();
    if (damage <= 0) damage = 1;

    cout << "* " << nickname << "의 강력한 베기! " << monster->getName() << "에게 " << damage << "의 피해를 입혔다!" << endl;
    monster->setHP(monster->getHP() - damage);

    if (monster->getHP() > 0) {
        cout << "* " << monster->getName() << "의 남은 체력: " << monster->getHP() << endl;
    }
    else {
        cout << "* " << monster->getName() << "을(를) 처치했습니다! 승리!" << endl;
    }
}