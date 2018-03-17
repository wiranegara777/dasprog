#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main(){
    vector<float> bil;
    vector<int> n;
    int sum=0,input,count=0;
    float avg;

    cin>>input;
    while(1){
        if(input == 0){
                if(sum==0)
                    avg=0;
                else
                    avg=sum*1.0/count;
            bil.push_back(avg);
            n.push_back(count);
            count=0; sum=0;
        }else if(input == -9){
                if(sum==0)
                    avg=0;
                else
                    avg=sum*1.0/count;
            bil.push_back(avg);
            n.push_back(count);
            count=0; sum=0;
            break;
        }
        else{
            count++;
            sum+=input;
        }

        cin>>input;
    }

    for(int i=0; i<bil.size(); i++){
        
        cout<<'('<<i+1<<") ";
        cout<<n[i]<<' ';
        if(bil[i]== 0)
            cout<<"- ";
        else
            cout<<bil[i]<<fixed<<setprecision(2)<<' ';
            
        
    }

    cout<<'\n';

    return 0;
}