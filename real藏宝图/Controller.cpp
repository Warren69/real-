#include "Controller.h"
#include "Wait.h"
#include"Lock.h"
#include"Open.h"
Controller* Controller ::_instance = 0;
Controller* Controller::Instance()
{
	if (_instance == 0)
		_instance = new Controller;

	std::cout << "Controller单例" << std::endl;
	return _instance;
}

Controller::Controller()
{
	{
		std::cout << "初始化为" << std::endl;
		m_state = Wait::Instancew();//初始化
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
