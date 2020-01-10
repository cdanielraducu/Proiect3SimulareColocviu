//
// Created by cdani on 1/10/2020.
//

#ifndef SIMULARECOLOCVIULAB13_ADMITERE_H
#define SIMULARECOLOCVIULAB13_ADMITERE_H


#include <vector>

#include "Candidat.h"

#include <iostream>



class Admitere {

    vector<Candidat> candidati;
    string facultate;

    //puteam sa fac aici formular pac pac, dar n-am reusit
    //void formular();

public:
    Admitere(const string &facultate);

public:
    // n-am facut ca si pentru sa dea pt doua facultate
    // nici legitimatie nu se pune automat inca
    void addCandidat();
    //nu are ordinea depunerii dosarelor
    void listareCandidatiInscrisi();

    void listareCandidatiAdmisi();



};


#endif //SIMULARECOLOCVIULAB13_ADMITERE_H
