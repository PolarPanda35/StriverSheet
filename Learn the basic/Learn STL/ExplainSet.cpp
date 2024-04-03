#include<bits/stdc++.h>
#include<set>
using namespace std;

int main(){
    set<int>st; // all the functions in set takes log(n)<- Time Complexity
    st.insert(1);//{1}
    st.emplace(2);//{1,2}
    st.insert(2);//{1,2}
    st.insert(4);//{1,2,4}
    st.insert(3);//{1,2,3,4}

    /*
    begin(), end(), rend(), rbegin(), size(), empty(), swap() same as other function
    */
    //assume st -> {1,2,3,4,5}
    auto it = st.find(3);//returns iterator which points to 3
    auto it = st.find(6);//returns st.end() -> points after 5 i.e the last element

    st.erase(5);//erasers 5 ; Time Complexity O(log(n))

    int cnt = st.count(7);//If 7 is presnt in the set it will give 1 else 0

    //Assume st = {1,2,3,4,5,6}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2);//st = {1,4,5,6}
    
    //st = {1,2,3,4,5}
    auto it1 = st.lower_bound(2);//watch this video -> https://www.youtube.com/watch?v=edJ19qIL8WQ&t=0s
    auto it2 = st.upper_bound(4);//similarly works in vector
}

int main(){
    multiset<int> ms;//Same as set wwhich allows you to add multiple values of same number
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    int cnt = ms.count(1);//Output cnt = 3

    ms.erase(1);//erases all 1 the one therefore the alternative is given below
    ms.erase(find(1));//Output ms = {1,1}
    ms.erase(find(1), find(1)+1);//Output ms = {1} assuming ms = {1,1,1} before
}

int main(){
    unordered_set<int> st;//sorts in randomizd pattern
    //Time Complexity - O(n)
}
