void symmetry(int n) {
    // Write your code here.
    int i,j;
    int spaces = 2*(n-1);
    for(i=1; i<=2*n-1; i++){
        int stars = i;
        if(i>n) stars = 2*n-i;
        for(j=1; j<=stars; j++){
            cout << "*" <<" ";
        }
        for(j=0; j<=spaces; j++){
            cout <<" ";
        }
        for(j=1; j<=stars; j++){
            cout<< "*" << " ";
        }
        if(stars<n) spaces-=2;
        else spaces+=2;
        cout<<endl;
    }
}
