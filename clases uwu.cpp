// clases uwu.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

class raza {
    public: 
        string lightner = "Lightner";
        string darkner = "Darkner";
        
};

class name : public raza {
    public:
        string nombre = "Kris";
        void dialogo() {
            cout << "...";
        }
        string nombre2 = "Susie";
        void dialogo2() {
            cout << "Come on Kris, you're so slow!";
        }
        string nombre3 = "Ralsei";
        void dialogo3() {
            cout << "Um... i've never hugged anyone before...";
        }
        string nombre4 = "Lancer";
        void dialogo4() {
            cout << "I eat rocks.";
        }
};

class HP {
    private: 
        int character;
    public:
        HP(void);
        void setHP(int);
        int getHP();
};

HP::HP(void)
{
}

void HP::setHP(int _character)
{
    character = _character;
}
int HP::getHP()
{
    return character;
}

int main()
{
    name prota;
    cout << prota.nombre + " is a: " + prota.lightner;
    cout << endl;
    cout << prota.nombre + " says: ";
    prota.dialogo();
    cout << endl;
    HP dl = HP();
    dl.setHP(120);
    cout << "HP: " << dl.getHP();

    cout << endl;
    cout << endl;

    cout << prota.nombre2 + " is a: " + prota.lightner;
    cout << endl;
    cout << prota.nombre2 + " says: ";
    prota.dialogo2();
    cout << endl;
    HP dl1 = HP();
    dl1.setHP(140);
    cout << "HP: " << dl1.getHP();

    cout << endl;
    cout << endl;

    cout << prota.nombre3 + " is a: " + prota.darkner;
    cout << endl;
    cout << prota.nombre3 + " says: ";
    cout << endl;
    prota.dialogo3();
    HP dl2 = HP();
    dl2.setHP(100);
    cout << "HP: " << dl2.getHP();

    cout << endl;
    cout << endl;

    cout << prota.nombre4 + " is a: " + prota.darkner;
    cout << endl;
    cout << prota.nombre4 + " says: ";
    prota.dialogo4();


    cout << endl;

    return 0;
}