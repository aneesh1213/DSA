#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
  bool check(vector<int> A, vector<int> B, int N) {
        //code here
        sort(A.begin(),A.end());
        sort(B.begin(),B.end());
        for(int i=0;i<N;i++){
            if(A[i]!=B[i]){
                return false;
            }
        }
        return true;
    }
int main(){
}

