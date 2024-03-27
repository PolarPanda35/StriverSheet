void nStarTriangle(int n) {
    // Write your code here.
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(i=0; i<n; i++){
        for(j=0; j<n-i; j++){
            cout <<"*";
        }
        cout << endl;
    }
}
