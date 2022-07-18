#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cout <<"Enter a number:";
    cin >> a ;
    for (b=0;b<=a;b++) {
        if ((b*b)==a) {
        cout << b;
        break;
        }
    }
}