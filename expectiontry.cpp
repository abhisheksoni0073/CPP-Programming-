#include<iostream>
using namespace std;
float dis(int a, int b){
	float c;
	if(b==0){
	throw "THIS IS ZERO EXCEPTION";
	}	
	c = a/b;
	return (c);
}
int main(){
	int a, b;
	cout<<"enter First value \t";
	cin>>a;
	cout<<"Enter second value  \t ";
	cin>>b;
	float c;
	try{
	c = dis(a,b);
	cout<<c;
	}
	catch(const char *a){
		cerr<<a<<endl;
	}
	return 0;
}
