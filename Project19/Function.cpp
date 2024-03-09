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

char** NewWords(char** words, int size)
{
	char** newwords = CreateStrArr(size);
	for (int i = 0; i < size - 1; i++)
	{
		newwords[i] = words[i];
	}
	delete[] words;
	return newwords;
}

void DeleteWords(char** words, int size)
{
	for (int i = 0; i < size; i++)
	{
		delete[] words[i];
	}
	delete[] words;
}

int SizeWords(FILE* f, char** words)
{
	fseek(f, 0, SEEK_SET);
	int size = 0;
	char c = fgetc(f);
	while (c != EOF)
	{	
		if(c=='\n')
			size++;
		c = fgetc(f);
	}
	size++;
	return size;
}

char** FileRead(FILE* f,char** words)
{
	int size = 1;
	int count = 0;

	while (fgetc(f)!=EOF)
	{
		words = NewWords(words, size++);
		char* str = CreateStr(50);
		fseek(f, -1, SEEK_CUR);
		fgets(str, 50, f);
		words[count] = str;
		count++;
	}
	return words;
}

void FileWrite(FILE* f, char** words)
{

}