//
// Created by cdani on 1/10/2020.
//

#ifndef SIMULARECOLOCVIULAB13_CANDIDAT_H
#define SIMULARECOLOCVIULAB13_CANDIDAT_H

using namespace std;
#include <string>

class Candidat {

    string nume;
    string prenume;
    string cnp;
    double notaBac;
    bool supliment; // daca e true - atunci vine ca sa se inscrie ca si la a doua facultate
    // daca e false atunci se inscrie aici ca la prima facultate
    string programulDeStudiiAbsolvit;
    double mediaAbsolvireClasa;

    string legitimatie;
    int FacultateInvatamant; // 1 - ID 2 - IF

    bool admis;
    double notaProbaScrisa;
    double notaProbaOrala;
    double MA;



public:
    Candidat(const string &nume, const string &prenume, const string &cnp, double notaBac, bool supliment,
             const string &programulDeStudiiAbsolvit, double mediaAbsolvireClasa, int facultateInvatamant, string legitimatie);

    Candidat();

    friend ostream &operator<<(ostream &out, Candidat & candidat);
    friend istream &operator>>(istream &in, Candidat &candidat);

    const string &getNume() const;

    void setNume(const string &nume);

    const string &getPrenume() const;

    void setPrenume(const string &prenume);

    const string &getCnp() const;

    void setCnp(const string &cnp);

    double getNotaBac() const;

    void setNotaBac(double notaBac);

    bool isSupliment() const;

    void setSupliment(bool supliment);

    const string &getProgramulDeStudiiAbsolvit() const;

    void setProgramulDeStudiiAbsolvit(const string &programulDeStudiiAbsolvit);

    double getMediaAbsolvireClasa() const;

    void setMediaAbsolvireClasa(double mediaAbsolvireClasa);

    int getFacultateInvatamant() const;

    void setFacultateInvatamant(int facultateInvatamant);

    const string &getLegitimatie() const;

    void setLegitimatie(const string &legitimatie);

    bool isAdmis() const;

    void setAdmis(bool admis);

    double getNotaProbaScrisa() const;

    void setNotaProbaScrisa(double notaProbaScrisa);

    double getNotaProbaOrala() const;

    void setNotaProbaOrala(double notaProbaOrala);

    double getMa() const;

    void setMa(double ma);


};


#endif //SIMULARECOLOCVIULAB13_CANDIDAT_H
