#pragma once
#include "Store.h"
#include "Order.h"

#define MAX_ORDER 10
#define NOMINMAX

#include <string>
#include <iostream>
#include <Windows.h>
#include <iomanip> // ��� ������������� setw
using namespace std;

// ������� ��� ����� ���������� � ��������
Store inputStore();

// ������� ��� ���������� ��������� ��������� � �������
void addVinylRecordsToStore(Store& store);

// ������� ��� ���������� ����������� � �������
void addEmployeesToStore(Store& store);

// ������� ��� �������� ��������� ��������� �� ��������
void removeVinylRecord(Store& store);

// ������� ��� �������� ���������� �� ��������
void removeEmployee(Store& store);

// ������� ��� ����� ���������� � �������
Order* inputOrders(Store store, string vinylInfo[][3]);

// ������� ��� ����� ���������� � ���������� ����������
void outputVinylInfo(string vinylInfo[][3]);

// ������� ��� ������ ���������� � �������
void outputOrders(Order* ordersArray);

// ������� ��� ����� ���������� � ��������� ���������
void inputVinylRecord(string& album, string& artist, int& year, string& genre, float& price, int& quantity);

// ������� ��� ����� ���������� � �������
void inputCustomer(string* firstName, string* lastName, float* money, string* address);

// ������� ��� ����� ���������� � ���������� ��������
void inputEmployee(string* firstName, string* lastName, string* position, float* salary);