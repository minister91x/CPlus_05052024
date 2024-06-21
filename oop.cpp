#include<iostream>
using namespace std;

class Person {
    public:
        string firstName;
        string lastName;
        int age;

		Person(string _firstName,string _lastName){			
			this->firstName= _firstName;
			this->lastName= _lastName;
		}
		
		~Person(){	
		}
		
		
        void fullname() {
            cout << this->firstName << ' ' << Person::lastName;
        }
};

class Animal {
    public:
        string sound;
		void makeNoise();

      //  void makeNoise() {
        //    cout << sound;
       // }
};

void Animal::makeNoise() {
    cout << sound;
}

class MyClass {
    private:
        int _age;

    public:
    
    	MyClass() { // constructor
	     // cout << "Hello World!";
	    }

        int getAge() {         // getter
            return _age;
        }

        void setAge(int age) { // setter
            _age = age;
        }
};


class MyClassStatic {
    public:
        static int count;
};
int MyClassStatic::count = 0;

int main() {

Person person("Nguyen", "Mai");

//person.firstName = "Duc Anh";
//person.lastName = "Nguyen";
//person.fullname(); // s? in ra màn hình là “nguyen duc anh"
 //cout << "person fullname = " << person.firstName << person.lastName ;
 
 person.~Person();
//Animal animal ;
//animal.sound="be be";
///animal.makeNoise();

MyClass myclass;
myclass.setAge(100);
myclass.getAge();
 //cout << "age = " << myclass.getAge();
 
 

cout << MyClassStatic::count << "\n"; // 0

MyClassStatic::count++; // 1
cout << MyClassStatic::count; // 0
	return 0;
}
