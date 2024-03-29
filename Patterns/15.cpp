void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=n; i>0; i--){
        for(char ch = 'A'; ch<'A'+i; ch++){
            cout << ch <<" " ;
        }
        cout << endl;
    }
}
