#ifndef TERMIN_H
#define TERMIN_H
#include <iostream>

using namespace std;

class Termin
{
private:
    string datumUhrzeit;
    string patient;
    bool geloescht = false;

public:
    Termin(string patient, string datumUhrzeit);
    string getDatumUhrzeit() const;
    string getPatient() const;
    void setGeloescht(bool geloescht);
    bool getGeloescht();
    void setPatient(const string &newPatient);
};

#endif // TERMIN_H
