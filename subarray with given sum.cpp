#include<iostream>
#include<vector>
using namespace std;
class solution{
	vector<int> subarraySum(vector<int>arr, int n, long long s){
		int sum = arr[0];
		int a=0;
		int b=0;
		vector<int> ans;
		while(b<n){
			if(sum==s){
			
			ans.push_back(a+1);
			ans.push_back(b+1);
			return ans;
			}
			else if(sum<s || a==b){
				b++;
				sum = sum+arr[b];
			}
			else{
				sum = sum-arr[a];
				a++;	
			}
		}
	}
};
int main(){
	
}

