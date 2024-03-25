void seeding(int n) {
	// Write your code here.
	int i,j;
	for(i=0; i<n; i++){
		for(j=n; j>i ; j--){
			cout << "* ";
		}
		cout << endl;
	}
}
