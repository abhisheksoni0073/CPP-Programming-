#include<iostream>
using namespace std;
class A{
	public:
	virtual	dis(){
			cout<<"ABHISHEK SONI ";
		}
};
class B: public A{
	public:
		dis(){
			cout<<"CYBER SECURITY EXPERT ";
		}
};
int main(){
	A *a;
	B b;
	a = &b;
	a->dis();
	
	
}
