#include "Store.h"

// ���������� ��� ����������
Store::Store() : storeName(""), storeAddress("") {}

// ���������� � �����������
Store::Store(string name, string address, VinylRecord* vinylRecordsArray, Employee* employeeArray) : storeName(name), storeAddress(address) {
    // ������������� �������� � ������������
    for (int i = 0; i < numRecords; ++i) {
        vinylRecordsInStore[i] = vinylRecordsArray[i];
    }

    for (int i = 0; i < numEmployees; ++i) {
        employeesInStore[i] = employeeArray[i];
    }
}

// ����������
Store::~Store() {}

// ����������� ������ ��� ������ ���������� � ��������
void Store::outputStore()
{
    cout << "���������� � ��������:" << endl;
    cout << "��������: " << storeName << endl;
    cout << "�����: " << storeAddress << endl;
    cout << endl;

    cout << "���������� � ��������� ���������� � ��������:" << endl;
    cout << endl;
    for (int i = 0; i < numRecords; ++i) {
        cout << "��������� ��������� #" << i + 1 << ":" << endl;
        vinylRecordsInStore[i].outputVinylRecord();
    }

    cout << "���������� � ����������� ��������:" << endl;
    cout << endl;
    for (int i = 0; i < numEmployees; ++i) {
        cout << "��������� #" << i + 1 << ":" << endl;
        employeesInStore[i].outputEmployee();
    }
}

// ����� ��� ��������� �������� ��������
void Store::setStoreName(string storeName)
{
    this->storeName = storeName;
}

// ����� ��� ��������� ������ ��������
void Store::setStoreAddress(string storeAddress)
{
    this->storeAddress = storeAddress;
}

// ����� ��� ��������� �������� ��������
const string Store::getStoreName()
{
    return storeName;
}

// ����� ��� ��������� ������ ��������
const string Store::getStoreAddress()
{
    return storeAddress;
}

// ������ ��� ��������� ������� ��������� ��������� � ��������
VinylRecord* Store::getVinylRecordsInStore()
{
    return vinylRecordsInStore;
}

// ������ ��� ��������� ������� ����������� ��������
Employee* Store::getEmployeesInStore()
{
    return employeesInStore;
}
