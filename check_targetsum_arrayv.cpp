#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int check_pair(vector<int> arr,int n,int x){
	int l=0;
		int r=n-1;
		while(l<r){
			if(arr[l]+arr[r]==x)
			return 1;
			else if(arr[l]+arr[r]>x)
			r--;
			else
			l++;
		}
		return -1;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int x;
		cin>>x;
		sort(arr.begin(),arr.end());
		if(check_pair(arr,n,x))
		cout<<"Present two elements whose sum exist as "<<x;
		else
		cout<<"Pair not present";
	}
	return 0;
}
