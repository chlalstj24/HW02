#pragma once
#include <string>
#include <iostream>
using namespace std;

class Monster;

class Player {
public:
    Player(string nickname);
    virtual ~Player() {}

    virtual void attack() = 0;
    virtual void attack(Monster* monster) = 0;
    void printPlayerStatus();

    string getJobName() { return job_name; }
    string getNickname() { return nickname; }
    int getLevel() { return level; }
    int getHP() { return HP; }
    int getMP() { return MP; }
    int getPower() { return power; }
    int getDefence() { return defence; }
    int getAccuracy() { return accuracy; }
    int getSpeed() { return speed; }

    void setNickname(string n) { nickname = n; }
    void setHP(int h) { HP = h; }
    void setMP(int m) { MP = m; }
    void setPower(int p) { power = p; }
    void setDefence(int d) { defence = d; }
    void setAccuracy(int a) { accuracy = a; }
    void setSpeed(int s) { speed = s; }

protected:
    string job_name;
    string nickname;
    int level;
    int HP;
    int MP;
    int power;
    int defence;
    int accuracy;
    int speed;
};