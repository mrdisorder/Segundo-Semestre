// ProyectoProgra.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Karen Aguilar

#include <iostream>
#include <conio.h>
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h> 
using namespace std;

class estadisticas // estadisticas
{
public:
    int seguidores;
    int HP;
    int tesoro;
    int kills;
    int carisma;
    int ataque=10;
    void stats(int, int, int, int, int, int);
    virtual void mostrarS(); //mostrar STATS
};



struct player // info de jugador 
{
    string nombre;
    int edad;
    string personalidad;
    string elemento;
    string meta;

    virtual void mostrarP();
};

struct enemy
{
    int e = 1 + rand() % 3;
    int r = 1 + rand() % 3;
    int ataque;
    int HP;
    string raza;
    string elemento;

    virtual void mostrarE(); // mostrar estadisticas del enemigo
    virtual void asignacionR(); // asigna la raza del enemigo
    virtual void asignacionE(); // asigna el elemento del enemigo
};

void enemy::asignacionR() // asignacion raza
{
    switch (r)
    {
    case 1:
        raza = "DRAGON";
        HP = 150;
        ataque = 15;
        break;
    case 2:
        raza = "GOBLIN";
        HP = 50;
        ataque = 5;
        break;
    case 3:
        raza = "TROLL";
        HP = 100;
        ataque = 10;
        break;
    }
}
void enemy::asignacionE() // asignacion elemento
{
    switch (e)
    {
    case 1:
        elemento = "FUEGO";
        break;
    case 2:
        elemento = "AGUA";
        break;
    case 3:
        elemento = "HIELO";
        break;
    }
}

void player::mostrarP()
{
    cout << "\n\tInformacion de jugador: ";
    cout << "\n\tNombre: " << nombre;
    cout << "\n\tEdad: " << edad;
    cout << "\n\tPersonalidad: " << personalidad;
    cout << "\n\tElemento: " << elemento;
}

void enemy::mostrarE()
{
    asignacionR();
    asignacionE();
    cout << "\n\t\t" << raza;
    cout << "\n\t\tHP: " << HP;
    cout << "\n\t\tAtaque: " << ataque;
    cout << "\n\t\tElemento: " << elemento;
}

void estadisticas::stats(int _HP, int _seguidores, int _kills, int _tesoro, int _carisma, int _ataque)
{
    HP = _HP;
    seguidores = _seguidores;
    kills = _kills;
    tesoro = _tesoro;
    carisma = _carisma;
    ataque = _ataque;
}

void estadisticas::mostrarS()
{
    cout << "\n\tHP: " << HP << endl;
    cout << "\n\tSeguidores: " << seguidores << endl;
    cout << "\n\tTesoro: " << tesoro << endl;
    cout << "\n\tKills: " << kills << endl;
    cout << "\n\tCarisma: " << carisma << endl;
    cout << "\n\tAtaque: " << ataque << endl;
}

