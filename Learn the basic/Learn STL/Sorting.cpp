#inlcude<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2)//comapring elements of p1 & p2
{
    if(p1.second<p2.second) return true
    if(p2.second>p1.second) return false
    //if p1.second == p2.second then 
    if(p1.first>p2.first) return true;
    return true;
}

int main(){
    //assume a ={unsorted array}
    sort{a,a+n};//sorts the entire array
    sort{v.begin(), v.end()};//sort vectors
    sort{a,a+n, greater<int>};//sorts the array in descending order

    pair<int, int> a[] = {{1,2},{2,1},{4,1}};
    sort{a,a+n, comp}
    /*            ^
    Sorts in order of increasing order wrt second element of the pair
    If the second elements are same then it will sort the first element but 
    in decreasing order
    */

   int num = 7;//binary 111; '1'= 3 & '0'= 0
   int cnt = __builtin_popcount();//Outpuit -> 3
   num = 6;//binary 110; '1' = 2 & '0' = 1
   int cnt = __builtin_popcount();//Output 2

   long long num = 12313412488
   int cnt = __builtin_popcountll()//ll is used at the end for long integers

   string s = "123"; 
   do 
   {
        count << s << endl;
   } while(next_permuation(s.begin(), s.end()))//loop1 -> s = 123;loop2 -> s = 132; loop3 -> s = 213...;loop6 -> s = 321
   
   string s = "231";
   do 
   {
     count << s << endl;
   } while(next_permuation(s.begin(), s.end()))//loop1 -> s = 231; loop2 -> s = 312;loop3 -> s = 321;loop end therefore do this
   string s = "231";
   sort(s.begin(), s.end());
   do 
   {
     count << s << endl;
   } while(next_permuation(s.begin(), s.end()))

}
