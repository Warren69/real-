// real藏宝图.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include"Controller.h"
enum doorState { doorOpen, doorClosed };
enum candleState{candleOut,candleIn};
int main()
{
    Controller* c = Controller::Instance();
    c->setDoorState(doorOpen);
    c->handleCandleRemoved();
    c->printState();
   
    c->setDoorState(doorClosed);
    c->handleCandleRemoved();
    c->printState();

    c->setCandleState(candleIn);
    c->handleKeyTurned();
    c->printState();
   
    c->handleSafeClosed();
    c->printState();
  
    c->destroyController();
}
