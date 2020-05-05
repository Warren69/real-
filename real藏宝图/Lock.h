#ifndef LOCK_H
#define LOCK_H
#include "State.h"
#include<iostream>
class Lock:public State {
public:
	virtual void handleCandleRemoved(Controller* c) {};
	virtual void handleSafeClosed(Controller* c) {};
	virtual bool handleKeyTurned(Controller* c);


	virtual void printState();
	static Lock* Instancel() ;
	
	static void destroy();
private:
	static Lock* _instancel;
};


#endif // !LOCK_H

