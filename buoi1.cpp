#include <iostream>
using namespace std;

int CongHaiSo(int a, int b){
	
	return a+ b;
}

int Return5(){

 return 5; 
 
 } 

void increment(int &n) {
    n++;
}
void Test(){
cout << "This line wl be displayed" << endl;	
return; //Terminates this function
cout << "This line will not be displayed" << endl;
	
}

int ThamChieu(int &n){
	return n*n;
}

void swapNums(int &x, int &y) {
  int z = x;
  x = y;
  y = z;
}

void foo(int *iPtr)
{
	cout << "Int value at " << iPtr << " is " << *iPtr << endl;
}
void changeValue(int *iPtr)
{
	*iPtr = 15;
	
	cout << "changeValue Int value at " << iPtr << " is " << *iPtr << endl;
}

void printArray(const int *arr, int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}
void setToNull(int *ptr)	
{
	ptr = NULL; // (4)
}  


int * createAnInteger(int value = 0)
{
	int myInt = value;
	return &myInt;
}

enum ORDER_STATUS{
	THANH_CONG=1,
	THAT_BAI=0,
	KHOI_TA0=2
};
enum Direction
{
	UP = 1,   //assigned 1 by programmer
	DOWN = 3, //assigned 3 by programmer
	LEFT,     //assigned 4 by compiler
	RIGHT     //assigned 5 by compiler
};

enum ItemTypes
{
	LAPTOP=1,
	DESKTOP=2,
	MOBILE=3,
	NETWORK=4
};
void showProducts(ItemTypes type)	{

	switch (type)
	{
	case LAPTOP: 
		cout << "LAPTOP "<< "\n";
		break;

	case DESKTOP:
		cout << "DESKTOP "<< "\n";
		break;

	case MOBILE:
		cout << "MOBILE "<< "\n";
		break;

	case NETWORK:
	cout << NETWORK<< "\n";
		break;

	default:
		break;
	}
}

struct BirthDay{
	int Day;
	int Month;
	int Year;
};


struct Employeer{
	int EmployeerID;
	string EmployeerName;
	int EmployeerAge;
	BirthDay EmployeeBirthday;
};

struct Student{
	int StudentID;
	string StudentName;
	
};

