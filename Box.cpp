#include "Box.h"

void Box::setLength(int l){
  length=l;
}
void Box::setWidth(int w){
  width=w;
}
void Box::setHeight(int h){
  height=h;
}
int Box::getLength(){
 return length;
}
int Box::getWidth(){
  return height;
}
int Box::getHeight(){
  return width;
}

// Implemenet the calcVolume() unction
int Box::calcVolume() {
  return length * width * height;
}
