#include <iostream>
#include 'pen_h'

std::string Pen::drawLine(){
 return getName().append(" draws a line.");
}
 std::string Pen::drawCircle(){
return getName().append(" draws a circle.");
}