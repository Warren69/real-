#ifndef WAIT_H
#define WAIT_H
#include "State.h"
#include<iostream>
class Wait:public State
{
public:
		
	virtual void handleSafeClosed(Controller* c) {};			
	virtual bool handleKeyTurned(Controller* c) { return 1; };	
	virtual void handleCandleRemoved(Controller* c);

	virtual void printState();
	
	virtual void handleSafeClosed();
	static Wait* Instancew() ;
	void revealLock();
	
	static void destroyWait();
	
protected:
	Wait() ;
private:
	static Wait* _instancew;

};


#endif // !WAIT_H



