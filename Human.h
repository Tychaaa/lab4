#pragma once

#include <string>
using namespace std;

// ����� ��� ������� "�������"
class Human {
private:

    string firstName;   // ���
    string lastName;    // �������

public:

    // ����������� ��� ����������
    Human();
    // ���������� � �����������
    Human(string first, string last);
    // ����������
    ~Human();

    // ������� ��� ������
    void setFirstName(string firstName);
    void setLastName(string lastName);

    // ������� ��� ������
    const string getFirstName();
    const string getLastName();
};

