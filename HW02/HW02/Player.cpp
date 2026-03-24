#include "Player.h"

Player::Player(string nickname) {
    this->nickname = nickname;
    this->job_name = "초보자";
    this->level = 1;
    this->HP = 50;
    this->MP = 50;
    this->power = 20;
    this->defence = 5;
    this->accuracy = 10;
    this->speed = 10;
}

void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* 현재 능력치" << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "직업: " << job_name << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}