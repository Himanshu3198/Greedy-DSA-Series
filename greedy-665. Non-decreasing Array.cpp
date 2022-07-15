class Solution
{
public:
    bool checkPossibility(vector<int> &nums)
    {
        int n = nums.size();
        // power indicate whether  element modifying once or not
        bool power = false;
        for (int i = 1; i < n; i++)
        {
            // if already increasing
            if (nums[i] >= nums[i - 1])
                continue;
            // if power already used then return false
            if (power)
                return false;
            /* non increasing element exist in middle check if its
              next element smaller than its previous then modyify its previous
              element so sequence become increasing
               */
            if (i + 1 < n && i - 1 >= 0 && nums[i + 1] < nums[i - 1])
            {
                nums[i - 1] = nums[i];
                power = true;
            }
            /* if non increasing element exist in middle check if its
              next element is greater than or equal to  its previous or non increasing
              then  modify the non increasing element to next element*/
            else if (i + 1 < n && i - 1 >= 0 && (nums[i + 1] >= nums[i - 1] || nums[i + 1] >= nums[i]))
            {
                nums[i] = nums[i + 1];
                power = true;
            }
            // if the last element is not increasing then modify it to previous element
            else if (i + 1 >= n && i - 1 >= 0)
            {
                nums[i] = nums[i - 1];
                power = true;
            }
        }

        for (int i = 1; i < n; i++)
        {
            if (nums[i] < nums[i - 1])
                return false;
        }
        return true;
    }
};g
