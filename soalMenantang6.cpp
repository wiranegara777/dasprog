#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>

using namespace std;

int main(){

    int N,a,b,in,ganjil=0,genap=0;
    long int count=0;
    string s;
 
    cin>>N;
    while(N--){
        cin>>a>>b;
        
        for(int i=a; i<=b; i++){
            s = to_string(i);
           
            for(int j=0; j<s.length(); j++){
                //convert char string to int
                stringstream ss;
                ss << s[j];
                ss >> in;

                if(in % 2 == 0)
                    genap+=in;
                else    
                    ganjil+=in;
            }
            if(genap>ganjil){
                count++;
                genap=0;
                ganjil=0;
            }
            else{
                genap=0;
                ganjil=0;
            }
        }

        cout<<count<<"\n";
        count=0;
    }

    return 0;
}
