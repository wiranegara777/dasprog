#include <iostream>

using namespace std;

int main(){

    int n=3,a,b,sum=0,dis;
    float per;

    while(n--){
        cin>>a>>b;
        sum+=(a*b);
    }
    cin>>per;

    dis = per*sum/100;
    sum-=dis;

    cout<<dis<<' '<<sum<<'\n';

    return 0;
}