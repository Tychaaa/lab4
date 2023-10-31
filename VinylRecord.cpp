#include "VinylRecord.h"

// ���������� ��� ����������
VinylRecord::VinylRecord() : albumName(""), artist(""), year(0), genre(""), price(0), quantity(0) {}

// ���������� � �����������
VinylRecord::VinylRecord(string album, string artist, int year, string genre, float price, int quantity)
    : albumName(album), artist(artist), year(year), genre(genre), price(price), quantity(quantity) {}

// ����������
VinylRecord::~VinylRecord() {}

// ����������� ������ ��� ������ ���������� � ��������� ���������
void VinylRecord::outputVinylRecord()
{
    cout << "�������� �������: " << albumName << endl;
    cout << "�����������: " << artist << endl;
    cout << "��� �������: " << year << endl;
    cout << "����: " << genre << endl;
    cout << "����: " << price << endl;
    cout << "���������� � �������: " << quantity << endl;
    cout << endl;
}

// ����������� ������ ��� ��������� �������� ��������� ���������
void VinylRecord::setAlbumName(string albumName)
{
    this->albumName = albumName;
}

// ����������� ������ ��� ��������� ����������� ��������� ���������
void VinylRecord::setArtist(string artist)
{
    this->artist = artist;
}

// ����������� ������ ��� ��������� ���� ������� ��������� ���������
void VinylRecord::setYear(int year)
{
    this->year = year;
}

// ����������� ������ ��� ��������� ����� ��������� ���������
void VinylRecord::setGenre(string genre)
{
    this->genre = genre;
}

// ����������� ������ ��� ��������� ��������� ��������� ���������
void VinylRecord::setPrice(float price)
{
    this->price = price;
}

// ����������� ��� ��������� ���������� ��������� ���������
void VinylRecord::setQuantity(int quantity)
{
    this->quantity = quantity;
}

// ����������� ������ ��� ��������� �������� ��������� ���������
const string VinylRecord::getAlbumName()
{
    return albumName;
}

// ����������� ������ ��� ��������� ����������� ��������� ���������
const string VinylRecord::getArtist()
{
    return artist;
}

// ����������� ������ ��� ��������� ���� ������� ��������� ���������
const int VinylRecord::getYear()
{
    return year;
}

// ����������� ������ ��� ��������� ����� ��������� ���������
const string VinylRecord::getGenre()
{
    return genre;
}

// ����������� ������ ��� ��������� ��������� ��������� ���������
const float VinylRecord::getPrice()
{
    return price;
}

// ����������� ��� ��������� ���������� ��������� ���������
const int VinylRecord::getQuantity()
{
    return quantity;
}

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
