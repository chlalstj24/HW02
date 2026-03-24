#include "Archer.h"
#include "Monster.h"

Archer::Archer(string nickname) : Player(nickname) {
    job_name = "궁수";
    accuracy = 80;
    cout << "* 궁수로 전직하였습니다." << endl;
}

void Archer::attack() {
    cout << "* 활시위를 당겨 화살을 쏩니다!" << endl;
}

void Archer::attack(Monster* monster) {
    int total_damage = this->power - monster->getDefence();
    if (total_damage <= 0) total_damage = 1;

    int per_hit_damage = total_damage / 3;
    if (per_hit_damage <= 0) per_hit_damage = 1;

    for (int i = 0; i < 3; i++) {
        cout << "* " << nickname << "의 속사! " << monster->getName() << "에게 " << per_hit_damage << "의 피해를 입혔다!" << endl;
        monster->setHP(monster->getHP() - per_hit_damage);
    }

    if (monster->getHP() > 0) {
        cout << "* " << monster->getName() << "의 남은 체력: " << monster->getHP() << endl;
    }
    else {
        cout << "* " << monster->getName() << "을(를) 처치했습니다! 승리!" << endl;
    }
}