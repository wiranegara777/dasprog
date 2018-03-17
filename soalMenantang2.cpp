#include <iostream>

using namespace std;

int main(){

    int a,b,total;
    total = 0;
    cin>>b>>a;

    for(int i=1; i<a; i++){
        cout<<"   ";
        total++;
    }
    for(int i=1; i<=b; i++){
        if(total == 7){
            cout<<'\n';
            total=0;
        }
        if(i<10){
            cout<<"  "<<i;
            total++;
        }
        else {
            cout<<" "<<i;
            total++;
        }
    }

    return 0;
}