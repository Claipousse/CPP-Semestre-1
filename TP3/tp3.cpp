#include "tp3.h"
#include <iostream>
using namespace std;

void Exercice1() {
    int a(0), b(0);
    cout << "Saisissez un entier A et B :";
    cin >> a >> b;
    cin.ignore();
    if (a > b) {
        cout << a << " est le plus grand nombre" << endl;
    }
    else if (a < b) {
        cout << b << " est le plus grand nombre" << endl;
    }
}

void Exercice2() {
    double L(0), l(0), perimetre(0), aire(0);
    cout << "Saisissez la longueur du rectangle :";
    cin >> L;
    cin.ignore();
    cout << "Saisissez la largeur du rectangle :";
    cin >> l;
    cin.ignore();
    perimetre = (L + l) * 2;
    aire = L * l;
    cout << "Perimetre : " << perimetre << endl << "Aire : " << aire << endl;
}

void Exercice3() {
    int const multiple(3);
    int n(0);
    cout << "Saisissez un entier N :";
    cin >> n;
    cin.ignore();
    if (n % multiple == 0 and n >= 10) {
        cout << "N est un multiple de 3 et superieur ou egal à 10." << endl;
    }
    if (n % multiple == 0 and n < 10) {
        cout << "N est un multiple de 3 mais est inferieur à 10." << endl;
    }
    if (n % multiple != 0 and n >= 10) {
        cout << "N n'est pas un multiple de 3 et est superieur ou egal à 10." << endl;
    }
    if (n % multiple != 0 and n < 10) {
        cout << "N n'est pas un multiple de 3 et est inferieur à 10." << endl;
    }
}

void Exercice4() {
    int age(0);
    char choix;
    do {
        cout << "Saisissez votre age :";
        cin >> age;
        cin.ignore();
        if (age < 0) {
            cout << "L'age saisit est incorrect, veuillez reessayer";
        }
    } while (age < 0);
    if (age >= 0 and age < 12) {
        cout << "Tarif enfant : 4 euros" << endl;
        return;
    }
    if (age >= 12 and age <= 17) {
        cout << "Tarif jeune : 6 euros" << endl;
        return;
    }
    if (age > 17 and age < 27) {
        cout << "Etes-vous etudiant? (y/n)";
        cin >> choix;
        cin.ignore();
        switch (choix) {
            case 'y':
                cout << "Tarif etudiant : 6 euros" << endl;
                return;
            case 'n':
                cout << "Tarif standard : 9 euros" << endl;
                return;
            default :
                cout << "Choix saisit incorrect..." << endl;
                return;
        }
    }
    if (age >= 65) {
        cout << "Tarif senior : 6 euros" << endl;
    }
    else {
        cout << "Tarif standard : 9 euros" << endl;
    }
}

void Exercice5() {
    int choix(0);
    cout << "============================DISTRIBUTEUR DE BOISSONS============================" <<endl;
    cout << "Choix disponibles :"<<endl;
    cout << "1. Ice Tea"<<endl;
    cout << "2. Eau Vittel"<<endl;
    cout << "3. Coca-Cola"<<endl;
    cout << "10. Cafe Cappucino Noisette"<<endl;
    cout << "11. Chocolat chaud" << endl;
    cout << "Saisissez votre choix :";
    cin >> choix;
    cin.ignore();
    switch (choix) {
        case 1:
            cout << "Ice Tea";
        break;
        case 2:
            cout << "Eau Vittel";
        break;
        case 3:
            cout << "Coca-Cola";
        break;
        case 10:
            cout << "Chocolat chaud";
        break;
        case 11:
            cout << "Noisette";
        break;
        default:
            cout << "Choix saisit incorrect..." << endl;
        break;
    }
}


