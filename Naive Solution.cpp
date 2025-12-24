#include <iostream>
#include <vector>

using namespace std;

int rob(const vector<int>& arr, int idx)
{
    if (idx == 0)
        return arr[0];                 

    if (idx == 1)
        return max(arr[0], arr[1]);   

    return max(arr[idx] + rob(arr, idx - 2), rob(arr, idx - 1));                                      
}

int main()
{
    int n;
    cin >> n;

    vector<int> houses(n);
    for (int i = 0; i < n; i++)
        cin >> houses[i];            

    int result = rob(houses, n - 1);
    cout << "Recursion result: " << result << endl;

    return 0;
}
