#pragma once
#include "Controller.h"

class State {
public:
	virtual void handleCandleRemoved() ;
	virtual void handleKeyTurned() ;
	virtual void handleSafeClosed() ;
protected:
	void changeStateTo(Controller *, State *);
};
