#pragma once
#include "State.h"
#include<iostream>
class Wait:public State{
public:
	static Wait* Instance();
	void revealLock() {
		std::cout << "reveals lock/n";
	}
	void handleCandleRemoved(int doorState) {
		if (!doorState) {
			revealLock();
			changeStateTo(Lock) {

			}
		}
protected:
	Wait();
private:
	static Wait* _instance;
};


