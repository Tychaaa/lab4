#include "Functions.h"

// ������� ��� ����� ���������� � ��������� ���������
void inputVinylRecord(string* album, string* artist, int* year, string* genre, float* price, int* quantity)
{
    cin.ignore();

    cout << "������� �������� �������: ";
    getline(cin, *album);

    cout << "������� �����������: ";
    getline(cin, *artist);

    cout << "������� ��� �������: ";
    cin >> *year;
    cin.ignore();

    cout << "������� ����: ";
    getline(cin, *genre);

    cout << "������� ����: ";
    cin >> *price;

    cout << "������� ���������� � �������: ";
    cin >> *quantity;

    cout << endl;
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

    cout << endl;
}