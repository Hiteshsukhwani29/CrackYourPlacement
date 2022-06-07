#include <bits/stdc++.h>
using namespace std;
vector<vector<long long int>> printPascal(int n) 
{
    vector<vector<long long int>> arr;
    for(int i=0;i<n;i++){
        vector<long long int> r(i+1,1);
        for (int j=1;j<i;j++) {
            r[j]=arr[i-1][j]+arr[i-1][j-1];
        }
        arr.push_back(r);
    }
    return arr;
}