int main()
{
    srand(time(NULL));
    player p;
    estadisticas s;
    enemy e;
    int opcP;
    int opcE;
    char opc1;
    int opc2;
    int opc3;
    bool cont = true;
    bool alive = true;
    bool playing = true;

    s.seguidores = 0;
    s.HP = 150;
    s.tesoro = 0;
    s.kills = 0;
    s.carisma = 0;

    cout << "\n\t\t\tBienvenidx a DragonSim." << endl;
    cout << "\tIngresa tu nombre: ";
    cin >> p.nombre;
    cout << endl;
    cout << "\tIngresa tu edad: ";
    cin >> p.edad;
    cout << endl;
    cout << "\t\tElige tu personalidad: " << endl;
    cout << "\n\t1. Vanidoso\n\t2. Temerario\n\t3. Avaro" << endl;
    cout << "\tIngresa el numero correspondiente: ";
    cin >> opcP;
                    switch (opcP)
                    {
                    case 1:
                        p.personalidad = "VANIDOSO";
                        p.meta = " buscando gente que te siga y adore. Consigue 100 seguidores para ganar";
                        s.carisma = s.carisma + 15;
                        break;

                    case 2:
                        p.personalidad = "TEMERARIO";
                        p.meta = " buscando demostrar tu poder y fuerza peleandote con las otras criaturas del lugar. Consigue 10 kills para ganar";
                        s.ataque = s.ataque + 5;
                        break;

                    case 3:
                        p.personalidad = "AVARO";
                        s.tesoro = s.tesoro + 15;
                        p.meta = " buscando conseguir muchos tesoros y riquezas que puedas guardar en tu cueva. Consigue 100 tesoros para ganar";
                        break;

                    }
                    cout << endl;
                    cout << "\t\tElige tu elemento: " << endl;
                    cout << "\n\t1. Fuego\n\t2. Agua\n\t3. Hielo" << endl;
                    cout << "\tIngresa el numero correspondiente: ";
                    cin >> opcE;
                    switch (opcE)
                    {
                    case 1:
                        p.elemento = "FUEGO";
                        break;
                    case 2:
                        p.elemento = "AGUA";
                        break;
                    case 3:
                        p.elemento = "HIELO";
                        break;
                    }
                    cout << endl;

                    p.mostrarP();

                    cout << "\n\nPresiona ENTER para continuar...";
                    _getch();
                    system("CLS");

                        cout << "Bienvenidx al mundo, " << p.nombre << "." << endl;
                        cout << "Actualmente te encuentras en el reino de Deeznutsia, una tierra llena de dragones y bestias increibles." << endl;
                        _getch();
                        cout << "TU eres un dragon.";
                        _getch();
                        cout << " Uno de " << p.elemento << " para ser exactos." << endl;
                        _getch();
                        cout << "En estas tierras encontraras distintas criaturas que seran de elementos iguales o diferentes al tuyo." << endl;
                        cout << "Ten mucho cuidado, porque unos elementos tienen ventaja sobre otros." << endl;
                        _getch();
                        cout << "Te gustaria aprender mas sobre los elementos? (Y/N)" << endl;
                        cin >> opc1;
                        switch (opc1)
                        {
                        case 'Y':
                            cout << "Desde hace muchos años han existido 3 elementos diferentes:" << endl;
                            _getch();
                            cout << "FUEGO..." << endl;
                            _getch();
                            cout << "AGUA..." << endl;
                            _getch();
                            cout << "y HIELO..." << endl;
                            _getch();
                            cout << "El AGUA tiene ventaja sobre el FUEGO, el FUEGO sobre el HIELO y el HIELO sobre el AGUA." << endl;
                            cout << "\nPresiona ENTER para continuar...";
                            _getch();
                            system("CLS");
                            break;
                        case 'y':
                            cout << "Desde hace muchos años han existido 3 elementos diferentes:" << endl;
                            _getch();
                            cout << "FUEGO..." << endl;
                            _getch();
                            cout << "AGUA..." << endl;
                            _getch();
                            cout << "y HIELO..." << endl;
                            _getch();
                            cout << "El AGUA tiene ventaja sobre el FUEGO, el FUEGO sobre el HIELO y el HIELO sobre el AGUA." << endl;
                            cout << "\nPresiona ENTER para continuar...";
                            _getch();
                            system("CLS");
                            break;
                        default:
                            break;
                        }

                        cout << "Como un dragon de personalidad " << p.personalidad << " vas por la vida" << p.meta << endl;
                        _getch();
                        cout << "Estas son tus estadisticas: " << endl;
                        s.mostrarS();
                        cout << "\n\nPresiona ENTER para empezar tu aventura...";
                        _getch();
                        system("CLS");


                    do
                    {
                        do
                        {
                        cout << "Sales de tu cueva y te encuentras con un el siguiente enemigo: " << endl;
                        e.mostrarE();
                        cout << "\nQue deseas hacer?" << endl;
                        cout << "\n1.ATACAR\n2.HUIR" << endl;
                        cin >> opc2;
                        switch (opc2)
                        {
                        case 1:

                            cout << "Has decidido atacar. " << endl;
                            cout << "INICIA BATALLA: " << endl;

                            do {
                

                                if (e.r=opcE) // cuando ambos son del mismo elemento se hacen el mismo daño, sin modificadores
                                {
                                    e.HP = (e.HP - s.ataque);
                                    s.HP = (s.HP - e.ataque);
                                }
                                else
                                {
                                    if (e.e == 1) // enemigo de fuego
                                    {
                                        if (opcE == 3)
                                        {
                                            e.ataque = e.ataque + 5;
                                            s.ataque = s.ataque - 5;
                                            s.HP = (s.HP - e.ataque); // cuando el enemigo es de fuego y el jugador de hielo, el jugador recibe +5 pts de daño adicionales
                                            e.HP = (e.HP - s.ataque); // el jugador hace 5 puntos de daño menos.
                                        }
                                        if (opcE == 2)
                                        {
                                            e.ataque = e.ataque + 5;
                                            s.ataque = s.ataque - 5;
                                            s.HP = (s.HP - e.ataque); // cuando el enemigo es de fuego y el jugador de agua, el enemigo recibe +5 pts de daño adicionales
                                            e.HP = (e.HP - s.ataque); // el enemigo hace 5 puntos de daño menos.
                                        }
                                    }
                                    if (e.e == 2) //enemigo de agua
                                    {
                                        if (opcE == 1)
                                        {
                                            e.ataque = e.ataque + 5;
                                            s.ataque = s.ataque - 5;
                                            s.HP = (s.HP - e.ataque); // cuando el enemigo es de agua y el jugador de fuego, el jugador recibe +5 pts de daño adicionales
                                            e.HP = (e.HP - s.ataque); // el jugador hace 5 puntos de daño menos.
                                        }
                                        if (opcE == 3)
                                        {
                                            e.ataque = e.ataque + 5;
                                            s.ataque = s.ataque - 5;
                                            s.HP = (s.HP - e.ataque); // cuando el enemigo es de agua y el jugador de hielo, el enemigo recibe +5 pts de daño adicionales
                                            e.HP = (e.HP - s.ataque); // el enemigo hace 5 puntos de daño menos.
                                        }
                                    }
                                    if (e.e == 3) //enemigo de hielo
                                    {
                        
                                        if (opcE == 1)
                                        {
                                            e.ataque = e.ataque + 5;
                                            s.ataque = s.ataque - 5;
                                            s.HP = (s.HP - e.ataque); // cuando el enemigo es de hielo y el jugador de fuego, el jugador recibe +5 pts de daño adicionales
                                            e.HP = (e.HP - s.ataque); // el jugador hace 5 puntos de daño menos.
                                        }
                                        if (opcE == 2)
                                        {
                                            e.ataque = e.ataque + 5;
                                            s.ataque = s.ataque - 5;
                                            s.HP = (s.HP - e.ataque); // cuando el enemigo es de hielo y el jugador de agua, el enemigo recibe +5 pts de daño adicionales
                                            e.HP = (e.HP - s.ataque); // el enemigo hace 5 puntos de daño menos.
                                        }
                                    }
                                }

                                e.HP = e.HP - s.ataque;
                                cout << "\nHas hecho " << s.ataque << " de daño." << endl;
                                cout << "HP del " << e.raza << ": " << e.HP << endl;
                                cout << endl;
                                cout << "\n\nPresiona ENTER para continuar...";
                                _getch();

                                if (e.HP <= 0)
                                {
                                    cont = false;
                                    break;
                                }

                                cout << "\n" << e.raza << " va a atacar!" << endl;
                                cout << e.raza << " te ha hecho " << e.ataque << " de daño." << endl;
                                cout << "Tu HP: " << s.HP << endl;
                                cout << endl;

                                if (s.HP == 0)
                                {
                                    alive = false;
                                    break;
                                }

                                cout << "\nQue deseas hacer?" << endl;
                                cout << "\n1.ATACAR\n2.HUIR" << endl;
                                cin >> opc3;

                                switch (opc3)
                                {
                                case 1:
                                    cont = true;
                                    break;
                                case 2:
                                    cont = false;
                                    break;
                                }

                                system("CLS");

                            } while (cont);

                            if (e.HP <= 0)
                            {

                            system("CLS");
                            cout << "El HP del " << e.raza << " ha llegado a 0. Has ganado!" << endl;
                            s.kills = s.kills + 1;
                            s.HP = s.HP + 50;
                            s.mostrarS();
                            /*
                            cout << "+1 kill\n+50 HP" << endl;
                            cout << "\n\tHP: " << s.HP << endl;
                            cout << "\n\tSeguidores: " << s.seguidores << endl;
                            cout << "\n\tTesoro: " << s.tesoro << endl;
                            cout << "\n\tKills: " << s.kills << endl;
                            cout << "\n\tCarisma: " << s.carisma << endl;
                            */

                            break;
                            }
                        case 2:
                            cout << "\nDecidiste huir." << endl;
                            s.carisma = s.carisma + 3;

                            if (s.HP <= 70)
                            {
                                s.HP = 100;
                                cout << "Tu vida se ha regenerado parcialmente." << endl;
                            }

                            s.mostrarS();
                            _getch();
                            system("CLS");
                            cout << "Encuentras a un chico llorando en el bosque." << endl;
                            cout << "\nQue deseas hacer?" << endl;
                            cout << "\n1.AYUDARLO\n2.SAQUEARLO" << endl;
                            int opc4;
                            cin >> opc4;

                            switch (opc4)
                            {
                            case 1: // decide ayudarlo
                                cout << "\nDecidiste AYUDAR al chico. Este te agradeció con unas fresas silvestres y le contó a sus amigos de ti." << endl;
                                s.carisma = s.carisma + 30;
                                s.seguidores = s.seguidores + 5;
                                s.mostrarS();
                                _getch();
                                system("CLS");
                
                                break;
                            case 2: // decide saquearlo
                                cout << "\nDecidiste SAQUEAR al chico. Lo asustaste, haciendo que tirará sus pertenencias, no traía mucho pero sirve por ahora." << endl;
                                s.carisma = s.carisma - 30;
                                s.tesoro = s.tesoro + 5;
                                s.mostrarS();
                                _getch();
                                system("CLS");
                                break;
                            }

                            if (s.HP > 0)
                            {
                                playing = true;
                            }

                        } // primer switch case (atacar o no)

                        if (s.tesoro == 100 || s.kills == 10 || s.seguidores == 100)
                        {
                            playing = false;
                            break;
                        }

                        } while (playing);

                            cout << "\n\t\tFelicidades!!! GANASTE!!!!" << endl;
                            cout << "Estas fueron tus estadisticas finales: " << endl;
                            s.mostrarS();
                            cout << "\n\n\n\t\tGRACIAS POR JUGAR!!" << endl;
                            cout << "\n\n\tMade by: Disorder (Karen Aguilar)" << endl;
                            return 0;

                    }  while (alive);

    cout << "Tu HP ha llegado a 0. Has muerto." << endl;
    return 0;
}