int main() {
	
  int firstNum = 10;
  int secondNum = 20;

  //cout << "Before swap: " << "\n";
  //cout << firstNum << secondNum << "\n";

  // Call the function, which will change the values of firstNum and secondNum
  //increment(firstNum);

  cout << firstNum<< "\n";
  cout << &firstNum  << "\n";
 	
 int i1 = 10;
 int &i_ref = i1;        //reference to i1, not means address of i1
  
cout << &i1 << endl;    //get address of i1
cout << &i_ref << endl; //get address of i_ref
cout << *(&i_ref) << endl; //print the value at the virtual memory address of variable n
	
   //long[] d_values={1,2}; 
 //cout << sizeof(d_values[0]) <<"\n";
 //cout << sizeof(d_values[0]) <<"\n";
 // cout << sizeof(d_values) <<"\n";
//int num_of_elements = sizeof(d_values) / sizeof(d_values[0]);
//cout << "Number of elements = " << num_of_elements << endl;


int *myPointer = &firstNum;
int* myPointer2;
cout << myPointer << endl; // in ra dia chi ma con tro dang nam giu
cout << *myPointer << endl; // in ra gia tri trong dia chi ma con tro dang nam giua bang cach su dung toan tu tro den (*)
cout << "--------------"<< endl;
cout << sizeof(char) << endl;
cout << sizeof(int) << endl;
cout << sizeof(double) << endl;
cout << sizeof(string) << endl;

cout << "--------------"<< endl;
cout << sizeof(char*) << endl;
cout << sizeof(int*) << endl;
cout << sizeof(double*) << endl;
cout << sizeof(string*) << endl;

cout << "--------------"<< endl;

int value = 0;
int *ptr = &value;
cout << "Before increased: " << ptr << endl;
ptr++;
cout << " After increased: " << ptr << endl;
ptr = ptr + 5;
cout << " After increased: " << ptr << endl;
cout << ptr + 10 << " => " << *(ptr + 5) << endl;

cout << "--------------"<< endl;
int value1, value2;

int *p1;
int *p2;

p1 = &value1;
p2 = &value2;

cout << "Is p1 less than p2?             " << (p1 < p2) << endl;
cout << "Is p1 greater than p2?          " << (p1 > p2) << endl;
cout << "Is p1 less than or equal p2?    " << (p1 <= p2) << endl;
cout << "Is p1 greater than or equal p2? " << (p1 >= p2) << endl;
cout << "Is p1 equal p2?                 " << (p1 == p2) << endl;
cout << "Is p1 not equal p2?             " << (p1 != p2) << endl;


int arr[3] = {10, 20, 30};
cout << "--------------"<< endl;
//show address of arr in virtual memory
cout << &arr << endl;

//show address of the first element of arr
cout << &arr[0] << endl;

//show address of arr in virtual memory
cout << &arr << endl;

//show address of the first element of arr
cout << &arr[0] << endl;

cout << "==============================" << endl;
cout << arr << endl;

cout << "--------------"<< endl;


cout << arr << endl;
cout << arr + 1 << endl;
cout << arr + 2 << endl;
cout << arr + 3 << endl;
cout << arr + 4 << endl;

cout << "--------------"<< endl;

cout << *(arr) << endl;
cout << *(arr + 1) << endl;
cout << *(arr + 2) << endl;
cout << *(arr + 3) << endl;
cout << *(arr + 4) << endl;

cout << "--------------"<< endl;
int arr_pointer[] = { 3, 5, 65, 23, 11 };
int *ptr_p = &arr_pointer[2]; 

cout << *(ptr_p - 1) << endl; //access the second element of arr
cout << *(ptr_p + 2) << endl; //access the last element of arr

for (ptr_p = &arr[0]; ptr <= &arr[4]; ptr++)
{
	cout << *ptr_p << " ";
}

cout << "--------------"<< endl;

int src[5] = { 3, 1, 5, 7, 4 };
int des[5];
int *p_src = src;
int *p_des = des;

for (int i = 0; i < 5; i++)
{
	*(p_des + i) = *(p_src + i);
}

for (int j = 0; j < 5; j++)
{
	cout << des[j] << " ";
}

cout << "--------------"<< endl;
char my_name[] = "Nguyen Trong Quan ";

char *p_name = my_name;
p_name[1] = 'E';
cout << my_name << endl;

cout << "--------------"<< endl;

int my_i1 = 10;
int my_i12 = my_i1;
int &my_ref = my_i1;        //reference to i1, not means address of i1

cout << &my_i1 << endl;    //get address of i1
cout << &my_i12 << endl;    //get address of i2
cout << &my_ref << endl; //get address of i_ref


cout << "-------buoi 7-------"<< endl;

//cout << "Put value into memory area" << endl;
//cin >> *p_int;
//cout << "Value at " << p_int << " is " << *p_int << endl;
//delete p_int;
//*p_int = 10;
//cout << p_int << endl;
//cout << "Value at after delete" << p_int << " is " << *p_int << endl;
cout << "-------buoi 8-------"<< endl;
void *ptrVoid;

	int iValue;
	float fValue=10.0;
	double dValue;
	string str;
	int iArr[10];
	
//	ptrVoid = &iValue;
	ptrVoid = &fValue;
//	ptrVoid = &dValue;
//	ptrVoid = &str;
//	ptrVoid = iArr;

int valueCast = 5;
void *vPtr = &valueCast;

int *iPtr = static_cast<int *> (vPtr);
cout << "gia tri cua *iPtr =" << *iPtr << endl;

float *iPtrFloat = static_cast<float *> (ptrVoid);
cout << "gia tri float cua *iPtrFloat =" << *iPtrFloat << endl;

int iValueFucntion = 10;
foo(&iValueFucntion);

changeValue(&iValueFucntion);

	int valueChangeNull = 5;
	int *pValueChangeNull = &valueChangeNull; // (1)
	
	cout << "pValue point to " << pValueChangeNull << endl; // (2)
	setToNull(pValueChangeNull); // (3)
	cout << "pValueChangeNull point to " << pValueChangeNull << endl; // (6)
	
	int *pInt = createAnInteger(10);
	cout << *pInt << endl;
	cout << pInt << endl;
	_sleep(1000);
	cout << "After a fews seconds:   " << *pInt << endl;
	
cout << "-------buoi 8-------"<< endl;

 ORDER_STATUS trangthai =THANH_CONG;
 
 if(trangthai== 1){
 	
 }
 
 if(trangthai== 2){
 	
 }
 
 if(trangthai== THANH_CONG){
 	 cout << "-------THANH_CONG-------"<< endl;
 }
 
 if(trangthai== THAT_BAI){
 	cout << "-------THAT_BAI-------"<< endl;
 }
 
 ItemTypes type = LAPTOP;

 cout << type << endl;
	showProducts(type);

//Employeer emp = { 1, "Nguyen van A", 28, 5 };
Employeer emp;
std::cout << "Enter ID: ";
std::cin >> emp.EmployeerID;

std::cout << "Enter name: ";
std::getline(std::cin, emp.EmployeerName);


std::cout << "Enter age: ";
std::cin >> emp.EmployeerAge;

cout <<"EmployeerID:" << emp.EmployeerID << endl;
cout <<"EmployeerName:" << emp.EmployeerName << endl;
cout <<"EmployeerAge:" << emp.EmployeerAge << endl;

  return 1;
}