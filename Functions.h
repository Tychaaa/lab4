#pragma once
#include "Store.h"

#include <string>
#include <iostream>
#include <Windows.h>
using namespace std;

Store inputStore();

void addVinylRecordsToStore(Store& store);

void addEmployeesToStore(Store& store);

void removeVinylRecord(Store& store);

void removeEmployee(Store& store);

// ������� ��� ����� ���������� � ��������� ���������
void inputVinylRecord(string& album, string& artist, int& year, string& genre, float& price, int& quantity);

// ������� ��� ����� ���������� � �������
void inputCustomer(string* firstName, string* lastName, float* money, string* address);

// ������� ��� ����� ���������� � ���������� ��������
void inputEmployee(string* firstName, string* lastName, string* position, float* salary);
