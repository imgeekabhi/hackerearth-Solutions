#include<bits/stdc++.h>
using namespace std;
int main(){
    const long int MOD = 1000000007;
	int size;
	long int product = 1;
	cin>>size;
	int arr[size];
	for(int i = 0 ; i<size ; i++)
		cin>>arr[i];
	for(int i = 0 ; i<size ; i++)
        product = (product * arr[i])% MOD;
    cout<<product;
	return 0;
}
