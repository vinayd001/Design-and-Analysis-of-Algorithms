#include<iostream>
#include<vector>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		int arr_sum=0;
		cin>>n;
		vector<int> num(n);
		for(int i=0;i<n-1;i++){
			cin>>num[i];
		}
		int sum=n*(n+1)/2;
		for(int i=0;i<n;i++){
			arr_sum+=num[i];
		}
		cout<<"\nMissing Number is : "<<(sum-arr_sum)<<endl;
	}
	return 0;
}
