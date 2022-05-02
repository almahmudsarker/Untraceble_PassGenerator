#include<bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));
    string pass;
    string data="abcdefghijklmnopqrstuvwxyz"
                "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                "0987654321"
                "%~$£*()_={}[]-/+<>,;:|-'`!@#^";
        for (int i=1;i<=12;i++)
            {
                pass=pass+data[rand() % 93];
            }
        cout<<"Your password: "<<pass;
    return 0;
}