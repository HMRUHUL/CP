#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        vector<int> b(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        int aa, bb;

        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                aa=i;
                break;
            }
        }
         for (int i = n-1; i >0; i--) {
            if (a[i] != b[i]) {
                bb=i;
                break;
            }
        }

        cout << bb-aa+1 << endl;


    }


}
