#include <iostream>

using namespace std;

typedef struct Word_ {
    string word;
    int count;
} Word;

int main() {
    Word data[20];
    data[0].word = "This0";
    data[0].count++;
    data[1].word = "This1";
    data[1].count++;
    data[2].word = "This2";
    data[2].count++;
    for (int i = 0; i < 3; i++) {
        cout << data[i].word << " = " << data[i].count << endl;
    }
}