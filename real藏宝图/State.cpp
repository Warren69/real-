#include"State.h"
#include"Controller.h"


void State::changeStateTo(Controller* c, State* s)
{
	c->changeStateTo(s);
}
