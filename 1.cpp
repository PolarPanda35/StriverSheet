#include <iostream>
using namespace std;

int main()
{
    int i, j;
    int m, n;
    cin >> m >> n;
    for(i=0; i<m; i++){
        for(j=0; j<n;j++){        
            cout << "* " ;
        }
        cout <<endl;
    }
}