#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<iostream>

using namespace std;

char* CreateStr(int size);
char** CreateStrArr(int size);
void DeleteWords(char** words, int size);
int SizeWords(FILE* f, char** words);
char** FileRead(FILE* f, char** words);