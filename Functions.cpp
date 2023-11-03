#include "Functions.h"

Store inputStore() 
{
    cout << "\n\t~~�������� ��������~~" << endl;
    cout << "-------------------------------------------" << endl;

    string name, address;

    cout << "������� �������� ��������: ";
    getline(cin, name);

    cout << "������� ����� ��������: ";
    getline(cin, address);

    cout << "-------------------------------------------" << endl;

    cout << "������� ���������� ��������� ���������: ";
    cin >> numRecords;

    cout << "-------------------------------------------" << endl;

    // ������������ ������ �������� ������ VinylRecord
    VinylRecord* vinylRecordsArray = new VinylRecord[numRecords];

    for (int i = 0; i < numRecords; ++i) {
        // ���� ������ � ��������� ���������
        string album, artist, genre;
        int year, quantity;
        float price;

        cout << "��������� ��������� #" << i + 1 << endl;
        inputVinylRecord(album, artist, year, genre, price, quantity);

        // �������� ������� � ���������� ��� � ������
        vinylRecordsArray[i] = VinylRecord(album, artist, year, genre, price, quantity);

        cout << "-------------------------------------------" << endl;
    }

    cout << "������� ���������� ����������� ��������: ";
    cin >> numEmployees;

    cout << "-------------------------------------------" << endl;

    // ������������ ������ �������� ������ Employee
    Employee* employeeArray = new Employee[numEmployees];

    for (int i = 0; i < numEmployees; i++) {
        // ���� ������ � ����������
        string firstName, lastName, position;
        float salary;

        cout << "��������� #" << i + 1 << ":" << endl;
        inputEmployee(&firstName, &lastName, &position, &salary);

        // �������� ������� � ���������� ��� � ������
        employeeArray[i] = Employee(firstName, lastName, position, salary);

        cout << "-------------------------------------------" << endl;
    }

    // ������� ������� � �������������� ������������ � ����������� � ���������� ���
    Store store(name, address, vinylRecordsArray, employeeArray);

    delete[] vinylRecordsArray;
    delete[] employeeArray;

    // ���������� ��������� ������ ��������
    return store;
}

// ������� ��� ����� ���������� � ��������� ���������
void inputVinylRecord(string& album, string& artist, int& year, string& genre, float& price, int& quantity)
{
    cin.ignore();

    cout << "������� �������� �������: ";
    getline(cin, album);

    cout << "������� �����������: ";
    getline(cin, artist);

    cout << "������� ��� �������: ";
    cin >> year;
    cin.ignore();

    cout << "������� ����: ";
    getline(cin, genre);

    cout << "������� ����: ";
    cin >> price;

    cout << "������� ���������� � �������: ";
    cin >> quantity;
}

// ������� ��� ����� ���������� � �������
void inputCustomer(string* firstName, string* lastName, float* money, string* address)
{
    cout << "������� ��� �������: ";
    cin >> *firstName;

    cout << "������� ������� �������: ";
    cin >> *lastName;

    cout << "������� ���������� ����� �������: ";
    cin >> *money;

    cout << "������� ����� �������� �������: ";
    cin.ignore(); // ������� ����� ��� ���������� ������
    getline(cin, *address);

    cout << endl;
}

// ������� ��� ����� ���������� � ���������� ��������
void inputEmployee(string* firstName, string* lastName, string* position, float* salary) 
{

    cout << "������� ��� ����������: ";
    cin >> *firstName;

    cout << "������� ������� ����������: ";
    cin >> *lastName;

    cout << "������� ��������� ����������: ";
    cin.ignore();
    getline(cin, *position);

    cout << "������� �������� ����������: ";
    cin >> *salary;
}