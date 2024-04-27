vector<string> printNTimes(int n) {
	// Write your code here.
	if(n>0)
	{
		printNTimes(n - 1);
		cout << "Coding Ninjas" << " ";
	}
	return {};
}
