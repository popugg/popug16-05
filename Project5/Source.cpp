#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
struct popug
{
    int id;
    char text[255];
    int lenght;
    int homka;
    void Show() {
        cout << "Age: " << homka << endl;
    }
};

struct darling
{
    char name[20];
    void Show() {
        cout << "Name: " << name << endl;
        cout << "darling look like cucumber" << endl;
    }
};

struct mike {
    double salary;
    void Show() {
        cout << "nya ichi ni san : " << salary << endl;
    }
};

struct masyanya {
    int age;
    void Show() {
        cout << "xiao genshin : " << age << endl;
    }
};

template<typename T>

void SaveToFile(T obj, string filename)
{
    fstream file(filename, ios::out | ios::binary);
    if (file.is_open())
    {
        file.write((char*)&obj, sizeof(T));
        cout << "Saved!" << endl;
    }
    else
    {
        cout << "Error!" << endl;
    }
}
template<typename T>
void LoadFormFile(T& obj, string filename)
{
    fstream file(filename, ios::in | ios::binary);
    if (file.is_open())
    {
        file.read((char*)&obj, sizeof(T));
        cout << "Load!" << endl;
    }
    else
    {
        cout << "Error!" << endl;
    }
}
int main()
{
    char switch_on;
    popug popugg;
    darling darlingg;
    mike mikee;
    masyanya masyanyaa;
    do {
        system("cls");
        cout << "1 - Input info" << endl;
        cout << "2 - Show info" << endl;
        cout << "3 - Save info" << endl;
        cout << "4 - Load info" << endl;
        cout << "Enter->" << endl;
        switch (switch_on)
        {
        case 1:
        {
            popugg.id = 0;
            gets_s(popugg.text, 255);
            popugg.lenght = strlen(popugg.text);
        }break;
        case 2:
        {
            mikee.Show();
            masyanyaa.Show();
            popugg.Show();
            darlingg.Show();
        }break;
        case 3:
        {
            SaveToFile<masyanya>(masyanyaa, "masyanyaa.bin");
            SaveToFile<mike>(mikee, "mikee.bin");
            SaveToFile<popug>(popugg, "popugg.bin");
            SaveToFile<darling>(darlingg, "darlingg.bin");
        }break;
        case 4:
        {
            LoadFormFile<masyanya>(masyanyaa, "masyanyaa.bin");
            LoadFormFile<popug>(popugg, "popugg.bin");
            LoadFormFile<darling>(darlingg, "darlingg.bin");
            LoadFormFile<mike>(mikee, "mikee.bin");
        }break;
        default:
            cout << "Choose error";
            break;
        }
        system("pause");
    } while (true);
    return 0;

    popug popugg;
    darling darlingg;
    mike mikee;
    masyanya masyanyaa;

    masyanyaa.Show();
    mikee.Show();
    popugg.Show();
    darlingg.Show();

    LoadFormFile<masyanya>(masyanyaa, "masyanyaa.bin");
    LoadFormFile<popug>(popugg, "popugg.bin");
    LoadFormFile<darling>(darlingg, "darlingg.bin");
    LoadFormFile<mike>(mikee, "mikee.bin");

    masyanyaa.Show();
    mikee.Show();
    popugg.Show();
    darlingg.Show();

    /*SaveToFile<masyanya>(masyanyaa, "masyanyaa.bin");*/
    /*SaveToFile<popug>(popugg, "popugg.bin");*/
    //SaveToFile<darling>(darlingg, "darlingg.bin");
    //SaveToFile<mike>(mikee, "mikee.bin");
    return 0;
}