#include "Open.h"
#include"Controller.h"
#include"Wait.h"
Open* Open::_instanceo = 0;
void Open::handleSafeClosed(Controller* c)
{
	std::cout << "safe closed\n";
	c->changeStateTo(Wait::Instancew());
}

void Open::destroy()
{
	delete _instanceo;
	_instanceo = nullptr;
}
