//Replace all 0's with 5
//You are given an integer N. You need to convert all zeroes of N to 5.

#include<iostream>
using namespace std;

int convertFive(int n);

int main(){
  int T;
  cin >> T;
  while(T--){
    int n;
    cin >> n;
    cout << convertFive(n) << endl;
}
}

int convertFive(int n) {
    int rem,rem1,sum=0,sum1=0;
    while(n>0){
        rem=n%10;
        if(rem==0){
            rem=5;
        }
        sum=sum*10+rem;
        n=n/10;
    }
    while(sum>0){
        rem1=sum%10;
        sum1=sum1*10+rem1;
        sum=sum/10;
    }
    return sum1;
}
