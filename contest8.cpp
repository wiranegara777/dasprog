#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int h,m,s;
    int h2,m2,s2;

    cin>>h>>m>>s;
    cin>>h2>>m2>>s2;

    s = s+ (h*3600) + (m*60);
    s2 = s2+ (h2*3600) + (m2*60);

    s=abs(s-s2);

    cout<<s<<'\n';

    return 0;
}