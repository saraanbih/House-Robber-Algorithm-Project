#include <iostream>
#include <vector>

using namespace std;

int rob(vector<int> &nums, int i, vector<int> &memo)
{
    if(i < 0) return 0;

    if(memo[i] != -1)return memo[i];

    memo[i] = max(nums[i] + rob(nums,i-2,memo), rob(nums,i-1,memo));

    return memo[i];
}

int main()
{
    
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        nums[i] = x;
    }

    vector<int> memo(n,-1);

    int ans = rob(nums,n-1,memo);
    cout << "DP ans: " << ans << endl;

    return 0;

}