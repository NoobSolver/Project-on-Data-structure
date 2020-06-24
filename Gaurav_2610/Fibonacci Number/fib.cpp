class Solution {
public:
    int fib(int N) {
        
        vector<int>fi(50);
        
        fi[0]=0;
        fi[1]=1;
        
        for(int i=2;i<=N;i++)
        {
            fi[i]=fi[i-1] + fi[i-2];
        
        }
        return fi[N];
    }
};
