#include <iostream>
#include <iomanip>

using namespace std;

void generateArray(int *arr, int arrLength) {
    srand((unsigned)time(NULL));

    for (int i = 0; i < arrLength; i++) {
        arr[i] = 54 * rand() / RAND_MAX - 20;
    }
}

void printArray(int *arr, int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << setw(5) << arr[i];
    }
    cout << endl;
}

void printFilteredArray(int *arr, int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] < 0 && arr[i] % 2 == 0) {
            cout << setw(5) << arr[i];
        }
        else {
            cout << setw(5) << " ";
        }
    }
    cout << endl;
}


int main() {
    
    const int pLength = 20;
    int p[pLength];

    generateArray(p, pLength);
    printArray(p, pLength);
    printFilteredArray(p, pLength);
}
