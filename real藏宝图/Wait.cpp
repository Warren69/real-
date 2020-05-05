#include"Wait.h"
#include"Controller.h"
#include"Lock.h"

Wait* Wait::_instancew = 0;

void Wait::handleSafeClosed()
{
	std::cout << "错误❌\n";
}

Wait* Wait::Instancew()
{
	if (_instancew == 0)
		_instancew = new Wait;
	return _instancew;
}

void Wait::revealLock()
{
	std::cout << "露出锁头\n";
}

void Wait::handleCandleRemoved(Controller* c)
{
	std::cout << "蜡烛移开" << std::endl;
	if ( c->getDoorState())//门是关的
	{
		revealLock();
		c->changeStateTo(Lock::Instancel());
		return;
	}
	else {				//门是开的
		std::cout << "没有反应\n";
	}
	
	
}

void Wait::printState()
{
	std::cout << "现在状态为：Wait State" << std::endl;
}

 void Wait::destroyWait()
{
	delete _instancew;
	_instancew = nullptr;
}

 Wait::Wait()
 {
	 std::cout << "Wait" << std::endl;
 }
