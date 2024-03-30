void getNumberPattern(int n) {
    // Write your code here.
    int i,j;
    int top,bottom,left,right;
    for(i=2*n-1; i>=1; i--){
        for(j=2*n-1; j>=1; j--){
            top = i;
            bottom = 2*n-i;
            left = j;
            right = 2*n-j;
            cout<<n+1-min(min(top,bottom),min(left,right));
        }
        cout << endl;
    }
}
