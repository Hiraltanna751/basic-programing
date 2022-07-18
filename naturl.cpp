#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,i,sum=0;
    cout <<"Enter a number:";
    cin >> a;
    for(i=1;i<=a;i++)
    {
        sum+=i;
        cout <<i<<endl;
    }
    cout <<sum<<endl;
}