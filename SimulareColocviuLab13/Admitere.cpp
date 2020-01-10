//
// Created by cdani on 1/10/2020.
//

#include "Admitere.h"

void Admitere::addCandidat() {
    Candidat candidat;
    cin>>candidat;
    //candidat.setLegitimatie(legitimatie);

    if(candidat.getFacultateInvatamant() == 1){
        cout<<"Ce nota a obtinut la proba scrisa?";
        double notaScrisa; cin>>notaScrisa; cin.clear();
        candidat.setNotaProbaScrisa(notaScrisa);
        candidat.setNotaProbaOrala(0.0);
        candidat.setMa(0.8*notaScrisa + 0.2 * candidat.getNotaBac());
    } else if(candidat.getFacultateInvatamant() == 2){
        cout<<"Ce nota a obtinut la proba orala?";
        double notaOrala; cin>>notaOrala; cin.clear();
        candidat.setNotaProbaOrala(notaOrala);
        candidat.setNotaProbaScrisa(0.0);
        candidat.setMa(0.6*notaOrala + 0.4 * candidat.getNotaBac());
    }
    if(candidat.getMa() >= 5.0) {
        candidat.setAdmis(true);
    } else {
        candidat.setAdmis(false);
    }

    cout<<candidat;

    cout<<"A fost adaugat un nou candidat";

}

void Admitere::listareCandidatiInscrisi() {
    for(int i{0}; i< candidati.size(); i++){
        cout<<candidati[i];
        cout<<endl;
    }
}

void Admitere::listareCandidatiAdmisi() {
    for(int i{0}; i< candidati.size(); i++){
        if(candidati[i].isAdmis()){
            cout<<candidati[i];
            cout<<endl;
        }

    }
}

Admitere::Admitere(const string &facultate) : facultate(facultate) {}
