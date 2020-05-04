#ifndef OPEN_H
#define OPEN_H
#include"State.h"
#include<iostream>
class Open:public State {
public:
	virtual void printState() {
		std::cout << "Open State" << std::endl;
	}
	//Open();
	static Open* Instanceo() {
		if (_instanceo == 0)
		{
			_instanceo = new Open;
		}
		return _instanceo;
	};
	virtual void handleSafeClosed(Controller* c);

	static void destroy();
private:
	static Open* _instanceo;
};


#endif // !OPEN_H

