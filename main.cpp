#include <iostream>
using namespace std;


int main() {
    int n = 0;
    cin >> n;
    int data[100000];

    for (int i = 0; i < n; i++) {
        cin>>data[i];
    }

    int max = 0;
    for(int index = 0; index < n; index++){
        int sum = 0;
        int groups = 1;
        for(int j = index; j + groups < n; j++){
            sum += data[j];
            groups = groups+1;
        }
        if(sum > max){
            max=sum;
        }
    }

    cout<<max;

    return 0;
}
