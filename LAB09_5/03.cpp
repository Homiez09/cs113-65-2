#include <iostream>

using namespace std;

int main(void) {
    int n, a;
    cin >> n;
    int data[n]; 
    for(int i = 0; i < n; i++){
        cin >> data[i];
    }

    //sort data
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j){
            if (data[i] > data[j]) {
                a =  data[i];
                data[i] = data[j];
                data[j] = a;
            
            }
        }
    }

    // find max
    int max = data[n-1];   
    
    for (int i = 1, j = 0; i <= max; i++){
        if ((data[j] != i)) {
            if (i % 2 != 0)
                cout << i << " ";
        } else {
            j++;
        }
    }
    cout << endl;
    for (int i = 1, j = 0; i <= max; i++){
        if ((data[j] != i)) {
            if (i % 2 == 0)
                cout << i << " ";
        } else {
            j++;
        }
    }
} 