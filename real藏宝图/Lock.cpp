#include"Lock.h"
#include"Controller.h"
#include"Open.h"
Lock* Lock::_instancel = 0;

void Lock::handleKeyTurned(Controller *c )
{
	if (c->getCandleState())//candle in
	{
		//open safe;
		c->changeStateTo(Open::Instanceo());
	}
	else {
		//release killer rabbit;
		//changeStateTo();
	}
}

 void Lock::destroy()
{
	delete _instancel;
	_instancel = nullptr;
}
