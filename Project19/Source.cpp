#include"function.h"

int main()
{
	FILE* f1 = fopen("D:\\temp\\file.txt", "r");
	FILE* f2 = fopen("D:\\temp\\file2.txt", "w");
	
	int size = 50;
	char** words = CreateStrArr(size);


	delete[] words;
	fclose(f1);
	fclose(f2);
}