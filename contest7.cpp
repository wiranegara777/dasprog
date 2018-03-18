#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int main(){

    int a,b,in,count=0,max=0;

    cin>>a>>b;

    while(a!=-99){
        count++;
        in = abs(b-a);
        if(in > max)
            max = in;

        cin>>a;
        if(a == -99)
            break;
        cin>>b;
    }

    cout<<count<<' '<<max<<'\n';

    return 0;
}