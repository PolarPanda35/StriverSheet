void nStarTriangle(int n) {
    // Write your code here.
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<i; j++){
            cout <<" ";
        }
        for(j=0; j<2*(n-i)-1; j++){
            cout <<"*";
        }
        for(j=0; j<i; j++){
            cout <<" ";
        }
        cout << endl;
    }
}
