#include <iostream>
#include<bits/stdc++.h>
#include<string.h>
#include<ctype.h>

using namespace std;

int main()
{
    int i=0;
    char ch;
    string str;
    cin>>str;
    while(str[i] != '\0')
    {
        if(isupper(str[i]))
        {
            ch = tolower(str[i]);
            cout<<ch;
        }
        else
        {
            ch = toupper(str[i]);
            cout<<ch;
        }
        i++;
    }
    return 0;
}
