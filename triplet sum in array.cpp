#include<iostream>
#include<algorithm>
using namespace std;
 bool find3Numbers(int A[], int n, int X)
    {
        //Your Code Here
        int ans=0;

        sort(A,A+n);

        for(int i=0;i<n-2;i++){

            int l=i+1;

            int r=n-1;

            while(l<r){

                int curr=(A[i]+A[l]+A[r]);

                if(curr==X){

                    ans=1;

                    break;

                }

                else if(curr<X)

                    l++;

                else

                    r--;

            }

            if(ans==1) break;

        }

        return ans;
       
    }
int main(){
	int a[6] = {1,4,45,10,6,8};
	int X=13;
	cout<<find3Numbers(a,6,13)<<endl;
}

