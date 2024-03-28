void numberCrown(int n) {
    // Write your code here.
    int i,j;
    for(i=0; i<n; i++){
        int k =1;
        for(j=0; j<=i; j++){
            cout << k++<<" ";
        }
        for(j=0; j<2*k-1;j++){
            cout << " ";
        }
        int h = i+1;
        for(j=i; j>=0; j--){
            cout<<h--<<" ";
        }
        cout << endl;
        k-=2;
    }
}
