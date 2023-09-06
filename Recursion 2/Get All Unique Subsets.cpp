vector<vector<int>> getUniqueSubsets(vector<int>& arr)
{
    set<vector<int>> st;
    int n = arr.size();
    sort(arr.begin(),arr.end());
    for(int i=0;i<(1<<n);i++)
    {
        vector<int> curr;

        for(int j =0;j<n;j++)
        {
            if(i&1<<j)curr.push_back(arr[j]);
        }
        st.insert(curr);
    }
    vector<vector<int>> ans (st.begin(),st.end());
    return ans;
}
