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

Order* inputOrders(Store store)
{
    cout << "\n\t~~�������� ������~~" << endl;

    cout << "-------------------------------------------" << endl;
    cout << "������� ���������� �������: ";
    cin >> numOrders;
    cin.ignore();

    Order* ordersArray = new Order[numOrders];

    cout << "-------------------------------------------" << endl;
    for (int i = 0; i < numOrders; ++i) {
        cout << "\t����� #" << i + 1 << ":" << endl;

        string orderDate;

        cout << "-------------------------------------------" << endl;
        cout << "������� ���� ������: ";
        getline(cin, orderDate);

        int employeeIndex;
        bool isValidChoice = false;

        cout << "-------------------------------------------" << endl;
        
        // �������� ��������� �� ������ ����������� � ��������
        Employee* employees = store.getEmployeesInStore();
        store.outputEmployeesShortList();

        cout << "�������� ����������, �������������� �����: ";

        do {
            int choice;
            cin >> choice;

            if (choice >= 1 && choice <= numEmployees) {
                employeeIndex = choice - 1;
                isValidChoice = true;
            }
            else {
                cout << "������������ �����." << endl;
            }
        } while (!isValidChoice);

        string clientFirstName, clientLastName, clientAddress;
        float clientMoney;

        cout << "-------------------------------------------" << endl;
        cout << "������� ���������� � �������, ����������� �����:" << endl;
        inputCustomer(&clientFirstName, &clientLastName, &clientMoney, &clientAddress);

        int vinylIndex;
        isValidChoice = false;

        cout << "-------------------------------------------" << endl;
        
        // �������� ��������� �� ������ ��������� ��������� � ��������
        VinylRecord* vinylRecords = store.getVinylRecordsInStore();
        store.outputVinylRecordsShortList();

        cout << "�������� ��������� ��������� ��� ������: ";

        do {
            int choice;
            cin >> choice;

            if (choice >= 1 && choice <= numRecords) {
                vinylIndex = choice - 1;
                isValidChoice = true;
            }
            else {
                cout << "������������ �����." << endl;
            }
        } while (!isValidChoice);

        cout << "-------------------------------------------" << endl;
        int quantityOrdered;
        do {
            cout << "������� ���������� ���������� ��������� ���������: ";
            cin >> quantityOrdered;
            cin.ignore();
            cout << "-------------------------------------------" << endl;

            if (!checkAvailability(vinylRecords[vinylIndex], quantityOrdered, store)) {
                cout << "������������ ��������� � �������. ����������, �������� ����������." << endl;
            }
        } while (!checkAvailability(vinylRecords[vinylIndex], quantityOrdered, store));

        float totalCost = vinylRecords[vinylIndex].getPrice() * quantityOrdered;

        ordersArray[i] = Order(orderDate, employees[employeeIndex], Customer(clientFirstName, clientLastName, clientMoney, clientAddress), vinylRecords[vinylIndex], quantityOrdered, totalCost);
    }

    return ordersArray;
}

void outputOrders(Order* ordersArray) {
    cout << "\n\t~~���������� � �������~~" << endl;
    cout << "-------------------------------------------" << endl;

    for (int i = 0; i < numOrders; ++i) {
        cout << "����� #" << i + 1 << ":" << endl;
        ordersArray[i].outputOrder();
        cout << "-------------------------------------------" << endl;
    }
}

bool checkAvailability(VinylRecord& orderedRecord, int orderedQuantity, Store& store) {
    // �������� ������ ��������� ��������� � ��������
    VinylRecord* vinylRecordsInStore = store.getVinylRecordsInStore();

    // ����� ����������� ������� � ��������
    for (int i = 0; i < numRecords; ++i) {
        if (vinylRecordsInStore[i].getAlbumName() == orderedRecord.getAlbumName() &&
            vinylRecordsInStore[i].getArtist() == orderedRecord.getArtist()) {
            // ������ ���������� ������ � ��������
            // ���������, ���� �� � ������� ����������� ���������� ���������� ���������
            if (vinylRecordsInStore[i].getQuantity() >= orderedQuantity) {
                // ����������� ���������� ���������� ��������� � �������
                return true;
            }
            else {
                // ������������� ���������� ���������� ��������� � �������
                return false;
            }
        }
    }

    // ���������� ������ �� ������ � ��������
    return false;
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