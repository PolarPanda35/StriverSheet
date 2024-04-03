#include<bits/stdc++.h>
#include<queue>
#include<stack>//Follows Last in First Out (LIFO)
using namespace std;

/*
main aim of the this file is to give you an understanding how this works
Code might not work
*/

int main(){
    deque<int> dq;
    dq.push_back(1);//{1}
    dq.emplace_back(2);//{1,2}
    dq.push_front(3);//{3,1,2}
    dq.emplace_front(4);//{4,3,1,2}

    dq.pop_back();//{4,3,1}
    dq.pop_front();//{3,1}

    dq.back();
    dq.front();

    /*
    Rest functions are same 
    begin, end rbegin, rend, clear, insert, size, swap
    */
}

int main(){
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{6,2,1}
    st.emplace(4); //{4,6,2,1}

    cout << st.top();//Output -> 4

    st.pop();

    cout << st.top();//Output -> 6

    cout << st.size(); // Output -> 3

    cout << st.empty(); // output -> False

    stack<int> st1, st2;
    st1.swap(st2);

    /*
    Time Coplexity - O(1)
    */

}

int main(){
    queue<int> q;
    q.push(1);// {1}
    q.push(2);// {1,2}
    q.emplace(3);// {1,2,3}

    q.back()+=5;//{1,2,8}

    cout << q.front ; // output -> 1
    q.pop();
    cout << q.front(); // output -> 2
    //Some other function -> size, swap similar to stack
}

int main(){
    //Max Heap
    priority_queue<int> pq;//largest no. stays on the top
    pq.push(5);// {5} ;Time Complexity -> O(kog(n))
    pq.push(3);// {5,3}
    pq.emplace(8);// {8,5,3}

    cout << pq.top ; // output -> 8; Time Complexity -> O(1)
    pq.pop();//Time Complexity -> O(n)
    cout << pq.top(); // output -> 5
    //Size Swap function, Empty Function same as other 

    //Min Heap
    priority_queue<int, vector<int>, greater<int>> pq;//smallest no. stays on top (min priority Queue)
    pq.push(5);//{5}
    pq.push(2);//{2,5}
    pq.push(8);//{2,5,8}
    pq.emplace(10);//{2,5,8,10}

    cout << pq.top();//Output-> 2 

}
