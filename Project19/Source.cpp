#include"function.h"

int main()
{
	FILE* f1 = fopen("D:\\temp\\file.txt", "r");
	FILE* f2 = fopen("D:\\temp\\file2.txt", "w");
	if (f1 == NULL || f2 == NULL)
	{
		return -1;
	}
	char** words = CreateStrArr(1);
	words = FileRead(f1, words);
	int size = SizeWords(f1, words);
	
	DeleteWords(words, size);
	fclose(f1);
	fclose(f2);
}