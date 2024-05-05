#include <iostream>
using namespace std;


int main() {
	
	int myVariable =0,myVariable2=100 , myVariable3=150;
	
	myVariable=15;
	
    myVariable=20;
	
	int tongHaiSo = myVariable2 + myVariable3;
	int chiaHaiSo = myVariable3 / myVariable2;
	
	if(myVariable2 < 200 && myVariable3< 151 ){
		cout << "myVariable2 < 200 \n";
		
	}
	const int myNum = 15;  
	//myNum=100;
 // cout << myVariable;
  
 // cout << myNum;
   cout << "tong 2 so \n";
   cout << tongHaiSo;
   cout << "chia 2 so \n";
    cout << chiaHaiSo;
  return 0;
}