#pragma once
#include"State.h"
#include<iostream>
class Open:public State {
public:
	Open();
	static Open* Instance();
	void handleKeyTurned() {
		if (candle in)
		{
			open safe;
			changeStateTo()
		}
		else {
			release killer rabbit;
			changeStateTo();
		}
	}
private:
	static Open* _instance;
};