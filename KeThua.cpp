#include <iostream>  
using namespace std;

//L?p Cha
class Mayvitinh {
public:
    int chieudai;
    int chieurong;
public:
		void UpRam(){
			
		cout << "UPTO 32GB: " << endl;
			
		}    
};
// L?p co s? th? hai
class Maylaptop
{
public:
    Maylaptop()
    {
        cout << "This is a laptop's brand" << endl;
    }
};


// L?p con k? th?a t? l?p cha

class MayLaptopDELL: public Mayvitinh , public Maylaptop{

	public:
    int length_screen;

};
class MayLaptopLENOVO: public Mayvitinh{

	public:
    int length_Keyboad;

};
int main() {
	
    MayLaptopDELL may1;
    may1.chieudai = 6;
    may1.chieurong = 16;
    may1.length_screen = 23;
    may1.UpRam();
    
    cout << "Chieu dai: " << may1.chieudai << endl;
    cout << "Chieu rong: " << may1.chieurong << endl;
    cout << "kich thuoc man hinh: " << may1.length_screen << " inch" <<endl;
 
    
    MayLaptopLENOVO may12;
    may12.chieudai = 30;
    may12.chieurong = 120;
    may12.length_Keyboad = 200;
    may12.UpRam();
    
    
    cout << "Chieu dai: " << may12.chieudai << endl;
    cout << "Chieu rong: " << may12.chieurong << endl;
    cout << "kich thuoc man hinh: " << may12.length_Keyboad << " inch" <<endl;
 
    return 0;
}

