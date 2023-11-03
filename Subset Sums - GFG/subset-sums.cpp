//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
    
public:

    void func(int index, int sum, vector<int>&arr, int size, vector<int>&ans){
        
        // base case
        if(index == size){
            ans.push_back(sum);
            return;
        }
        
        // pick the elememt
        func(index+1, sum+arr[index], arr,size,ans);
        // not pick the element
        func(index+1,sum ,arr, size, ans);
    }
public:

    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int>ans;
        // index - sum - arr - size - ans ds
       func(0,0,arr,N,ans);
       return ans;
       
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends