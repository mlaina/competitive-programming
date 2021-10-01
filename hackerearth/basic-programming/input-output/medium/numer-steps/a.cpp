
#include <iostream>
using namespace std;


int main() {
    int n;
    int a[5000];
    int b[5000];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int min = 5000;
    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }

    int steps = 0;
    int i = 0;
    while (min >= 0 && i!=n) {
        i=0;
        while (i < n) {
            while (a[i] > min) {
                a[i] = a[i] - b[i];
                steps++;
            }
            if (a[i] < min) {
                min = a[i];
                break;
            }
            i++;
        }
    }

    if(min < 0) {
        cout << -1 << endl;
        return 0;
    }

    int j=0;
    while(j<n){
        if (a[j] != min) {
            cout << -1 << endl;
            return 0;
        }
        j++;
    }

    cout << steps << endl;
    return 0;
}
