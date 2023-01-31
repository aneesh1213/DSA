#include<iostream>
#include<algorithm>
using namespace std;

pair<long long, long long> getMinMax(long long a[], int n) {
    sort(a,a+n);
    pair<long long,long long> p1;
    p1.first = a[0];
    p1.second = a[n-1];
    return p1;
}
int main(){
	long long a[6] = {1,2,567,23456,7,77};
	getMinMax(a,6);
	
}

