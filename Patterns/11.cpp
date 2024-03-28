void nBinaryTriangle(int n) {
    // Write your code here.
    int i,j;
    for(i=0; i<n; i++){
        int k = i+1;
        for(j=0; j<=i; j++){
            cout << k%2 << " ";
            k++;
        }
        cout << endl;
    }
}
