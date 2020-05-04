#include"Wait.h"
#include"Controller.h"
#include"Lock.h"
Wait* Wait::_instancew = 0;

void Wait::handleCandleRemoved(Controller* c)
{
	std::cout << "蜡烛移开" << std::endl;
	if ( c->getDoorState())//门是关的
	{
		revealLock();
		c->changeStateTo(Lock::Instancel());
		return;
	}
	else {
		//std::cout<<""
	}
	
	
}

 void Wait::destroyWait()
{
	delete _instancew;
	_instancew = nullptr;
}
