#include<iostream>
#include<vector>
using namespace std;

void sort(vector<int> arr, int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				int k = arr[i];
				arr[i]=arr[j];
				arr[j]=k;
			}
		}
	}
}
int main(){
	int t,n;
	cin>>t>>n;
	while(t--){
	vector<int> num(n);
	for(int i=0;i<n;i++){
		cin>>num[i];
	}
	for(int i=0;i<n;i++){
		sort(num,n);
		int t=num[i];
		int k=0;
		while(num[i+k]==t){
			k++;
		}
		cout<<"OUTPUT : ";
		if(k>=n/2)
		cout<<num[i]<<endl;
		else
		continue;
	}	
	}
	return 0;
}
