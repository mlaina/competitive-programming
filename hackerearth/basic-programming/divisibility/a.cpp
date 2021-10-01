#include <iostream>
using namespace std;


int main() {
    int n = 0;
    cin >> n;
    int data[100000];

    for (int i = 0; i < n; i++) {
        cin>>data[i];
    }

    if (data[n-1]%10==0) {
        cout<<"Yes";
    }else{
        cout<<"No";
    }

    return 0;
}
