long reverseBits(long n) {
    // Write your code here.
    long rev = 0;
    int pow = 31;
    while(n != 0)
    {
        rev |= (n&1) <<  pow;
        pow--;
        n = n >> 1;
    }
    return rev;
}

/*
precedence order here
rev = rev + (n&1) << pow; -> pow places the bit on the from the end
first we will solve inside bracket and bits
i.e (n&1) = sum1
now solving the left shift in ->rev = rev + sum1 << pow;
sum1<<1 = sum2
finally rev = rev + sum2
*/
