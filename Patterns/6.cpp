void nNumberTriangle(int n) {
    // Write your code here.
    int i,j;
	for(i=n; i>0; i--){
		for(j=1; j<=i; j++){
			cout << j << " ";
		}
		cout << endl;
	}
}
