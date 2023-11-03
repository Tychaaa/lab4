#pragma once
#define MAX_RECORDS 10
#define MAX_EMPLOYEE 20

#include "VinylRecord.h"
#include "Employee.h"

#include <string>
#include <iostream>
using namespace std;

// ���������� ���������� ��� �������� ���������� ��������� � �����������
extern int numRecords, numEmployees;

// ����� ��� ������� "�������"
class Store {
private:

    string storeName;    // �������� ��������
    string storeAddress; // ����� ��������
    VinylRecord vinylRecordsInStore[MAX_RECORDS]; // ������ ��������� � �������� ��������� ���������
    Employee employeesInStore[MAX_EMPLOYEE];      // ������ ����������� ��������

public:

    // ���������� ��� ����������
    Store();
    // ���������� � �����������
    Store(string name, string address, VinylRecord* vinylRecordsArray, Employee* employeeArray);
    // ����������
    ~Store();

    void outputEmployees();
    void outputEmployeesShortList();
    void outputVinylRecords();
    void outputVinylRecordsShortList();

    // ����� ��� ������ ���������� � ��������
    void outputStore();

    // ������� ��� ������
    void setStoreName(string storeName);
    void setStoreAddress(string storeAddress);
    /*void setVinylRecordsInStore(VinylRecord* vinylRecordsArray);
    void setEmployeesInStore(Employee* employeeArray);*/

    // ������� ��� ������
    const string getStoreName();
    const string getStoreAddress();   
    VinylRecord* getVinylRecordsInStore();    
    Employee* getEmployeesInStore();
};

