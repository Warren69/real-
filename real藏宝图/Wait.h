#ifndef WAIT_H
#define WAIT_H
#include "State.h"
#include<iostream>
class Wait:public State
{
public:
	virtual void printState() {
		std::cout << "现在状态为：Wait State" <<std:: endl;
	}
	virtual bool  handleKeyTurned(Controller* c) { return 1; };
	virtual void handleSafeClosed();
	static Wait* Instancew() {
		if (_instancew == 0)
			_instancew = new Wait;
		
		//std::cout << "Wait单例" << std::endl;
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
		std::cout << "Wait" << std::endl;
	};
private:
	static Wait* _instancew;

};


#endif // !WAIT_H



