//힌트3단계를 보고 겨우 알수 있었습니다.
// 이것도 정답인지 모르지만 이것 이상은 나오지 않습니다.
//Warrior.h


#pragma once
#include "player.h"

class Warrior : public Player
{
public:
    Warrior(string nickname);
    void attack() override;
};

//Warror.cpp


#include "warrior.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname)
{
    job_name = "전사";
    cout << "* 전사로 전직하였습니다." << endl;
    HP = 80;
}

void Warrior::attack()
{
    cout << "* 장검을 휘두른다" << endl;
}

//Magician.h


#pragma once
#include "player.h"

class Magician : public Player
{
public:
    Magician(string nickname);
    void attack() override;
};

//Magician.cpp


#include "magician.h"
#include <iostream>
using namespace std;

Magician::Magician(string nickname) : Player(nickname)
{
    job_name = "마법사";
    MP = 80;
    cout << "* 마법사로 전직하였습니다." << endl;
}

void Magician::attack()
{
    cout << "* 강력한 마법 화살을 발사합니다!" << endl;
}

//Thief.h


#pragma once
#include "player.h"

class Thief : public Player {
public:
    Thief(string nickname);
    void attack() override;
};

//Thief.cpp


#include "thief.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname) : Player(nickname) {
    job_name = "도적";
    Speed = 80;
    cout << "* 도적으로 전직하였습니다." << endl;
}

void Thief::attack() {
    cout << "* 단검으로 빠르게 찌른다!" << endl;
}

//Archer.h


#pragma once
#include "player.h"

class Archer : public Player {
public:
    Archer(string nickname);
    void attack() override;
};

//Archer.cpp

#include "archer.h"
#include <iostream>
using namespace std;

Archer::Archer(string nickname) : Player(nickname) {
    job_name = "궁수";
    Accuracy = 80;
    cout << "* 궁수로 전직하였습니다." << endl;
}

void Archer::attack() {
    cout << "* 화살을 명중시킨다!" << endl;
}