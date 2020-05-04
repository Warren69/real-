#ifndef CONTROLLER_H
#define CONTROLLER_H

#include"State.h"
#include<iostream>

class Controller {
private:
	static Controller* _instance;
	State* m_state;
	friend class State;
	bool doorState;
	bool candleState;
public:
	bool getDoorState() { return doorState; }
	bool getCandleState() { return candleState; }
	void setDoorState(bool a) { doorState = a; }
	void setCandleState(bool a) { candleState = a; }
	static Controller* Instance();
	Controller() ;
	void printState();
	void handleCandleRemoved() {
		m_state->handleCandleRemoved(_instance);
	};
	void handleKeyTurned() {
		m_state->handleKeyTurned(_instance);
	}
	void handleSafeClosed() {
		m_state->handleSafeClosed(_instance);
	}
	void changeStateTo(State* s) {
		m_state = s;
	};
	void destroyController();
};
#endif