#include <iostream>
#include <cstring>
#include <cstdio>

void writeToFile(FILE *file)
{
	char *s = "Hello everyone!";
	fwrite(s, strlen(s), 1, file);
}

void readFromFile(FILE *file)
{
	void *ptr = operator new(255); //allocate 255 bytes on Heap
	fread(ptr, 255, 1, file);
	(static_cast<char *>(ptr))[255] = '\0';
	std::cout << static_cast<char *>(ptr) << std::endl;
}

int main()
{
	const char *filePath = "C:/Users/ADMIN/Desktop/my_document.txt";
	FILE *file;

	file = fopen(filePath, "w+b"); //use binary mode
	if (!file)
		std::cout << "Can not open this file" << std::endl;
	else
		std::cout << "File is opened" << std::endl;

	writeToFile(file);
	fseek(file, 0, SEEK_SET);
	readFromFile(file);

	fclose(file);

	return 0;
}
