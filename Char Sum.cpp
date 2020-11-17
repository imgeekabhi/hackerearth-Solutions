#include<iostream>
using namespace std;
int main()
{
    int sum = 0,i=0;
    string str;
    cin>>str;
    while(str[i]!='\0'){
        sum += str[i]-96;
        i++;
    }
    cout<<sum;
    return 0;
}
