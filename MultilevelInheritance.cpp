#include <iostream>
using namespace std;
 
// L?p cha
class Mayvitinh
{
public:
    Mayvitinh()
    {
        cout << "This is a computer's brand" << endl;
    }
};

// L?p con k? th?a t? l?p cha
class Maylaptop : public Mayvitinh
{
public:
    Maylaptop()
    {
        cout << "This is a laptop's brand" << endl;
    }
};

class mayAcer : public Maylaptop
{
public:
     mayAcer(){
         cout << "This brand is Acer" << endl;
     }
};

int main()
{
    mayAcer may1;
    return 0;
}
