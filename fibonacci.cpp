#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout << "Enter a number:";
    cin >> n;
    int f[n];
    f[0]=0;
    f[1]=1;
    for(i=2;i<=n;i++)
    {
        f[i]=f[i-1]+f[i-2];
        cout << f[i]<<endl;
    }
}