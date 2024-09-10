#include <iostream>

using namespace std;

int main(){
    int i,ans=0,n=10110,pow=1;
    

    while(n>0){
        int rem= n%2;
        ans += rem*pow;
        pow +=2;
        n =n/10;
    }
    cout << pow << endl;
    cout << sizeof(long long) ; 
    return 0;
}