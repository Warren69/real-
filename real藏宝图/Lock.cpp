#include"Lock.h"
#include"Controller.h"
#include"Open.h"
Lock* Lock::_instancel = 0;

bool Lock::handleKeyTurned(Controller *c )
{
	std::cout << "��תԿ��\n";
	if (c->getCandleState())//candle in
	{
		std::cout << "�򿪱�����" << std::endl;
		c->changeStateTo(Open::Instanceo());
		return 1;
	}
	else {
		std::cout << "�ų�ɱ������" << std::endl;
		std::cout << "�ݻ�Controller���˳�" << std::endl;
		Controller::destroyController();

		return false;
	}
}

 void Lock::destroy()
{
	delete _instancel;
	_instancel = nullptr;
}
