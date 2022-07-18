#include<iostream>
using namespace std;

int main(){
        int i;
    cout << "odd numbers are:";   
     for (i=1;i<=100;i++) // taken i as 1 and less than or equal to 100// 
    if (i%2 !=0){//if i is divisible by 2 and the remainder is zero than it is odd//
    cout << i <<endl;
     }   
}


/*
#include<iostream>
using namespace std;

int main(){
        int i,sum=0;
    cout << "odd numbers are:";   
     for (i=1;i<=100;i++) // taken i as 1 and less than or equal to 100// 
     {
    if (i%2 !=0){//if i is divisible by 2 and the remainder is zero than it is odd//
    cout << i <<endl;
     
                sum +=i;

    }}   
    cout << sum;
}
*/