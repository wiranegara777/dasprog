#include <iostream>

using namespace std;

int main(){

	int a,b,count=0;
	float temp,c;

	cin>>a>>b>>c;
	while(a!=-99){

		temp = 1.0*a/b;
		if(temp == c && b!=0)
			count++;

		cin>>a;
		if(a == -99)
			break;

		cin>>b>>c;
	}

	cout<<count<<'\n';

return 0;
}