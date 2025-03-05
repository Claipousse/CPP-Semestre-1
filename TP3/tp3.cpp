#include "tp3.h"
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
    int constexpr multiple(3);
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

void Exercice6() {
    double note1(0), note2(0), note3(0), moyenne(0);
    //Saisie de la premiere note
    do {
        cout << "Saisissez la 1ere note :";
        cin >> note1;
        cin.ignore();
    } while (note1 < 0 or note1 > 20);
    //Saisie de la deuxieme note
    do {
        cout << "Saisissez la 2eme note :";
        cin >> note2;
        cin.ignore();
    } while (note2 < 0 or note2 > 20);
    //Saisie de la troisieme note
    do {
        cout << "Saisissez la 3eme note :";
        cin >> note3;
        cin.ignore();
    } while (note3 < 0 or note3 > 20);
    moyenne = (note1 + note2 + note3) / 3;
    cout << fixed << setprecision(2) << "La moyenne est de : " << moyenne << endl;
}

void Exercice7() {
    int nb_classes(0), nb_eleves(0), nb_eleves_total(0);
    cout << "Saisissez le nombre de classes :";
    cin >> nb_classes;
    cin.ignore();
    for (int i = 0; i < nb_classes; i++) {
        cout << "Saisissez le nombre de eleves de la classe " << i+1 << " : ";
        cin >> nb_eleves;
        nb_eleves_total += nb_eleves;
    }
    cout << "Le nombre total d'eleves est de : "<< nb_eleves_total << endl;
}

void Exercice8() {
    int n(0);
    do {
        cout << "Saisissez un nombre multiple de 7 et 2 :";
        cin >> n;
        cin.ignore();
        if (n % 2 != 0 || n % 7 != 0) {
            cout << "Reponse incorrecte !" << endl;
        }
    } while (n % 2 != 0 || n % 7 != 0);
    cout << n << " est multiple de 2 et 7." << endl;
}

void Exercice9() {
    int nb_pierres = 0;
    int etages = 0;
    cout << "Combien de pierres y a t'il ?" <<endl;
    cin >> nb_pierres;

    if (nb_pierres == 0) {
        cout << "Avec aucune pierres il est impossible de faire un etage..." << endl;
        return;
    }

    for (int i = 1; nb_pierres >= i*i; i++) {
        nb_pierres = nb_pierres - i*i;
        etages++;
    }
    cout << "Il reste "<<nb_pierres<<" pierres, "<<etages<<" etages on etait realises"<<endl;
}

void Exercice10() {
    float n, somme = 0;
    float i = 0;
    while(true) {
        cout << "Saisissez un nombre positif (pour arreter la saisie, un nombre negatif) :";
        cin >> n;
        if (n < 0) break;
        somme += n;
        i++;
    }
    float moyenne = somme / i;
    cout << "La moyenne des nombres positifs saisis est de : "<<moyenne << endl;
}