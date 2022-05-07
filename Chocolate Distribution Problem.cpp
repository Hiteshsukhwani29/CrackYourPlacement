#include <bits/stdc++.h>
using namespace std;

int findDiff(int arr[], int n, int m)
{
	if (m==0 || n==0)
		return 0;

	sort(arr, arr+n);

	if (n<m)
		return -1;

	int k = INT_MAX;

	for (int i=0;i+m-1<n;i++) {
		int csum = arr[i+m-1] - arr[i];
		if (csum<k)
			k = diff;
	}
	return min_diff;
}

int main()
{
	int arr[], n, m;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  cin>>m;
	cout<<findDiff(arr, n, m);
}
