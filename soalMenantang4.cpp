#include <iostream>

using namespace std;

int main(){

    int a,count=0;

    cin>>a;

    for(int i=1;i<=a;i++ ){
        if(i%3 == 0 || i%5 == 0)
            count++;
    }

    cout<<count<<'\n';

    return 0;
}