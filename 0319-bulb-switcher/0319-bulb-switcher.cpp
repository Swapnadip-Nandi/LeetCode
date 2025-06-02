class Solution 
{
public:
    int bulbSwitch(int n) 
    {
    //     int i = sqrt(n);  // Pattern recognize
    //     return i;
    // }


    int count = 0;
    
    for(int i = 1; i*i<=n; i++){
        count++;
    }
    return count;
    }
};