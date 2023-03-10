#include "Media.h"
using namespace std;

// :: Scope resolution operator
Media::Media(string title, int sizeInBytes)
    : title(title), sizeInBytes(sizeInBytes) {}

string Media::getTitle() { // getTitle() is a method in Media class
  return title; 
}

int Media::getSizeInBytes() {
  return sizeInBytes;
}

double Media::getSizeInKB() {
  return getSizeInBytes() / 1024.0;
}

double Media::getSizeInMB() {
  return getSizeInKB() / 1024.0;
}

double Media::getSizeInGB() {
  return getSizeInMB() / 1024.0;
}