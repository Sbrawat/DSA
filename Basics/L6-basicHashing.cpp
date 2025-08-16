#include <bits/stdc++.h>
using namespace std;

//Counting Frequencies of Array Elements
vector<vector<int>> countFrequencies(vector<int>& nums) 
{
    cout << "test7" << endl;
    
    // Your code goes here
    vector<vector<int>> f;
    vector<vector<int>> v = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    map<int, int> hashMap;
    int size = nums.size();
    
    
    for(int i=0; i<size; i++)
    {
        hashMap[nums[i]]++;
    }

    
    // int cnt = 0;
    // for(auto i : hashMap)
    // {
        //     f[cnt][0]= i.first;
        //     f[cnt++][1]= i.second;
        // }
        
        // f[0][0] = 1;
        
    cout << "test35" << endl;
    
    cout << v[0][0] << " " << v[0][1] << endl;
    cout << f[0][0] << " " << f[0][1] << endl;
    cout << "test38" << endl;
    // cout << v[0][0] << " " << v[0][1] << endl;
    
    return f;
}
    
    
int main()
{
    cout << "test41" << endl;
    
    vector<int> v = {1, 2, 2, 1, 3};
    cout << "test44" << endl;

    
    vector<vector<int>> result = countFrequencies(v);
    for(int i=0; i<result.size(); i++)
    {
        for(int j=0; j<2; j++)
        {
            cout << i << " " << j << endl;
            cout << result[i][j] << " ";
        }
    }

    return 0;
}