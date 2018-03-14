#include <iostream>

using namespace std;

int main(){

	int n;
	int in,x,count=0;
	cin>>n;
	for(int i=0;i<n; i++){
		cin>>x>>x>>in;
		if(in > 0 ){
			count++;
		}
	}

	cout<<count<<'\n';
	return 0;
}