#ifndef ROLLERBALLPEN_H
#define ROLLERBALLPEN_H
#include 'pen'
class RollerBallPen : public Pen{

 public:

 RollerBallPen(std::string pen_name)
 : Pen(pen_name) {}
 RollerBallPen() : Pen(std::string("RollerBallPen")){}
 virtual std::string drawLine() {
 return getName().append(" draws a line.");
 };
#endif