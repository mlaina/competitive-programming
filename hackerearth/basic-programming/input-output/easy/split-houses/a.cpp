#include <iostream>
#include <string>
using namespace std;


int main() {
    int n;
    string p;
    cin >> n;
    cin >> p;
    int i = 0;
    while (i < n) {
        if (p[i] == p[i + 1] && p[i] == 'H') {
            cout << "NO" << endl;
            break;
        }
        if (p[i] == '.') {
            p[i] = 'B';
        }
        i++;
    }

    if (i == n) {
        cout << "YES" << endl;
        cout << p << endl;
    }

    return 0;
}
