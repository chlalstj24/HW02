#include "Thief.h"
#include "Monster.h"

Thief::Thief(string nickname) : Player(nickname) {
    job_name = "도적";
    HP = 80;
    cout << "* 도적으로 전직하였습니다." << endl;
}

void Thief::attack() {
    cout << "* 단검으로 난도질합니다!" << endl;
}

void Thief::attack(Monster* monster) {
    int total_damage = this->power - monster->getDefence();
    if (total_damage <= 0) total_damage = 1;

    int per_hit_damage = total_damage / 5;
    if (per_hit_damage <= 0) per_hit_damage = 1;

    for (int i = 0; i < 5; i++) {
        cout << "* " << nickname << "의 연속 베기! " << monster->getName() << "에게 " << per_hit_damage << "의 피해를 입혔다!" << endl;
        monster->setHP(monster->getHP() - per_hit_damage);
    }

    if (monster->getHP() > 0) {
        cout << "* " << monster->getName() << "의 남은 체력: " << monster->getHP() << endl;
    }
    else {
        cout << "* " << monster->getName() << "을(를) 처치했습니다! 승리!" << endl;
    }
}