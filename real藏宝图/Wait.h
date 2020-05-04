#ifndef WAIT_H
#define WAIT_H
#include "State.h"
#include<iostream>
class Wait:public State
{
public:
	virtual void printState() {
		std::cout << "Wait State" <<std:: endl;
	}
	static Wait* Instancew() {
		if (_instancew == 0)
			_instancew = new Wait;
		
		std::cout << "Waitµ¥Àý" << std::endl;
		return _instancew;
	};
	void revealLock()
	{
		std::cout << "reveals lock\n";
	}
	virtual void handleCandleRemoved(Controller* c);
	static void destroyWait();
	
protected:
	Wait() {
		std::cout << "Wait¹¹Ôì" << std::endl;
	};
private:
	static Wait* _instancew;

};


#endif // !WAIT_H



