#include "OnlineStore.h"

OnlineStore::OnlineStore() : Store(), website(""), store_email(""), store_phone(""), onlineUsersCount(0) {}

OnlineStore::~OnlineStore() {}

void OnlineStore::outputStore()
{
    Store::outputStore(); // �������� ����� �������� ������

    // ������� �������������� ���������� �� ������-��������
    cout << "\n\t~~���������� �� ������-��������~~" << endl;
    cout << "���� ��������: " << website << endl;
    cout << "Email ��������: " << store_email << endl;
    cout << "������� ��������: " << store_phone << endl;
    cout << "���������� ������� ������: " << onlineUsersCount << endl;

    cout << "�������������� ������ ������: ";
    for (const auto& method : supportedPaymentMethods) {
        cout << method << ", ";
    }
    cout << endl;
}
