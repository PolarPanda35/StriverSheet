#include<bits/stdc++.h>
#include<vector>
using namespace std;
/*
-> The following code made not work but will give you an idea on how vectors functinos work
-> All the functions are written keeping in mind what they will do seprately and not what they will do in this program
*/
int main(){
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2); //faster than push_back
    cout << v[0] << " " << v[1] << endl;

    vector <pair<int, int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
    cout << vec[0].first << " " << vec[0].second << endl;
    cout << vec[1].first << " " << vec[1].second << endl;

    vector <int> v1{5,20};//pre built vector with 5 values as 20 i.e {20,20,20,20,20}

    vector <int> v{5};//vecotr with 5 index havign gibberish value

    vector <int> v2{v1};//Vector with duplicate of v2 items

    vector <int>::iterator it = v.begin();//points to the memory address of 0th index
    //assume for now we have already value of v = {1,2,3,4}
    it++;//shifts to next address in the vector
    cout << *(it) << " "; //output = 1 2 3 4

    /*End and Reverse*/

    vector <int>::iterator it = v.end();// end -> points to the value after last element

    vector <int>::iterator it = v.rend();//reverse end 

    vector <int>::iterator it = v.rbegin();//reverse begin

    cout << v.back();//starts from the last element

    /*Printing vectors*/

    for(vector<int>iterator:: it = v.begin(); it!= v.end(); it++){//prints the entire vector
        cout << (*it) << " ";
    }

    /*Auto*/

    for(auto it = v.begin(); it != v.end(); it++){//shortcut for printing the vector
        cout <<*it << " ";
    }

    for(auto it:v){//assume v = {5,4,3,2,1}
        cout << it << " "; // loop1 -> it = 5; loop2 -> it = 4; loop3 -> it = 3 and so on
    }

    /*Erasing Vectors*/

    //assume v ={4,3,2,1}
    v.erase(v.begin()+1);//new v = {4,2,1}

    //assume v = {6,5,4,3,2,1}
    v.erase(v.begin()+2,v.end()-2/* or v.begin()+4 */) // new v = {6,5,2,1}

    /*Insert*/

    vector<int> v = {2,100}//v={100,100}
    v.insert(v.begin(),20);//v={20,100,100}
    v.insert(v.begin()+1,5);//v={20,5,100,100}
    v.insert(v.begin()+1,2,9);//v={20,9,9,5,100}

    /*Copy*/

    //Assume that there is already a vector v ={6,7,8,5,4}
    vector<int> copy{2,20};
    v.insert(v.begin(), copy.begin(), copy.end()); // new v = {20,20,6,7,8,5,4}

    /*Other function*/
    cout << v.size();//tells the length of vector
    v.pop_back(); //removes the last element
    //assume v1 = {1,2,3} v2 = {4,5}
    v1.swap(v2); // Swap elements of both the vector i.e v1 = (4,5); v2 = {1,2,3}
    v.erase;//erases the entire vector
    cout << v.empty();//tells if the vector is empty or
}
