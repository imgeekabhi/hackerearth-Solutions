#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	string str,actualStr;
	cin>>str;
	actualStr = str;
    reverse(str.begin(), str.end());
	if(actualStr == str){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
}
