#include "Box.h"

void Box::setBoxDetails(int l, int w, int h){
  length = l;
  width = w;
  height = h; 
}

int Box::getLength(){
  return length;
}

int Box::getWidth(){
  return width;
}

int Box::getHeight(){
 return height;
}

int Box::calcVolume() {
  int volume = height*width*length;
  return volume;
}
