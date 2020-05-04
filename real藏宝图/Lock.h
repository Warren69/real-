#ifndef LOCK_H
#define LOCK_H
#include "State.h"
#include<iostream>
class Lock:public State {
public:
	virtual void printState() {
		std::cout << "ÏÖÔÚ×´Ì¬Îª£ºLock State" << std::endl;
	}
	static Lock* Instancel() {
		if (_instancel == 0)
		{
			_instancel = new Lock;
		}
		return _instancel;
	};
	virtual bool handleKeyTurned(Controller *c) ;
	static void destroy();
private:
	static Lock* _instancel;
};


#endif // !LOCK_H

