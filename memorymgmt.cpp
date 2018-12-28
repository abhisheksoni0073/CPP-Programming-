#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int num;
	float *pt;
	cout<<"allocat memory"<<endl;
	cin>>num;
	pt = new float[num];
	cout<<"ENTER THE VALUE"<<endl;
	for(int i = 0; i<num; i++){
		cout<<"number"<<i + 1 <<": "<<endl;
		cin>>*(pt+i);
	}
	for(int i =0; i<num; i++){
		cout<<"Enterd value is : "<<*(pt+i)<<endl;
	}
	delete [] pt;
}
