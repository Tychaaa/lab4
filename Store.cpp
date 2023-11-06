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

// ����� ��� ������ ������ ���������� � ����������� ��������
void Store::outputEmployees()
{
    cout << "\n\t~~���������� � ����������� �������� \"" << getStoreName() << "\"~~" << endl;
    cout << "---------------------------" << endl;
    int employeeNumber = 1;
    for (auto& employee : employeesInStore) {
        if (employee.getFirstName() != "") {
            cout << "��������� #" << employeeNumber << endl;
            cout << "���: " << employee.getFirstName() << endl;
            cout << "�������: " << employee.getLastName() << endl;
            cout << "���������: " << employee.getPosition() << endl;
            cout << "��������: " << employee.getSalary() << endl;
            cout << "---------------------------" << endl;
            employeeNumber++;
        }
    }
    cout << endl;
}

// ����� ��� ������ ������� ���������� � ����������� ��������
void Store::outputEmployeesShortList()
{
    cout << "���������� ��������:" << endl;
    int employeeNumber = 1;
    for (auto& employee : employeesInStore) {
        if (employee.getFirstName() != "") {
            cout << employeeNumber << ") " << employee.getFirstName() << " " << employee.getLastName() << " - " << employee.getPosition() << endl;
            employeeNumber++;
        }
    }
}

// ����� ��� ������ ������ ���������� � ��������� ���������� � ��������
void Store::outputVinylRecords()
{
    cout << "\n\t~~���������� � ��������� ���������� � �������� \"" << getStoreName() << "\"~~" << endl;
    int recordNumber = 1; // ������� ��� ������ ���������
    cout << "---------------------------" << endl;
    for (auto& record : vinylRecordsInStore) {
        if (record.getAlbumName() != "") {
            cout << "��������� ��������� #" << recordNumber << endl;
            cout << "�������� �������: " << record.getAlbumName() << endl;
            cout << "�����������: " << record.getArtist() << endl;
            cout << "��� �������: " << record.getYear() << endl;
            cout << "����: " << record.getGenre() << endl;
            cout << "����: " << record.getPrice() << endl;
            cout << "���������� � �������: " << record.getQuantity() << endl;
            cout << "---------------------------" << endl;
            recordNumber++;
        }
    }
    cout << endl;
}

// ����� ��� ������ ������� ���������� � ��������� ���������� � ��������
void Store::outputVinylRecordsShortList()
{
    cout << "��������� � �������:" << endl;
    int recordNumber = 1;
    for (auto& record : vinylRecordsInStore) {
        if (record.getAlbumName() != "") {
            cout << recordNumber << ") " << record.getAlbumName() << " - " << record.getArtist() << " (" << record.getQuantity() << " ��.)" << endl;
            recordNumber++;
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

// ����� ��� ��������� ��������� � �������
void Store::setVinylRecordsInStore(VinylRecord* vinylRecordsArray)
{
    // ���������� ��� ��������� ��������� � �������� �� � ������ ��������
    for (int i = 0; i < numRecords; ++i) {
        vinylRecordsInStore[i] = vinylRecordsArray[i];
    }
}

// ����� ��� ��������� ����������� � ��������
void Store::setEmployeesInStore(Employee* employeeArray)
{
    // ���������� ���� ����������� � �������� �� � ������ ��������
    for (int i = 0; i < numEmployees; ++i) {
        employeesInStore[i] = employeeArray[i];
    }
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
