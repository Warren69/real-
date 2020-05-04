#include "Controller.h"
#include "Wait.h"
#include"Lock.h"
#include"Open.h"
Controller* Controller ::_instance = 0;
Controller* Controller::Instance()
{
	if (_instance == 0)
		_instance = new Controller;

	std::cout << "Controller����" << std::endl;
	return _instance;
}

Controller::Controller()
{
	{
		std::cout << "��ʼ��Ϊ" << std::endl;
		m_state = Wait::Instancew();//��ʼ��
	}
}

void Controller::printState()
{
	Instance()->m_state->printState();
}

void Controller::destroyController()
{
	delete _instance;
	_instance = nullptr;
	Wait::destroyWait();
	Lock::destroy();
	Open::destroy();
	


}
