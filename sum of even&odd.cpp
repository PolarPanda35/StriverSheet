#include <iostream>
#include <vector>
using namespace std;

int main(){
    int number,digit;
    cin >> number;
    int even_sum=0,odd_sum=0;
    vector<int> n;
    while(number>0){
        digit = number%10;
        number=number/10;
        n.push_back(digit);
    }
    for(int i =0; i<n.size(); i++ ){
        if(n[i]%2==0){
            even_sum += n[i]; 
        } else {
            odd_sum+=n[i];
        }
    }
    cout << even_sum << " " << odd_sum;
}
