class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        
        // Your code here
       long long l=0,h=n-1,ans=-1;
        while(l<=h)
        {
           long long mid=l+(h-l)/2;
            if(v[mid]==x)
                return mid;
            else if(v[mid]>x)
                h=mid-1;
            else
                {
                    ans=mid;
                    l=mid+1;
                }
        }
        return ans;
        
    }
};