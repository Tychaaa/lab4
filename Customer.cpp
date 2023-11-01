#include "Customer.h"

// ����������� ��� ����������
Customer::Customer() : money(0), address("") {}

// ���������� � �����������
Customer::Customer(string first, string last, float money, string addr)
    : person(first, last), money(money), address(addr) {}

// ����������
Customer::~Customer() {}

// ����������� ������ ��� ������ ���������� � �������
void Customer::outputCustomer()
{
    cout << person.getFirstName() << " " << person.getLastName() << endl;
}

// ����������� ������ ��� ��������� ����� �������
void Customer::setFirstName(string first)
{
    person.setFirstName(first);
}

// ����������� ������ ��� ��������� ������� �������
void Customer::setLastName(string last)
{
    person.setLastName(last);
}

// ����������� ������ ��� ��������� ����� �������
void Customer::setMoney(float money)
{
    this->money = money;
}

// ����������� ������ ��� ��������� ������� �������
void Customer::setAddress(string address)
{
    this->address = address;
}

// ����������� ������ ��� ��������� ����� �������
const string Customer::getFirstName()
{
    return person.getFirstName();
}

// ����������� ������ ��� ��������� ������� �������
const string Customer::getLastName()
{
    return person.getLastName();
}

// ����������� ������ ��� ��������� ����� �������
const float Customer::getMoney()
{
    return money;
}

// ����������� ������ ��� ��������� ������� �������
const string Customer::getAddress()
{
    return address;
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