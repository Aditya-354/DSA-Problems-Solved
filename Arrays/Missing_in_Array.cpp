#include <iostream>  
#include <vector>    

class Solution
{
public:
    int missingNum(std::vector<int> &arr)
    {
        int n = arr.size() + 1;                 
        int total = n * (n + 1) / 2;            

        int sum = 0;
        for (int num : arr)                    
        {
            sum += num;                         
        }

        return total - sum;
    }
};

int main()
{
    Solution num;
    std::vector<int> arr = {1, 2, 3, 5};
    int missing = num.missingNum(arr);
    std::cout << "Missing number: " << missing << std::endl;
    return 0;
}

