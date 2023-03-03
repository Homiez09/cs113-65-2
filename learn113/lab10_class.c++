#include <iostream> // input/output stream
#include <sstream> // string stream

using namespace std;

// define class
class Music {
    private: // data hiding ( -> Encapsulation)
    // attributes, data members
        string title;
        int views;
    public: 
    // methods, member functions
        void listen() {
            views++;
        }

        void listenManyTimes(int views) {
            this->views += views;
        }

        string toString() {
            stringstream ss;
            ss << title << " (" << views << " views)";
            return ss.str();
        }

};

int main(void) {
    // declare object/instance
    Music music;
    Music rockMusic;
    
    cout << music.toString() << endl;
    cout << rockMusic.toString() << endl;

    return 0;
}
