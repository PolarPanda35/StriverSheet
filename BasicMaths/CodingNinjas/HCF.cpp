//by Euclidean Algorithm
int calcGCD(int n, int m)
{
    // Write your code here.
    if(m == 0) return n;
    return calcGCD(m,n%m);
}
/*
//by Brute Force
int calcGCD(int n, int m)
{
    int ans;
    for(int i = 1; i <= min(n,m); i++)
    {
        if(m%i==0 && n%i==0) ans = i;
    }
    return ans;
}
*/
