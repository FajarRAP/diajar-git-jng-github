#include <iostream>
using namespace std;

int main(){
	cout<<"Segitiga siku-siku : "<<endl;
	for(int a=0; a<6; a++){
		for(int b=0; b<a; b++){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
