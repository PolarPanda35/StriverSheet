#include<bits/stdc++.h>
#include<map>
using namespace std;

/*
Keys fo maps are unique and data is stored in sorted order similar to set
*/

int main() {
    map<int, int> mp;
    map<int, pair<int,int>> mp;
    map<pair<int, int>, int>;

    mp[1]=2//mp ={1,2}
    mp.emplace({3,1});// mp = {3,1}
    mp.insert({2,4});// mp = {2,4} all of the output are for map<int,int> mp

    mp[{2,3}] = 10; // for map<pair<int, int>, int> mp; mp = {{2,3},10}

    for(auto it : mp){
        cout << it.first << " " << it.second << endl;
    }

    //Assume mp = {{1,2},{4,5}}
    cout << mp[1];//gives the first key i.e output -> 1
    cout << mp[5];//5th key doesn't exist i.e output is 0, null of garbage value

    auto it = mp.find(1)
    cout <<*(it).second;//checks the value you can do the same for key as well

    /*
    erase swap size empty have same usecase
    */
    multimap<int,int> mmp;//like multiset
    unorderedmap<int,int>//random order Time complexity of unordered map = O(n) and Time Complexity of Map id O(log(n))
} 

