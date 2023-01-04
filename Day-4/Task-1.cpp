/*
Task 1: 
Write a program to create inverted hollow triangle star pattern of size n
*    *    *    *    *    *    * 
     *                   *
          *         *
               *     
*/


#include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cout<< "Enter a number : ";
    cin>> n;
    for(i=1;i<=n;i++){
        for(j=1;j<=(2*n-1);j++){
            if(i==j || i==1 || j==(2*n-i)){
                cout<< "*";
            }
            else
            cout<< " ";
        }
        cout<< endl;
    }
    return 0;
}
