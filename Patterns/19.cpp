void symmetry(int n) {
    // Write your code here.
    int spaces=0;
    int i,j;
    for(i=0; i<=n;i++){
        for(j=0; j<n-i; j++){
            cout << "*"<<" ";
        }
        for(j=0; j<spaces; j++){
            cout << " ";
        }
        for(j=0; j<n-i; j++){
            cout << "*"<<" ";
        }
        spaces+=4;
        cout << endl;
    }
    spaces=2*n-1;
    for(i=0; i<=n;i++){
        for(j=0; j<i; j++){
            cout << "*"<<" ";
        }
        for(j=0; j<spaces; j++){
            cout<<" ";
        }
        for(j=0; j<i; j++){
            cout << "*"<<" ";
        }
        spaces-=2;
        cout<<endl;
    }
}
