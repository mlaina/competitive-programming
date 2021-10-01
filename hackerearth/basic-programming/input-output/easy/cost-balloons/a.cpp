#include <iostream>
using namespace std;

int main() {
    int n, p;
    int cpurple, cgreen;
    int max;

    cin >> n;
    for (int i=0; i<n; i++){
        int np1 = 0, np2 = 0;
        cin >> cpurple;
        cin >> cgreen;
        cin >> p;
        for (int j=0; j<p; j++){
            int p1, p2;
            cin >> p1;
            if(p1) np1++;
            cin >> p2;
            if(p2) np2++;
        }

        if(np1>np2){
            if(cpurple>cgreen){
                max=cpurple*np2+cgreen*np1;
            }else{
                max=cgreen*np2+cpurple*np1;
            }
        }else{
            if(cpurple>cgreen){
                max=cpurple*np1+cgreen*np2;
            }else{
                max=cgreen*np1+cpurple*np2;
            }
        }
        cout<<max<<endl;
    }

    return 0;
}
