#include <iostream>

using namespace std;

int main(){

    int a,b,sum=0,count=0;

    cin>>a>>b;

    for(int i=a; i<=b; i++){
        if( (i % 2) > 0){
            sum+=i;
            count++;
        }
    }
    cout<<sum/count<<'\n';
    return 0;
}