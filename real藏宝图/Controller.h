#pragma once
#include "State.h"
#include"Wait.h"

class Controller {
private:
	State *m_state;
	friend class State;
public:
	Controller();
	void handleCandleRemoved() {
		m_state->handleCandleRemoved;
	}
	void handleKeyTurned() {
		m_state->handleKeyTurned;
	}
	void handleSafeClosed() {
		m_state->handleSafeClosed;
	}
	void changeStateTo(State* s);
	
};
