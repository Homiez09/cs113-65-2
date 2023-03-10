#ifndef IMAGE_H
#define IMAGE_H

#include "Media.h"
using namespace std;

class Image : public Media {
  private:
    int width;
    int height;
    char patternX;
    char patternY;

  public:
    Image(string, int, int, int, char, char);
    int getWidth();
    int getHeight();
    string info();
    string toScreen();
};

#endif