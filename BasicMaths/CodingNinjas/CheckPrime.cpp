bool isPrime(int n)
{
	// Write your code here.
	if(n==1) return false;
	if(n==2) return true;
	int count = 0;
	for(int i = 2; i < sqrt(n); i++)
	{
		if(n%i == 0) return false;
	}
	return true;
}
/*
prime factorization
n = a^p*b^q*c^r...
sqrt(n) = a^(p/2)*b^(q/2)*c^(r/2),,,,
if n = prime
sqrt(n) = no prime no only irrational -> n%i != 0 where i = 2->sqrt(n)
if n =  square
sqrt(n) = product of whole no. ->. therefore there will be n%i == 0 where i = 2->sqrt(n) atleast for one value of i
if n = non square non prime
sqrt(n) = product of (whole no)*(irrational no) -> therefore n%i == 0 where i = 2 -> sqrt(n) atleast for one value of i
*/
