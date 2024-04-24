int sumOfAllDivisors(int n){
	// Write your code here.
    int sum = 0;
    for(int i=1; i<=n; i++)
    {
        sum += (n/i)*i;
    }
    return sum;	
}
/*
Let's understand the logic behing it
->  (n/i)*i = no.of times a no occurs * The Number (given n  and i are int)
Proof
->  Dividend = Divsor*Quotient + Remainder
->  Dividend/Divisor = Qutient + Remainder (now if the no. in programming is integer then '\' only gives quotient)
-> Dividend/Divisor = Quotient
*/
