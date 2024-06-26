class Solution{
    public:
    
    bool isPrime(int N)
    {
        //Your code here
        if(N<=1)
            return false;
        if(N==2 || N==3)
            return true;
        if(N%2==0 || N%3==0)
            return false;
        for(int i=5;i*i<=N;i=i+2)
        {
            if(N%i==0 || N%(i+2)==0)
                return false;
        }
        return true;
    }
        
    int exactly3Divisors(int N)
    {
        int count=0;
        for(int i=2;i*i<=N;i++)
        {
            if(isPrime(i))
            {
                if(i*i<=N)
                    count++;
            }
        }
        return count;
    }
};