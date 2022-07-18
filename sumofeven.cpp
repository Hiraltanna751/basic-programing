#include<iostream>
using namespace std;

int main(){
        int a,i,sum=0;
    cout << "Enter a number:";   
    cin >> a;
     for (i=1;i<=a;i++) // taken i as 1 and less than or equal to 100// 
     {
    if (i%2 ==0){//if i is divisible by 2 and the remainder is zero than it is odd//
    cout << i <<endl;
     
                sum +=i;

    }}   
    cout << sum;
}