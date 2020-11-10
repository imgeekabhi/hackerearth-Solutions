#include <iostream>
int factorial(int);
using namespace std;

int main() {
	int num;
	cin>>num;
	cout<<factorial(num);
	return 0;
}
int factorial(int n){
	int fact = 1;
	for(int i=1 ; i<=n ; i++){
		fact*=i;
	}
	return fact;
}
