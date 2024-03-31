#include <iostream>
using namespace std;
#include "windows.h"
#include <string>

struct Microprocessor {
    string name;
    string company;
    double frequency;
    int contacts;
};

void display_microprocessors(const Microprocessor* processors, int numProcessors) {
    cout << "Microprocessor List:\n";
    for (int i = 0; i < numProcessors; ++i) {
        cout << "Name: " << processors[i].name << endl;
        cout << "Company: " << processors[i].company << endl;
        cout << "Frequency: " << processors[i].frequency << " GHz" << endl;
        cout << "Contacts: " << processors[i].contacts << endl;
        cout << endl;
    }
}

void change_company(Microprocessor* processors, int numProcessors, const string& oldCompany, const string& newCompany) {
    for (int i = 0; i < numProcessors; ++i) {
        if (processors[i].company == oldCompany) {
            processors[i].company = newCompany;
        }
    }
}

int main() {
    const int numProcessors = 4;
    Microprocessor processors[numProcessors] = {
        {"Pentium", "AMD", 3.5, 1155},
        {"Celeron", "IDC", 2.8, 775},
        {"Duron", "Texas Instrument", 2.0, 754},
        {"Athlon", "Motorola", 4.0, 1200}
    };

    display_microprocessors(processors, numProcessors);

    change_company(processors, numProcessors, "AMD", "Celeron");

    cout << "After changing company for AMD processors to Celeron:";
    display_microprocessors(processors, numProcessors);

    return 0;
}