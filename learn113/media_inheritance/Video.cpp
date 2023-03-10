#include "Video.h"
#include "Media.h"
#include <sstream>
using namespace std;

Video::Video(string title, int sizeInBytes, int duration)
      : Media(title, sizeInBytes), duration(duration) {}

int Video::getDuration() {
  return duration;
}

string Video::durationToString() {
  stringstream ss;
  int hour = duration / 60 / 60;
  int minute = duration / 60 % 60;
  int second = duration % 60;
  ss << hour << "h " << minute << "m " << second << "s";
  return ss.str();
}

string Video::info() {
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
  ss << " " << durationToString();
  return ss.str();
}

string Video::toScreen() {
  stringstream ss;
  ss << "Video " << getTitle() << " is playing ...";
  return ss.str();
}