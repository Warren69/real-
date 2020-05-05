#ifndef OPEN_H
#define OPEN_H
#include"State.h"
#include<iostream>
class Open:public State {
public:
	virtual void handleCandleRemoved(Controller* c) {};
	virtual void handleSafeClosed(Controller* c);
	bool  handleKeyTurned(Controller* c);


	virtual void printState();
	
	//Open();
	static Open* Instanceo() {
		if (_instanceo == 0)
		{
			_instanceo = new Open;
		}
		return _instanceo;
	};
	

	static void destroy();
private:
	static Open* _instanceo;
};


#endif // !OPEN_H

