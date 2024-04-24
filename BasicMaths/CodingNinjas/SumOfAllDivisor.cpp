bool isPrime(int n)
{
	// Write your code here.
	if(n==1) return false;
	if(n==2) return true;
	int count = 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n%i == 0) return false;
	}
	return true;
}
/*
prime factorization
n = a*b*c...
sqrt(n) = a^(1/2)*b^(1/2)*c^(1/2),,,,
if n = prime
sqrt(n) = only irrational -> n%i != 0 where i = 2->sqrt(n)
if n =  square
sqrt(n) = product of whole no. ->. therefore there will be n%i == 0 where i = 2->sqrt(n) atleast for one value of i
if n = non square non prime
n = a*b*c,,,
sqrt(n) = a^(1/2)*b^(1/2)*c^(1/2)...
now let's assume a < b < c
-> a < a*(1/2)*b^(1/2)
-> a < sqrt(n) which is enoght to prove it's not a prime no
*/
