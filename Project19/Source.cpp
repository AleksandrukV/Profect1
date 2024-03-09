#include"function.h"

int main()
{
	FILE* f1 = fopen("D:\\temp\\file.txt", "r");
	FILE* f2 = fopen("D:\\temp\\file2.txt", "w");


	fclose(f1);
	fclose(f2);
}