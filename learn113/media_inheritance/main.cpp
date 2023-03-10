#include <iostream>
#include "Media.h"
#include "Image.h"
#include "Video.h"
using namespace std;

int main() {
  Media *media = new Media("media", 811200000);
  cout << media->getTitle() << endl;
  cout << media->getSizeInBytes() << endl;
  cout << media->getSizeInKB() << endl;
  cout << media->getSizeInMB() << endl;
  cout << media->getSizeInGB() << endl;
  cout << "--------------------" << endl;

  Image *image = new Image("hole.jpg", 4304, 11, 8, '{', '}');
  cout << image->getTitle() << endl;
  cout << image->getWidth() << endl;
  cout << image->getHeight() << endl;
  cout << image->getSizeInBytes() << endl;
  cout << image->getSizeInKB() << endl;
  cout << image->getSizeInMB() << endl;
  cout << image->getSizeInGB() << endl;
  cout << image->info() << endl;
  cout << image->toScreen() << endl;
  cout << "-----------------------" << endl;

  Video *video = new Video("cat.mp4", 532314442, 8000);
  cout << video->getTitle() << endl;
  cout << video->getDuration() << endl;
  cout << video->durationToString() << endl;
  cout << video->getSizeInBytes() << endl;
  cout << video->getSizeInGB() << endl;
  cout << video->info() << endl;
  cout << video->toScreen() << endl;
}