int countDigits(int n){
	// Write your code here.
	int lastDigit;
	int remainingDigit = n;
	int count = 0;
	while(remainingDigit>0)
	{
		lastDigit=remainingDigit%10;
		if(lastDigit != 0 && n%lastDigit == 0)
		{
			count++;
		}
		remainingDigit /= 10;
	}	
	return count;
}
