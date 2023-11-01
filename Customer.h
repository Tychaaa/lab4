#pragma once

#include "Human.h"
#include <string>
#include <iostream>
using namespace std;

// ����� ��� ������� "������"
class Customer {
private:

    Human person;       // ���������� ����� Human ��� ������������� �������
    float money;        // ���/�� �����
    string address;     // ����� ��������

public:

    // ����������� ��� ����������
    Customer();
    // ���������� � �����������
    Customer(string first, string last, float money, string addr);
    // ����������
    ~Customer();

    // ����� ��� ������ ���������� � �������
    void outputCustomer();

    // ������� ��� ������
    void setFirstName(string first);
    void setLastName(string last);
    void setMoney(float money);
    void setAddress(string address);

    // ������� ��� ������
    const string getFirstName();
    const string getLastName();
    const float getMoney();
    const string getAddress();
};
