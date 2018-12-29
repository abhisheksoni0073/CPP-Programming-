#include<iostream>
using namespace std;
float dis(int a, int b){
	float c;
	c = a/b;
	return (c);
}
int main(){
	int a = 10;
	int b = 0;
	float c;
	c = dis(a,b);
	cout<<c;
	return 0;
}
