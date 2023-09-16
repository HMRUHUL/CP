#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 12, 13, 14, 15};
    int index = 2, value = 20;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    n++;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
