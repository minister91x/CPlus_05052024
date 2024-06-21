#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>
#include <sstream>


int main()
{
	//std::ifstream fileInput("C:/Users/ADMIN/Desktop/my_document.txt");
	std::ofstream fileOutput("C:/Users/ADMIN/Desktop/my_document.txt");

	if (fileOutput.fail())
	{
		std::cout << "Cannot open file at "<< std::endl;
		return 0;
	}

	fileOutput << "Hello world!" << std::endl;
	fileOutput << "I'm Mr Quan" << std::endl;
	fileOutput << "I worked at Singapore over 5 years" << std::endl;
	
	fileOutput.close();

	fileOutput.open("C:/Users/ADMIN/Desktop/my_document.txt", std::ios::app);

	fileOutput << "Goodbye everyone!" << std::endl;
	
	std::stringstream ss;
	ss << "I'm learning" << " " << "C++ programming language" << std::endl;
	ss.str("I'm learning C++ programming language\n");

	//system("pause");
	return 0;
}


