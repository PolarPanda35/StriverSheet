void getStarPattern(int n) {
    // Write your code here.
    int i,j;
    for(i=1; i<=n; i++){
        if(i==1||i==n){
            for(j=1; j<=n;j++){
                cout <<"*";
            }
        } else {
            for(j=1; j<=n;j++){
                if(j==1||j==n){
                    cout<<"*";
                }
                cout<<" ";
            }
        }
        cout <<endl;
    }
}
