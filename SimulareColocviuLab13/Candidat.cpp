//
// Created by cdani on 1/10/2020.
//

#include <iostream>
#include "Candidat.h"


Candidat::Candidat(const string &nume, const string &prenume, const string &cnp, double notaBac, bool supliment,
                   const string &programulDeStudiiAbsolvit, double mediaAbsolvireClasa, int facultateInvatamant, string legitimatie) : nume(
        nume), prenume(prenume), cnp(cnp), notaBac(notaBac), supliment(supliment), programulDeStudiiAbsolvit(
        programulDeStudiiAbsolvit), mediaAbsolvireClasa(mediaAbsolvireClasa), FacultateInvatamant(
        facultateInvatamant), legitimatie(legitimatie) {}

Candidat::Candidat(): nume(
        ""), prenume(""), cnp(""), notaBac(0.0), supliment(false), programulDeStudiiAbsolvit(
        ""), mediaAbsolvireClasa(0.0), FacultateInvatamant(0), legitimatie(0) {}


ostream &operator<<(ostream &out, Candidat &candidat) {

    out<<"==================================================\n";
    out<<"Candidatul cu legitimatie: "<<candidat.getLegitimatie()<<"\nnume: "<<candidat.getNume()<<" "<<candidat.getPrenume();
    out<<"\ncnp-ul: "<<candidat.getCnp()<<"\nnota de Bac: ";
    out<<candidat.getNotaBac(); // trb sa fac suplimentul si cu unde vrea sa intre facultatiile

    out<<"\nDoreste sa aplice la invatamant de tip "<<candidat.getFacultateInvatamant();
    out<<"==================================================\n";
    return out;
}

istream &operator>>(istream &in, Candidat &candidat) {

    cout<<"Ce nume aveti: "; string nume; in>>nume; in.clear();
    candidat.setNume(nume);
    cout<<"Ce prenume aveti: "; string prenume; in>>prenume; in.clear();
    candidat.setPrenume(prenume);
    cout<<"cnp ( pune ceva random ) : ";  string cnp; in>>cnp; in.clear();
    candidat.setCnp(cnp);
    cout<<"Ce nota ati obtinut la bac: "; double notaBac; in>>notaBac; in.clear();
    candidat.setNotaBac(notaBac);

    cout<<"La ce invatamant vreti sa aplicati ( 1 - ID | 2 - IF ): ";
    int invatamant; in>>invatamant; in.clear();
    candidat.setFacultateInvatamant(invatamant);


    cout<<"Aveti nevoie si de supliment ( vreti sa va inscrieti gen ca si la a doua facultate ) < 1 - Da | 2 - Nu > : ";
    int supliment; in>>supliment; in.clear();
    if(supliment == 1 ){
        candidat.setSupliment(true);
        cout<<"Ce program de studii ati facut: \n";
        string programStudii; in>>programStudii; in.clear();
        candidat.setProgramulDeStudiiAbsolvit(programStudii);
        cout<<"Cu ce medie ati terminat acel program de studii: \n";
        double medieProgram; in>>medieProgram; in.clear();
        candidat.setMediaAbsolvireClasa(medieProgram);
    } else if ( supliment == 2 ){
        candidat.setSupliment(false);
        candidat.setProgramulDeStudiiAbsolvit("");
        candidat.setMediaAbsolvireClasa(0.0);
    }


    return in;
}

const string &Candidat::getNume() const {
    return nume;
}

void Candidat::setNume(const string &nume) {
    Candidat::nume = nume;
}

const string &Candidat::getPrenume() const {
    return prenume;
}

void Candidat::setPrenume(const string &prenume) {
    Candidat::prenume = prenume;
}

const string &Candidat::getCnp() const {
    return cnp;
}

void Candidat::setCnp(const string &cnp) {
    Candidat::cnp = cnp;
}

double Candidat::getNotaBac() const {
    return notaBac;
}

void Candidat::setNotaBac(double notaBac) {
    Candidat::notaBac = notaBac;
}

bool Candidat::isSupliment() const {
    return supliment;
}

void Candidat::setSupliment(bool supliment) {
    Candidat::supliment = supliment;
}

const string &Candidat::getProgramulDeStudiiAbsolvit() const {
    return programulDeStudiiAbsolvit;
}

void Candidat::setProgramulDeStudiiAbsolvit(const string &programulDeStudiiAbsolvit) {
    Candidat::programulDeStudiiAbsolvit = programulDeStudiiAbsolvit;
}

double Candidat::getMediaAbsolvireClasa() const {
    return mediaAbsolvireClasa;
}

void Candidat::setMediaAbsolvireClasa(double mediaAbsolvireClasa) {
    Candidat::mediaAbsolvireClasa = mediaAbsolvireClasa;
}

int Candidat::getFacultateInvatamant() const {
    return FacultateInvatamant;
}

void Candidat::setFacultateInvatamant(int facultateInvatamant) {
    FacultateInvatamant = facultateInvatamant;
}

const string &Candidat::getLegitimatie() const {
    return legitimatie;
}

void Candidat::setLegitimatie(const string &legitimatie) {
    Candidat::legitimatie = legitimatie;
}

bool Candidat::isAdmis() const {
    return admis;
}

void Candidat::setAdmis(bool admis) {
    Candidat::admis = admis;
}

double Candidat::getNotaProbaScrisa() const {
    return notaProbaScrisa;
}

void Candidat::setNotaProbaScrisa(double notaProbaScrisa) {
    Candidat::notaProbaScrisa = notaProbaScrisa;
}

double Candidat::getNotaProbaOrala() const {
    return notaProbaOrala;
}

void Candidat::setNotaProbaOrala(double notaProbaOrala) {
    Candidat::notaProbaOrala = notaProbaOrala;
}

double Candidat::getMa() const {
    return MA;
}

void Candidat::setMa(double ma) {
    MA = ma;
}










