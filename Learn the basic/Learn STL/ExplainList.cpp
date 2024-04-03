#include<bits/stdc++.h>
#include<list>
using namespace std;

int main(){
    list<int> ls;
    ls.push_back(1);//{1}
    ls.emplace_back(2);//{1,2}

    ls.push_front(3);//{3,1,2} -> push_front is more efficient in time complexity than insert of vectors
    ls.emplace_front(4);//{4,3,1,2} 
    /*
    Rest functions are similar to vectors
    begin, end, rbegin, rend, clear, insert, swap, size 
    */

}
