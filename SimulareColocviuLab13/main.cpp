#include <iostream>
#include <unordered_map>
#include <bits/unordered_map.h>
#include <string>
#include "Admitere.h"

using namespace std;
int main() {


    Admitere admitere("FMI");
    admitere.addCandidat();
    admitere.addCandidat();
    admitere.addCandidat();

    admitere.listareCandidatiInscrisi();

    admitere.listareCandidatiAdmisi();

    return 0;
}
