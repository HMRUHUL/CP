#include <iostream>
using namespace std;

arrpush() {
    int arr[] = {10, 12, 13, 14, 15};
    int index = 2, value = 20;
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    arr[index] = value;
    for (int i = 0; i <= n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main(){
    //arrpush();
    int arr[] = {10, 12, 13, 13, 14, 14, 15};
    set<int>se;
    int j = 0;
    for(int i=0; i <sizeof(arr)/sizeof(arr[0]);){
        if(se.find(arr[i]) != se.end()){
            i++;
        }
        else {
            arr[j] = arr[i];
            j++, i++;
        }
        se.insert(arr[i-1]);
    }
    for(auto i:se) {
        cout<<i<<" ";
     
    }
    cout<<endl;
    for(int i = 0; i<se.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


}
