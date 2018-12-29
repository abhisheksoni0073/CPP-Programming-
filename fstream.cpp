#include <iostream>  
#include <fstream> 
#include<string> 
using namespace std;  
int main () {  
 ifstream file;
 file.open("file.txt");
 if(file.fail()){
 	cerr<<"Error Page "<<endl;
 	exit(1);
 }
		string item;
		int count = 0;
 		while(!file.eof()){
		file>>item;
		cout<<item <<endl;
		count++;	
}
	
} 




