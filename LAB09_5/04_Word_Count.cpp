#include <iostream>

using namespace std;

typedef struct Word_ {
    string word;
    int count;
} Word;

int main() {
    string input;
    int i, last_word = 0, find = 0;
    Word data[20];

    while (true) {
        cin >> input;
        find++;
        if (input == "exit") {
            break;
        }
        for (int j = 0; j <= last_word; j++) {
            if (data[j].word == input) {
                data[j].count++;
            } else {
                data[last_word].word = input;
                last_word++;
            }
        }
    }

    cout << "Output:" << endl;

    for (i = 0; i < find; i++) {
        cout << data[i].word << " = " << data[i].count << endl;
    }

    return 0;
}