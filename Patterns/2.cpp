#include <iostream>
using namespace std;

int main(){
    int i, j;
    int m;
    cin >> m;
    for(i=0; i<m; i++){
        for(j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
