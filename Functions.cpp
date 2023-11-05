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

void addVinylRecordsToStore(Store& store)
{
    cout << "\n\t~~���������� ����� ��������� � �������~~" << endl;

    cout << "-------------------------------------------" << endl;
    int numNewRecords;
    cout << "������� ���������� ����� ��������� ���������: ";
    cin >> numNewRecords;

    int newTotalRecords = numRecords + numNewRecords;

    // �������� ��������� �� ������ ��������� ��������� � ��������
    VinylRecord* oldRecords = store.getVinylRecordsInStore();

    // ������� ��������� ������, ���� ��������� ������������ ���������
    VinylRecord* tempRecords = new VinylRecord[newTotalRecords];

    // �������� ������������ ��������� �� ��������� ������
    for (int i = 0; i < numRecords; ++i) {
        tempRecords[i] = oldRecords[i];
    }

    cout << "-------------------------------------------" << endl;
    // ������ � ��������� ����� ��������� �� ��������� ������
    for (int i = numRecords; i < newTotalRecords; ++i) {
        // ���� ������ � ��������� ���������
        string album, artist, genre;
        int year, quantity;
        float price;

        cout << "��������� ��������� #" << i + 1 << endl;
        inputVinylRecord(album, artist, year, genre, price, quantity);
        cout << "-------------------------------------------" << endl;

        // ������� ����� ��������� � ��������� �� ��������� ������
        tempRecords[i] = VinylRecord(album, artist, year, genre, price, quantity);
    }

    // ��������� ���������� ��������� � ��������
    numRecords = newTotalRecords;

    // ��������� ������ ��������� �������� �� ����� ��������� ������
    store.setVinylRecordsInStore(tempRecords);

    delete[] tempRecords;
}

void addEmployeesToStore(Store& store)
{
    cout << "\n\t~~���������� ����� ����������� � �������~~" << endl;

    cout << "-------------------------------------------" << endl;
    int numNewEmployees;
    cout << "������� ���������� ����� �����������: ";
    cin >> numNewEmployees;

    int newTotalEmployees = numEmployees + numNewEmployees;

    // �������� ��������� �� ������ ����������� � ��������
    Employee* oldEmployees = store.getEmployeesInStore();

    // ������� ��������� ������, ���� ��������� ������������ �����������
    Employee* tempEmployees = new Employee[newTotalEmployees];

    // �������� ������������ ����������� �� ��������� ������
    for (int i = 0; i < numEmployees; ++i) {
        tempEmployees[i] = oldEmployees[i];
    }

    cout << "-------------------------------------------" << endl;
    // ������ � ��������� ����� ����������� �� ��������� ������
    for (int i = numEmployees; i < newTotalEmployees; ++i) {
        // ���� ������ � ����������
        string firstName, lastName, position;
        float salary;

        cout << "��������� #" << i + 1 << ":" << endl;
        inputEmployee(&firstName, &lastName, &position, &salary);
        cout << "-------------------------------------------" << endl;

        // ������� ������ ���������� � ��������� �� ��������� ������
        tempEmployees[i] = Employee(firstName, lastName, position, salary);
    }

    // ��������� ���������� ����������� � ��������
    numEmployees = newTotalEmployees;

    // ��������� ������ ����������� �������� �� ����� ��������� ������
    store.setEmployeesInStore(tempEmployees);

    delete[] tempEmployees;
}

void removeVinylRecord(Store& store)
{
    cout << "\n\t~~�������� ��������� ��������� �� ��������~~" << endl;

    cout << "-------------------------------------------" << endl;
    store.outputVinylRecordsShortList();
    cout << "-------------------------------------------" << endl;

    int index;
    cout << "�������� ��������� ��������� ��� ��������: ";
    cin >> index;

    // �������� ��������� �� ������ ��������� ��������� � ��������
    VinylRecord* vinylRecords = store.getVinylRecordsInStore();

    // ���������, ��� ������ ��������� � ���������� ��������
    if (index >= 1 && index <= numRecords)
    {
        // ������� ���������, ������� � ���������� �������, ����� "��������" ��������� ���������
        for (int i = index - 1; i < numRecords; ++i)
        {
            vinylRecords[i] = vinylRecords[i + 1];
        }

        // ��������� ���������� ��������� ��������� � ��������
        numRecords--;

        // ��������� ������ ��������� ��������� ��������
        store.setVinylRecordsInStore(vinylRecords);

        cout << "��������� ��������� ������� �������!" << endl;
    }
    else
    {
        cout << "������������ ������ ��������� ���������." << endl;
    }

    cout << "-------------------------------------------" << endl;
}

void removeEmployee(Store& store)
{
    cout << "\n\t~~�������� ����������� �� ��������~~" << endl;

    cout << "-------------------------------------------" << endl;
    store.outputEmployeesShortList();
    cout << "-------------------------------------------" << endl;

    int index;
    cout << "�������� ���������� ��� ��������: ";
    cin >> index;

    // �������� ��������� �� ������ ����������� � ��������
    Employee* employees = store.getEmployeesInStore();

    // ���������, ��� ������ ��������� � ���������� ��������
    if (index >= 1 && index <= numEmployees)
    {
        // ������� �����������, ������� � ���������� �������, ����� "��������" ���������� ����������
        for (int i = index - 1; i < numEmployees; ++i)
        {
            employees[i] = employees[i + 1];
        }

        // ��������� ���������� ����������� � ��������
        numEmployees--;

        // ��������� ������ ����������� ��������
        store.setEmployeesInStore(employees);

        cout << "��������� ������� ������!" << endl;
    }
    else
    {
        cout << "������������ ������ ����������." << endl;
    }
    cout << "-------------------------------------------" << endl;
}

// ������� ��� ����� ���������� � ��������� ��������� (������ �������� ����� ������)
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

// ������� ��� ����� ���������� � ������� (������ �������� ����� ���������)
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