#pragma once

#include <string>
#include <iostream>
using namespace std;

// ����� ��� ������� "��������� ���������"
class VinylRecord {
private:

    string albumName;   // �������� �������
    string artist;      // �����������
    int year;           // ��� �������
    string genre;       // ����
    float price;        // ����
    int quantity;       // ���������� � �������

public:

    // ���������� ��� ����������
    VinylRecord();
    // ���������� � �����������
    VinylRecord(string album, string artist, int year, string genre, float price, int quantity);
    // ����������
    ~VinylRecord();

    // ����� ��� ������ ���������� � ��������� ���������
    void outputVinylRecord();

    // ������� ��� ������
    void setAlbumName(string albumName);
    void setArtist(string artist);
    void setYear(int year);
    void setGenre(string genre);
    void setPrice(float price);
    void setQuantity(int quantity);

    // ������� ��� ������
    const string getAlbumName();
    const string getArtist();
    const int getYear();
    const string getGenre();
    const float getPrice();
    const int getQuantity();
};

