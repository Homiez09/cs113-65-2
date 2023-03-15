#include <iostream>
#include <string>

using namespace std;

class MusicPlaylist {
    private:
        string tracks[20];
        int currentTrack;
        int totalTracks;
    public:
        MusicPlaylist(){
            this->currentTrack = 0;
            this->totalTracks = 0;
        }
        void add(string track) {
            this->tracks[totalTracks] = track;
            this->totalTracks++;
        }
        void setCurrentTrack(int track) {
            this->currentTrack = track-1;
        }
        string play() {
            return this->tracks[currentTrack];
        }
};

int main(void) {
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(1);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}