#include <iostream>

using namespace std;

int main(){
	
	int a,sum=2000;
	
	cin>>a;
	
	if(a<=3)
		cout<<"2000\n";
	else {
		for(int i=0;i<a-3; i++){
				sum+=500;
			}
			if(sum>=5000)
				cout<<"5000\n";
			else
				cout<<sum<<'\n';
		}
	
	return 0;
	}
