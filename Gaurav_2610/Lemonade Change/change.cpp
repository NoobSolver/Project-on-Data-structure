class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
        
        int n= bills.size();
        int count5 = 0;
        int count10 = 0;
        int count20 = 0;
        
        for(int i=0; i<n; i++)
        {
            if(bills[i] == 5)
                count5++;
            else if(bills[i] == 10)
            {
                count10++;
                if(count5)
                    count5--;
                else
                    return false;
            }
            else if(bills[i] == 20)
            {
                if(count10  && count5)
                {
                    count10--;
                    count5--;
                }
                else if(count5 >= 3)
                    count5 -= 3;
                else
                    return false;
            }
        }
        
        return true;
        
        
    }
};
