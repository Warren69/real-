#include "Open.h"
#include"Controller.h"
#include"Wait.h"
Open* Open::_instanceo = 0;
bool Open::handleKeyTurned(Controller* c)
{
	return true;
}
void Open::printState()
{
	std::cout << "ÏÖÔÚ×´Ì¬Îª£ºOpen State" << std::endl;
}
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
