#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 12, 13, 14, 15};
    int index = 2, value = 20;
    int n = sizeof(arr) / sizeof(arr[0]) + 1;

    int* newArr = new int[n];

    for (int i = 0; i < index; i++) {
        newArr[i] = arr[i];
    }

    newArr[index] = value;

    for (int i = index; i < n - 1; i++) {
        newArr[i + 1] = arr[i];
    }
    for (int i = 0; i < n; i++) {
        cout << newArr[i] << " ";
    }
    delete[] newArr;

    cout << endl;
    return 0;
}
