#include <iostream>
using namespace std;

int findMax(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int arr[] = {3,7,2,9,5};
    int size = 5;
    int max = findMax (arr,size);
    cout <<"Max:"<<max<<endl;
    return 0;
}