#include "Employee.h"

// ���������� ��� ����������
Employee::Employee() : position(""), salary(0) {}

// ���������� � �����������
Employee::Employee(string first, string last, string pos, float sal)
    : person(first, last), position(pos), salary(sal) {}

// ����������
Employee::~Employee() {}

// ����������� ������ ��� ������ ���������� � ����������
void Employee::outputEmployee()
{
    cout << "��� ����������: " << person.getFirstName() << " " << person.getLastName() << endl;
    cout << "���������: " << position << endl;
    cout << "��������: " << salary << endl;
    cout << endl;
}

// ����������� ������ ��� ��������� ����� ����������
void Employee::setFirstName(string first)
{
    person.setFirstName(first);
}

// ����������� ������ ��� ��������� ������� ����������
void Employee::setLastName(string last)
{
    person.setLastName(last);
}

// ����������� ������ ��� ��������� ��������� ����������
void Employee::setPosition(string position)
{
    this->position = position;
}

// ����������� ������ ��� ��������� �������� ����������
void Employee::setSalary(float salary)
{
    this->salary = salary;
}

// ����������� ������ ��� ��������� ����� ����������
const string Employee::getFirstName()
{
    return person.getFirstName();
}

// ����������� ������ ��� ��������� ������� ����������
const string Employee::getLastName()
{
    return person.getLastName();
}

// ����������� ������ ��� ��������� ��������� ����������
const string Employee::getPosition()
{
    return position;
}

// ����������� ������ ��� ��������� �������� ����������
const float Employee::getSalary()
{
    return salary;
}