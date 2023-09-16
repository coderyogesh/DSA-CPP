
// https://leetcode.com/problems/rotate-array/
void rotate(vector<int> &nums, int k)
{
    vector<int> temp(nums.size());

    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i + k) % nums.size()] = nums[i];
    }
    nums = temp;
}

//  https://www.codingninjas.com/studio/problems/rotate-array_1230543

// code :
vector<int> temp(arr.size());
int n = arr.size();
for (int i = 0; i < n; i++)
{
    temp[(i - k + n) % n] = arr[i];
}
return temp;