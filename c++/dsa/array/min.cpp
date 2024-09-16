#include<iostream>
using namespace std;


int main(){
    int num[5]= {5,22,1,-15,24};
    int i,smallest = 0;
    int index = 0;

    for(i=0;i<=4;i++){
        if(num[i] < smallest){
            smallest = num[i];
            index = i;
        }
    }
    cout << "The smallest number is " << smallest;
    cout << "The smallest index is num[" << index << "]" ;
    return 0;
};