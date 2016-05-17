#include <iostream>
#include'pen'
#include 'fountainpen.h'
#include 'rollerballpen'

int main(){
	FountainPen fp;
		WriteWithPen(fp);
	RollerBallPen rbp("A Pen that Uses a Roller Ball");
		WriteWithPen(rbp);
	Pen pen;
		WriteWithPen(pen);
}