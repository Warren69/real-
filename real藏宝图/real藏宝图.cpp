// real藏宝图.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
#include"Controller.h"
enum doorState { doorOpen, doorClosed };
enum candleState{candleOut,candleIn};
int main()
{ 
    int a;
    Controller* c = Controller::Instance();
    while (true) {
       
        std::cout << std::endl;
        c->printState();
        while (1) {
            std::cout << "移开蜡烛前请选择：" << "0.打开门   " << "1.关上门\n";
            std::cin >> a;
            c->setDoorState(a);
            c->handleCandleRemoved();

            std::cout << std::endl;
            c->printState();
            if (c->getDoorState())
                break;

        }

        std::cout << "转动钥匙前请选择：" << "0.Candle out   " << "1.Candle in\n";
        std::cin >> a;
        c->setCandleState(a);
        if (!c->handleKeyTurned())
        {
            return 0;

        }
        std::cout << std::endl;
        c->printState();



        while (true)
        {
            std::cout << "是否关闭保险箱：" << "0.否   " << "1.是\n";
            std::cin >> a;
            if (a) {
                c->handleSafeClosed();
                break;
            }
        }
    }

    c->destroyController();
}
