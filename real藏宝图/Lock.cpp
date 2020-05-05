#include"Lock.h"
#include"Controller.h"
#include"Open.h"
Lock* Lock::_instancel = 0;

bool Lock::handleKeyTurned(Controller *c )
{
	std::cout << "旋转钥匙\n";
	if (c->getCandleState())//candle in
	{
		std::cout << "打开保险箱" << std::endl;
		c->changeStateTo(Open::Instanceo());
		return 1;
	}
	else {
		std::cout << "放出杀人兔子" << std::endl;
		std::cout << "摧毁Controller，退出" << std::endl;
		Controller::destroyController();

		return false;
	}
}

void Lock::printState()
{
	std::cout << "现在状态为：Lock State" << std::endl;
}

Lock* Lock::Instancel()
{
	if (_instancel == 0)
	{
		_instancel = new Lock;
	}
	return _instancel;
}

 void Lock::destroy()
{
	delete _instancel;
	_instancel = nullptr;
}
