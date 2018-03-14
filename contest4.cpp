#include <iostream>

using namespace std;

// int fpb(a,b) {
//       if (b==0) return a;
//       else return fpb(b, a%b);
//    }

int main(){

	int a,b,c;
	int count=0;

	cin>>a>>b>>c;
	while(a!=-99){
		if( a > 0 && b > 0){
			count++;
		}

		cin>>a;
		if(a == -99){break;}
		cin>>b>>c;
	}

	cout<<count++<<'\n';
}

