#include <bits/stdc++.h>
using namespace std;
bool isCycle(vector<int> arr, int curr, vector<bool> &visited, vector<int> &path)
{
    if (curr == -1)
    {
        return false;
    }
    if (visited[curr])
    {
        return true;
    }
    visited[curr] = true;
    path.emplace_back(curr);
    if (isCycle(arr, arr[curr], visited, path))
        return true;
    return false;
}

int solution(vector<int> arr)
{
    int n = arr.size();
    int sum = INT_MIN;
    int finalsum =INT_MIN;
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        visited[i] = true;

        vector<int> path;

        if (isCycle(arr, arr[i], visited, path))
            sum = max(sum, accumulate(path.begin(), path.end(), 0));

        visited[i] = false;
        finalsum = max(sum,finalsum);
    }
    if (finalsum == INT_MIN)
        return -1;
    return finalsum;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int ans = solution(arr);
    cout<<ans;
}