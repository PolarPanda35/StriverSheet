#include <bits/stdc++.h>
using namespace std;

int main(){
    pair <int, int> p1 ={2,3};
    cout << p1.first << " " << p1.second << endl;
    pair <int, pair<int, int>> p2 = {1,{2,3}};
    cout << p2.first << " " << p2.second.second << endl;
    pair <int, int> p3[] = {{1,2},{3,4},{4,5}};
    cout << p3[1].first << " " << p3[2].second;
}
