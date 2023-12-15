#pragma once
#include "Store.h"

#include <vector>
using namespace std;

class OnlineStore :
    public Store
{
private:
    string website;
    string store_email;
    string store_phone;
    int onlineUsersCount;
    vector<string> supportedPaymentMethods;

public:

    // ���������� ��� ����������
    OnlineStore();
    // ���������� � �����������
    OnlineStore(string name, string address, VinylRecord* vinylRecordsArray, Employee* employeeArray, const vector<string>& paymentMethods);
    // ����������
    ~OnlineStore();

    // ����� ��� ������ ���������� � ��������
    void outputStore() override;

    // ������ ��� �������������� ������� ������
    const vector<string>& getSupportedPaymentMethods();
};

