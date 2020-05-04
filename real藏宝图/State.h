#ifndef STATE_H
#define STATE_H
class Controller;
class State {
public:
	virtual void printState()=0;
	virtual void handleCandleRemoved(Controller* c);
	virtual bool  handleKeyTurned(Controller* c)=0;
	virtual void handleSafeClosed(Controller* c);
protected:
	void changeStateTo(Controller*, State*);
};

#endif // !STATE_H




