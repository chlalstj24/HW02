#include <iostream>
#include "Player.h"
#include "Monster.h"
#include "Warrior.h"
#include "Archer.h"
#include "Magician.h"
#include "Thief.h"

using namespace std;

int main() {
    string jobs[] = { "전사", "마법사", "도적", "궁수" };
    int job_choice = 0;
    string nickname;

    Player* player = nullptr;

    cout << "* 닉네임을 입력해주세요: ";
    cin >> nickname;

    cout << "\n<전직 시스템>" << endl;
    cout << nickname << "님, 환영합니다!" << endl;
    cout << "* 원하시는 직업을 선택해주세요." << endl;

    for (int i = 0; i < 4; i++) {
        cout << (i + 1) << ". " << jobs[i] << endl;
    }

    cout << "선택: ";
    cin >> job_choice;

    switch (job_choice) {
    case 1:
        player = new Warrior(nickname);
        break;
    case 2:
        player = new Magician(nickname);
        break;
    case 3:
        player = new Thief(nickname);
        break;
    case 4:
        player = new Archer(nickname);
        break;
    default:
        cout << "잘못된 입력입니다." << endl;
        return 1;
    }

    player->printPlayerStatus();
    player->attack();

    cout << "\n=====================================" << endl;
    cout << "앗! 야생의 오크가 나타났다!" << endl;
    Monster* orc = new Monster("오크");

    orc->attack(player);
    cout << "------------------------------------" << endl;
    player->attack(orc);

    if (player != nullptr) {
        delete player;
        player = nullptr;
    }
    if (orc != nullptr) {
        delete orc;
        orc = nullptr;
    }

    return 0;
}