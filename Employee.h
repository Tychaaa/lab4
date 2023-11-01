#pragma once

#include "Human.h"
#include <string>
#include <iostream>
using namespace std;

// ����� ��� ������� "��������� ��������"
class Employee {
private:

    Human person;       // ���������� ����� Human ��� ������������� ����������
    string position;    // ���������
    float salary;       // ��������

public:

    // ���������� ��� ����������
    Employee();
    // ���������� � �����������
    Employee(string first, string last, string pos, float sal);
    // ����������
    ~Employee();

    // ����� ��� ������ ���������� � ����������
    void outputEmployee();

    // ������� ��� ������
    void setFirstName(string first);
    void setLastName(string last);
    void setPosition(string position);
    void setSalary(float salary);

    // ������� ��� ������
    const string getFirstName();
    const string getLastName();
    const string getPosition();
    const float getSalary();
};

