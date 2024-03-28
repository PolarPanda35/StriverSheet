void nNumberTriangle(int n) {
    // Write your code here.
    int i,j;
    int k = 1;
    for(i=0; i<n; i++){
        for(j=0; j<=i; j++){
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
}
