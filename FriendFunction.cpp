#include <iostream>  
using namespace std;  

class MayviTinh {  
 private:
  int chieudaiMVT; 
	 
    public:  
        void setChieudaiMVT(int chieudaiMVT)      {  
            this->chieudaiMVT = chieudaiMVT;  
        }
        void HienThi() {
            cout << "Chieu dai may vi tinh la " << this->chieudaiMVT << endl;
        }
        friend void TimChieuDaiNhoNhat(MayviTinh);    // Khai báo hàm b?n
};  


void TimChieuDaiNhoNhat(MayviTinh mayLenovo)  {
        cout << "ham ban lay dc gia tri la : " <<  mayLenovo.chieudaiMVT << endl;  
} 

int main() {
	// goi ham khoi tao 
MayviTinh mayLenovo;

mayLenovo.setChieudaiMVT(1000);
mayLenovo.HienThi();

TimChieuDaiNhoNhat(mayLenovo);
}
