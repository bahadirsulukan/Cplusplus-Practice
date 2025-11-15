#include "termin.h"
using namespace std;

bool Termin::getGeloescht()
{
    return geloescht;
}

void Termin::setGeloescht(bool geloescht)
{
    this->geloescht = geloescht;
}

Termin::Termin(string patient, string datumUhrzeit)
{
    this->patient = patient;
    this->datumUhrzeit = datumUhrzeit;
}

string Termin::getDatumUhrzeit() const
{
    return datumUhrzeit;
}

string Termin::getPatient() const
{
    return patient;
}
