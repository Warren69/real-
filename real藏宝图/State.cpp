#include"State.h"
#include"Controller.h"
void State::handleCandleRemoved(Controller* c)
{
}

void State::handleKeyTurned(Controller* c)
{
}

void State::handleSafeClosed(Controller* c)
{
}

void State::changeStateTo(Controller* c, State* s)
{
	c->changeStateTo(s);
}
