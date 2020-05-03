#include "Wait.h"

Wait* Wait::Instance()
{
	if (_instance == 0)
		_instance = new Wait;
	return _instance;
}

Wait::Wait()
{
	_instance = 0;
}
