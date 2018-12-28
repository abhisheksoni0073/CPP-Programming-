#include<iostream>
using namespace std;
class demo1;
class demo{
	int de;
	public:
	 add(int i){
		this->de=i;
	}	
	friend dis(demo,demo1);
};
class demo1{
	public:
		int de1;
		add1(int i){
			this->de1=i;
	}
};
 dis(demo d1, demo1 d2){
	cout<<"THIS IS DEMO CLASS"<<d1.de<<endl;
	cout<<"THIS IS DEMO1 CLASS "<<d2.de1;	
}
int main(){
	demo d1;
	demo1 d2;
	d1.add(100);
	d2.add1(200);
	dis(d1,d2);
	}
