#include "Controller.h"

Controller::Controller()
{
	m_state = Wait::Instance();
}

void Controller::changeStateTo(State* s)
{
	m_state = s;
}
