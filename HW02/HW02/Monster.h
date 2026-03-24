#pragma once
#include <string>
#include <iostream>
using namespace std;

class Player;

class Monster {
public:
    Monster(string name);
    void attack(Player* player);

    string getName() { return name; }
    int getHP() { return HP; }
    int getPower() { return power; }
    int getDefence() { return defence; }
    int getSpeed() { return speed; }

    void setName(string n) { name = n; }
    void setHP(int h) { HP = h; }
    void setPower(int p) { power = p; }
    void setDefence(int d) { defence = d; }
    void setSpeed(int s) { speed = s; }

protected:
    string name;
    int HP;
    int power;
    int defence;
    int speed;
};