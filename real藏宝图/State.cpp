#include "State.h"

void State::handleCandleRemoved()
{
}

void State::handleKeyTurned()
{
}

void State::handleSafeClosed()
{
}

void State::changeStateTo(Controller* c, State* s)
{
	c->changeStateTo(s);
}
