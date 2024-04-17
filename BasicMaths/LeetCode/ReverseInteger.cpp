class Solution {
public:
    int reverse(int x) 
    {
        long revNumbers = 0;
        int digits;
        while(x != 0)
        {
            revNumbers = revNumbers*10 + x%10;
            x /= 10;
        }
        if(revNumbers > INT_MAX || revNumbers < INT_MIN) return 0;
        return int(revNumbers);
    }
};
