#pragma once
#include "Store.h"

#include <string>
#include <iostream>
using namespace std;

Store inputStore();

// ������� ��� ����� ���������� � ��������� ���������
void inputVinylRecord(string* album, string* artist, int* year, string* genre, float* price, int* quantity);

// ������� ��� ����� ���������� � �������
void inputCustomer(string* firstName, string* lastName, float* money, string* address);

// ������� ��� ����� ���������� � ���������� ��������
void inputEmployee(string* firstName, string* lastName, string* position, float* salary);
