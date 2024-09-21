#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec = {1,8,6,2,5,4,8,3,7};
    int maxWater = 0,lp=0,rp= vec.size()-1;
    int w=0,h=0,area,MaxWater= 0;

    while (lp < rp){
        w = rp-lp;
        h = min(vec[lp],vec[rp]);
        area = w*h;
        MaxWater = max(MaxWater,area);

        vec[lp] < vec[rp] ? lp++ : rp--;
    }
    cout <<  MaxWater;

    return 0;
}