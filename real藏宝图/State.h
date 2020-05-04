#ifndef STATE_H
#define STATE_H
class Controller;
class State {
public:
	virtual void printState()=0;
	virtual void handleCandleRemoved(Controller* c);
	virtual void handleKeyTurned(Controller* c);
	virtual void handleSafeClosed(Controller* c);
protected:
	void changeStateTo(Controller*, State*);
};

#endif // !STATE_H




