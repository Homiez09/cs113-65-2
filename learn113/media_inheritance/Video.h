#ifndef VIDEO_H
#define VIDEO_H

#include "Media.h"

class Video : public Media {
  private:
    int duration; // second

  public:
    Video(string, int, int);
    int getDuration();
    string durationToString();
    string info();
    string toScreen();
};

#endif