#include"function.h"

char* CreateStr(int size)
{
	char* str = new char[size];
	return str;
}

char** CreateStrArr(int size)
{
	char** str = new char*[size];
	return str;
}

void FileRead(FILE* f,char** words)
{

}