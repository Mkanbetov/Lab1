#include <iostream>
using namespace std;

int sum(int arr[], int size) {
    int s = 0;
    for(int i = 0; i < size; i++) {
        s += arr[i];
    }
    return s;
}

int main() {
    cout << "Hello World" << endl;

    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Sum: " << sum(arr, 5) << endl;

    return 0;
}