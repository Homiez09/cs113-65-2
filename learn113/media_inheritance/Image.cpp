#include "Image.h"
#include "Media.h"
#include <sstream>
using namespace std;

Image::Image(string title, int sizeInBytes, int width, int height, char patternX, char patternY) : Media(title, sizeInBytes), 
      width(width), 
      height(height),
      patternX(patternX),
      patternY(patternY) {}

int Image::getWidth() {
  return width;
}
    
int Image::getHeight() {
  return height;
}
    
string Image::info() {
  stringstream ss;
  double size = getSizeInGB();
  string sizeUnit = "GB";
  if (size < 1) {
    size = getSizeInMB();
    sizeUnit = "MB";
  } 
  if (size < 1) {
    size = getSizeInKB();
    sizeUnit = "KB";
  }
  ss << getTitle() << " (" << size << sizeUnit << ")";
  ss << "IMAGE Shape: " << width << "x" << height;
  return ss.str();
}
    
string Image::toScreen() {
  stringstream ss;
  for (int i = 0; i < height; ++i) {
    for (int j = 0; j < width; ++j) {
      if ((i + j) % 2)
        ss << patternX;
      else
        ss << patternY;
    }
    if (i < height - 1)
      ss << endl;
  }
  return ss.str();
}