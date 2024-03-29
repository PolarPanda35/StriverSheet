void alphaHill(int n) {
    // Write your code here.
    int i,j;
    for(i=0; i<n; i++){
        char ch = 'A';
        for(j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(j=0; j<2*i+1; j++){
            if(j<(2*i+1)/2){
                cout<< ch++<< " ";
            }
            else{
                cout<< ch--<< " ";
            }
        }
        for(j=0; j<n-i; j++){
            cout << " ";
        }
        cout << endl;
    }
}
