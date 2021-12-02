#include <iostream>

class Shashk
{
private:
	char arr[8][8];
	int firstX, firstY;
	int secondX, secondY;
	char chek = '#';
	char cond;
	int count$ = 12, count_ = 12;
public:
	void nextStep();
	void startGame();
	bool wingame1();
	//void eatFigure(int,int,int,int);
};
