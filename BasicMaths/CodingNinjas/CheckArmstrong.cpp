bool checkArmstrong(int n){
	//Write your code here
	int k = to_string(n).length();
	int remainingNo = n;
	int lastDigit;
	int sum = 0;
	for(int i = 1; i <= k; i++)
	{
		lastDigit = remainingNo%10;
		sum += pow(lastDigit, k);
		remainingNo /= 10;
	}
	if (sum == n) return true;
	return false;
}
