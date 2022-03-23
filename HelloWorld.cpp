#include <iostream>
using namespace std;

int main(){
	string kata;
	cout<<"Segitiga siku-siku : "<<endl;
	for(int a=0; a<6; a++){
		for(int b=0; b<a; b++){
			cout<<"*";
		}
		cout<<endl;
	}

	while(true){
		cout<<"Masukkan karakter : ";
		cin>>kata;
		if(kata=='q'){
			break;
		}
	}
	return 0;
}
