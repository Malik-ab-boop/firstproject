#include <iostream>
using namespace std;
void tablefunction(int no);
 int main(){
 	int no;
 	cout<<"enter number";
 	cin>>no;
 tablefunction(no);
 	return 0;
 }
 
 void tablefunction(int no){

 	for(int i=1; i<=10; i++){
 		cout<<i<<"*"<<no<<"="<<i*no<<endl;
	 }
 	
	 }

