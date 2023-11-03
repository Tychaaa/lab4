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

void Store::outputEmployees()
{
    cout << "\n\t~~���������� � ����������� �������� \"" << getStoreName() << "\"~~" << endl;
    cout << "---------------------------" << endl;
    for (int i = 0; i < numEmployees; ++i) {
        if (employeesInStore[i].getFirstName() != "") {
            cout << "��������� #" << i + 1 << endl;
            cout << "���: " << employeesInStore[i].getFirstName() << endl;
            cout << "�������: " << employeesInStore[i].getLastName() << endl;
            cout << "���������: " << employeesInStore[i].getPosition() << endl;
            cout << "��������: " << employeesInStore[i].getSalary() << endl;
            cout << "---------------------------" << endl;
        }
    }
    cout << endl;
}

void Store::outputEmployeesShortList()
{
    cout << "���������� ��������:" << endl;
    for (int i = 0; i < numEmployees; ++i) {
        if (employeesInStore[i].getFirstName() != "") {
            cout << i + 1 << ") " << employeesInStore[i].getFirstName() << " " << employeesInStore[i].getLastName() << " - " << employeesInStore[i].getPosition() << endl;
        }
    }
}

void Store::outputVinylRecords()
{
    cout << "\n\t~~���������� � ��������� ���������� � �������� \"" << getStoreName() << "\"~~" << endl;
    cout << "---------------------------" << endl;
    for (int i = 0; i < numRecords; ++i) {
        if (vinylRecordsInStore[i].getAlbumName() != "") {
            cout << "��������� ��������� #" << i + 1 << endl;
            cout << "�������� �������: " << vinylRecordsInStore[i].getAlbumName() << endl;
            cout << "�����������: " << vinylRecordsInStore[i].getArtist() << endl;
            cout << "��� �������: " << vinylRecordsInStore[i].getYear() << endl;
            cout << "����: " << vinylRecordsInStore[i].getGenre() << endl;
            cout << "����: " << vinylRecordsInStore[i].getPrice() << endl;
            cout << "���������� � �������: " << vinylRecordsInStore[i].getQuantity() << endl;
            cout << "---------------------------" << endl;
        }
    }
    cout << endl;
}

void Store::outputVinylRecordsShortList()
{
    cout << "��������� � �������:" << endl;
    for (int i = 0; i < numRecords; ++i) {
        if (vinylRecordsInStore[i].getAlbumName() != "") {
            cout << i + 1 << ") " << vinylRecordsInStore[i].getAlbumName() << " - " << vinylRecordsInStore[i].getArtist() << " (" << vinylRecordsInStore[i].getQuantity() << " ��.)" << endl;
        }
    }
}

// ����������� ������ ��� ������ ���������� � ��������
void Store::outputStore()
{
    cout << "\n\t~~���������� � ��������~~" << endl;
    cout << "-------------------------------------------" << endl;
    cout << "�������� ��������: " << getStoreName() << endl;
    cout << "����� ��������: " << getStoreAddress() << endl;
    outputVinylRecordsShortList();
    outputEmployeesShortList();
    cout << "-------------------------------------------\n" << endl;
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
