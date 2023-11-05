#include <iostream>
#include <time.h>
using namespace std;

const int cwiartki = 4, numeryczna = 9;//tablica
const int krotkie = 15;//dÅugoÅÄ nazwy gracza
const double czas = 120; //sekundy na gre

const char pio = 0xBA; // â
const char poz = 0xCD;// â

const char LG = 0xC9;// â     
const char PG = 0xBB;// â
const char PD = 0xBC;// â
const char LD = 0xC8;// â

const char krz = 0xCE;// âŹ
const char krzD = 0xCB;// âŚ
const char krzP = 0xCC;// â  
const char krzG = 0xCA;// â©
const char krzL = 0xB9;// âŁ 

const char Lkrz = 0xC5;// âź 
const char Lpoz = 0xC4;// â 
const char Lpio = 0xB3; // â

const char token1 = 0x01; //âº 
const char token2 = 0x0E; //â«

void blad()
{
    cout << "blad! wpisz jeszcze raz \n";
    system("pause");
    system("cls");
}

void wybierz(char& wybor)
{
    do
    {
        cout << "(kolko i krzyzyk) czy (pentago) {1 | 2}: ";
        cin >> wybor;

        if (wybor != '1' && wybor != '2')
        {
            blad();
        }
        system("cls");

    } while (wybor != '1' && wybor != '2');

}

void plansza(int symbole[cwiartki][numeryczna], char znak1, char znak2)
{
    int pole[4] = { 6,6,6,6 };


    cout << LG;
    for (int kolumna = 0; kolumna < 11; kolumna++)
    {

        if (kolumna + 1 == 6)
        {
            cout << krzD;
        }
        else
        {
            cout << poz;
        }
    }
    cout << PG;
    cout << endl;


    for (int wiersz = 0; wiersz < 3; wiersz++)
    {
        cout << pio;
        for (int kolumny = 0; kolumny < 3; kolumny++)
        {


            if (symbole[0][pole[0]] == 2)
            {
                cout << znak1;
            }
            else if (symbole[0][pole[0]] == 1)
            {
                cout << znak2;
            }
            else
            {
                cout << " ";
            }

            pole[0]++;
            if (kolumny < 2)
            {
                cout << Lpio;
            }
            else
            {
                cout << pio;
            }
        }
        pole[0] -= 6;
        for (int kolumny = 3; kolumny < 6; kolumny++)
        {

            if (symbole[1][pole[1]] == 2)
            {
                cout << znak1;
            }
            else if (symbole[1][pole[1]] == 1)
            {
                cout << znak2;
            }
            else
            {
                cout << " ";
            }

            pole[1]++;
            if (kolumny < 5)
            {
                cout << Lpio;
            }
            else
            {
                cout << pio;
            }
        }
        pole[1] -= 6;
        cout << endl;
        if (wiersz + 1 == 3)
        {
            cout << krzP;
            for (int i = 0; i < 11; i++)
            {
                if (i + 1 == 6)
                {
                    cout << krz;
                }
                else
                {
                    cout << poz;
                }
            }
            cout << krzL;
            cout << endl;
        }

    }

    for (int wiersz = 3; wiersz < 6; wiersz++)
    {
        cout << pio;
        for (int kolumny = 0; kolumny < 3; kolumny++)
        {

            if (symbole[2][pole[2]] == 2)
            {
                cout << znak1;
            }
            else if (symbole[2][pole[2]] == 1)
            {
                cout << znak2;
            }
            else
            {
                cout << " ";
            }

            pole[2]++;
            if (kolumny < 2)
            {
                cout << Lpio;
            }
            else
            {
                cout << pio;
            }
        }
        pole[2] -= 6;
        for (int kolumny = 3; kolumny < 6; kolumny++)
        {
            if (symbole[3][pole[3]] == 2)
            {
                cout << znak1;
            }
            else if (symbole[3][pole[3]] == 1)
            {
                cout << znak2;
            }
            else
            {
                cout << " ";
            }

            pole[3]++;
            if (kolumny < 5)
            {
                cout << Lpio;
            }
            else
            {
                cout << pio;
            }
        }
        pole[3] -= 6;
        cout << endl;




    }





    cout << LD;
    for (int kolumna = 0; kolumna < 11; kolumna++)
    {
        if (kolumna + 1 == 6)
        {
            cout << krzG;
        }
        else
        {
            cout << poz;
        }
    }
    cout << PD;


}

void kik(int symbole[cwiartki][numeryczna], char znak1, char znak2)
{
    int pole[4] = { 6,6,6,6 };


    cout << LG;
    for (int kolumna = 0; kolumna < 11; kolumna++)
    {
        if (kolumna + 1 != 6)
        {
            cout << poz;
        }
        else
        {
            cout << krzD;
        }
    }
    cout << PG;
    cout << endl;


    for (int wiersz = 0; wiersz < 3; wiersz++)
    {
        cout << pio;
        for (int kolumny = 0; kolumny < 3; kolumny++)
        {

            if (symbole[0][pole[0]] == 2)
            {
                cout << znak1;
            }
            else if (symbole[0][pole[0]] == 1)
            {
                cout << znak2;
            }
            else
            {
                cout << " ";
            }
            pole[0]++;
            cout << Lpio;
        }
        pole[0] -= 6;

        for (int kolumny = 3; kolumny < 6; kolumny++)
        {
            if (symbole[1][pole[1]] == 2)
            {
                cout << znak1;
            }
            else if (symbole[1][pole[1]] == 1)
            {
                cout << znak2;
            }
            else
            {
                cout << " ";
            }


            pole[1]++;
            if (kolumny < 5)
            {
                cout << Lpio;
            }
            else
            {
                cout << pio;
            }
        }
        pole[1] -= 6;
        cout << endl;
        if (wiersz + 1 == 3)
        {
            cout << krzP;
        }
        else
        {
            cout << pio;
        }

        for (int kol = 0; kol < 5; kol++)
        {
            if (wiersz + 1 == 3 && kol + 1 == 3)
            {
                cout << Lpoz << krz;
            }
            else
            {
                cout << Lpoz << Lkrz;
            }
        }

        if (wiersz + 1 == 3)
        {
            cout << Lpoz << krzL;
        }
        else
        {
            cout << Lpoz << pio;
        }

        cout << endl;
    }

    for (int wiersz = 3; wiersz < 6; wiersz++)
    {
        cout << pio;
        for (int kolumny = 0; kolumny < 3; kolumny++)
        {

            if (symbole[2][pole[2]] == 2)
            {
                cout << znak1;
            }
            else if (symbole[2][pole[2]] == 1)
            {
                cout << znak2;
            }
            else
            {
                cout << " ";
            }

            pole[2]++;
            cout << Lpio;
        }
        pole[2] -= 6;
        for (int kolumny = 3; kolumny < 6; kolumny++)
        {

            if (symbole[3][pole[3]] == 2)
            {
                cout << znak1;
            }
            else if (symbole[3][pole[3]] == 1)
            {
                cout << znak2;
            }
            else
            {
                cout << " ";
            }


            pole[3]++;
            if (kolumny < 5)
            {
                cout << Lpio;
            }
            else
            {
                cout << pio;
            }
        }
        pole[3] -= 6;
        if (wiersz < 5)
        {
            cout << endl;
            cout << pio;
            for (int kol = 0; kol < 5; kol++)
            {
                cout << Lpoz << Lkrz;
            }
            cout << Lpoz << pio;

        }
        cout << endl;
    }

    cout << LD;
    for (int kolumna = 0; kolumna < 11; kolumna++)
    {
        if (kolumna + 1 != 6)
        {
            cout << poz;
        }
        else
        {
            cout << krzG;
        }

    }
    cout << PD;


}

void info(char gra, int tura)
{
    cout << "q,w,a,s - wybor czesci planszy odpowiednio: lewej gornej, prawej gornej, lewej dolnej, prawej dolnej" << endl;
    cout << "1-9 - wybor pola na czesci planszy jak na klawiaturze numerycznej tj. 1 to dolne lewe pole" << endl;
    if (gra == '2')
    {
        cout << "z,x - obrÃłt odpowiednio: zgodnie z ruchem wskazowek zegara, odwrotnie do ruchu wskazowek" << endl;
    }
    cout << "p - pauza" << endl;
    cout << "u - undo" << endl;
    if (tura == 0)
    {
        cout << "o - rozpoczeta przykladowa gra " << endl;
    }
    cout << "m - wejscie do opcji" << endl;
    cout << "h - wejscie do opisu programu" << endl;
    cout << "= - konczy program\n";
    system("pause");
    system("cls");
}

void pause(double czas_gracz1, double czas_gracz2, char gracz1[], char gracz2[])
{

    system("cls");
    cout << "Pauza" << endl;
    cout << gracz1 << ": zostalo ci --> " << czas - czas_gracz1 << "s" << endl;
    cout << gracz2 << ": zostalo ci --> " << czas - czas_gracz2 << "s" << endl;
    system("pause");
    system("cls");
}

int wspolrzedna(int symbole[cwiartki][numeryczna], int& cwiar)
{
    int pole = -1;
    char pole_wpisz;
    do
    {
        cin >> pole_wpisz;


        switch (pole_wpisz)
        {
        case '1':
            pole = 1;
            break;
        case '2':
            pole = 2;
            break;
        case '3':
            pole = 3;
            break;
        case '4':
            pole = 4;
            break;
        case '5':
            pole = 5;
            break;
        case '6':
            pole = 6;
            break;
        case '7':
            pole = 7;
            break;
        case '8':
            pole = 8;
            break;
        case '9':
            pole = 9;
            break;
        default:
            blad();
            pole = -1;
            cwiar = 5;
            break;
        }

        if (pole > 0 && pole < 10)
        {
            if (symbole[cwiar][pole - 1] != 0)
            {
                cout << "pole zajete!" << endl << endl;
                cwiar = 5;
                pole = -1;
                system("pause");
                system("cls");

            }
        }

    } while (pole < 1 && pole > 9);

    return pole;
}

void swap(int& a, int& b)
{
    int pomoc = a;
    a = b;
    b = pomoc;

}

int wygrana_pozioma(int symbole[cwiartki][numeryczna])
{
    int win1 = 0, win2 = 0, PL1 = 0, PL2 = 0;


    for (int linia = 0; linia < 6; linia += 3)
    {
        for (int cwiartki = 0; cwiartki < 3; cwiartki += 2)
        {
            for (int pomoc = 0; pomoc < 2; pomoc++)
            {
                for (int kol = pomoc + linia; kol < 3 + linia; kol++)
                {
                    if (symbole[cwiartki][kol] == 2)
                    {
                        win1++;
                    }
                    else if (symbole[cwiartki][kol] == 1)
                    {
                        win2++;
                    }
                }
                for (int kol = 0 + linia; kol < (2 + pomoc) + linia; kol++)
                {
                    if (symbole[cwiartki + 1][kol] == 2)
                    {
                        win1++;
                    }
                    else if (symbole[cwiartki + 1][kol] == 1)
                    {
                        win2++;
                    }
                }

                if (win1 == 5)
                {
                    PL1 = 1;
                }
                else if (win2 == 5)
                {
                    PL2 = 2;
                }
                win1 = 0;
                win2 = 0;

            }


        }
    }

    return PL1 + PL2;

}

int wygrana_pionowa(int symbole[cwiartki][numeryczna])
{
    int win1 = 0, win2 = 0, PL1 = 0, PL2 = 0;


    for (int cwiartka = 0; cwiartka < 2; cwiartka++)
    {

        for (int opcja = 0; opcja <= 3; opcja += 3)
        {


            for (int linia = 0; linia < 3; linia++)
            {


                for (int pomoc = 6 + linia - opcja; pomoc >= 0 + linia; pomoc -= 3)
                {

                    if (symbole[cwiartka][pomoc] == 2)
                    {
                        win1++;
                    }
                    else if (symbole[cwiartka][pomoc] == 1)
                    {
                        win2++;
                    }

                }


                for (int pomoc = 6 + linia; pomoc >= 3 + linia - opcja; pomoc -= 3)
                {

                    if (symbole[cwiartka + 2][pomoc] == 2)
                    {
                        win1++;
                    }
                    else if (symbole[cwiartka + 2][pomoc] == 1)
                    {
                        win2++;
                    }

                }

                if (win1 == 5)
                {
                    PL1 = 1;
                }
                else if (win2 == 5)
                {
                    PL2 = 2;
                }
                win1 = 0;
                win2 = 0;

            }
        }
    }



    return PL1 + PL2;

}

int wygrana_ukosna(int symbole[cwiartki][numeryczna])
{
    int win1 = 0, win2 = 0, PL1 = 0, PL2 = 0;
    //mniejsze ukosy lewy gÃłrny rÃłg

    for (int ukos = 0; ukos <= 4; ukos += 4)
    {
        if (symbole[0][7 - ukos] == 2)
        {
            win1++;
        }
        else if (symbole[0][7 - ukos] == 1)
        {
            win2++;
        }

        if (symbole[0][5 - ukos] == 2)
        {
            win1++;
        }
        else if (symbole[0][5 - ukos] == 1)
        {
            win2++;
        }


        if (symbole[(ukos / 4) + 1][0 + (2 * ukos)] == 2)
        {
            win1++;
        }
        else if (symbole[(ukos / 4) + 1][0 + (2 * ukos)] == 1)
        {
            win2++;
        }


        if (symbole[3][7 - ukos] == 2)
        {
            win1++;
        }
        else if (symbole[3][7 - ukos] == 1)
        {
            win2++;
        }

        if (symbole[3][5 - ukos] == 2)
        {
            win1++;
        }
        else if (symbole[3][5 - ukos] == 1)
        {
            win2++;
        }

        if (win1 == 5)
        {
            PL1 = 1;

        }
        else if (win2 == 5)
        {
            PL2 = 2;
        }
        win1 = 0;
        win2 = 0;
    }

    //mniejsze ukosy prawy  gÃłrny rÃłg

    for (int ukos = 0; ukos <= 2; ukos += 2)
    {
        if (symbole[1][7 - ukos] == 2)
        {
            win1++;
        }
        else if (symbole[1][7 - ukos] == 1)
        {
            win2++;
        }

        if (symbole[1][3 - ukos] == 2)
        {
            win1++;
        }
        else if (symbole[1][3 - ukos] == 1)
        {
            win2++;
        }


        if (symbole[0 + ((ukos / 2) * 3)][2 + (2 * ukos)] == 2)
        {
            win1++;
        }
        else if (symbole[0 + ((ukos / 2) * 3)][2 + (2 * ukos)] == 1)
        {
            win2++;
        }


        if (symbole[2][7 - ukos] == 2)
        {
            win1++;
        }
        else if (symbole[2][7 - ukos] == 1)
        {
            win2++;
        }

        if (symbole[2][3 - ukos] == 2)
        {
            win1++;
        }
        else if (symbole[2][3 - ukos] == 1)
        {
            win2++;
        }

        if (win1 == 5)
        {
            PL1 = 1;

        }
        else if (win2 == 5)
        {
            PL2 = 2;
        }
        win1 = 0;
        win2 = 0;

    }


    //duÅźy ukos lewy gÃłrny

    for (int ukos = 0; ukos <= 2; ukos += 2)
    {
        for (int linia = 0 + ukos; linia <= 4; linia += 2)
        {

            if (symbole[0][6 - linia] == 2)
            {
                win1++;
            }
            else if (symbole[0][6 - linia] == 1)
            {
                win2++;
            }
        }

        for (int linia = 0; linia <= 2 + ukos; linia += 2)
        {

            if (symbole[3][6 - linia] == 2)
            {
                win1++;
            }
            else if (symbole[3][6 - linia] == 1)
            {
                win2++;
            }
        }

        if (win1 == 5)
        {
            PL1 = 1;

        }
        else if (win2 == 5)
        {
            PL2 = 2;
        }
        win1 = 0;
        win2 = 0;


    }


    //ukos gÃłrny prawy duÅźy

    for (int ukos = 0; ukos <= 4; ukos += 4)
    {
        for (int linia = 0 + ukos; linia <= 8; linia += 4)
        {

            if (symbole[1][8 - linia] == 2)
            {
                win1++;
            }
            else if (symbole[0][8 - linia] == 1)
            {
                win2++;
            }
        }

        for (int linia = 0; linia <= 4 + ukos; linia += 4)
        {

            if (symbole[2][8 - linia] == 2)
            {
                win1++;
            }
            else if (symbole[2][8 - linia] == 1)
            {
                win2++;
            }
        }

        if (win1 == 5)
        {
            PL1 = 1;

        }
        else if (win2 == 5)
        {
            PL2 = 2;
        }
        win1 = 0;
        win2 = 0;


    }




    return PL1 + PL2;
}

char wygrana(int symbole[cwiartki][numeryczna])
{
    int gracz[2] = {};

    switch (wygrana_pozioma(symbole))//sprawdza wygrane w poziomie
    {
    case 0:
        break;
    case 1:
        gracz[0] = 1;
        break;
    case 2:
        gracz[1] = 1;
        break;
    case 3:
        cout << "remis";
        return '=';
        break;
    }

    switch (wygrana_pionowa(symbole))//sprawdza wygrane w pionie
    {
    case 0:
        break;
    case 1:
        gracz[0] = 1;
        break;
    case 2:
        gracz[1] = 1;
        break;
    case 3:
        cout << "remis";
        system("pause");
        return '=';
        break;
    }

    switch (wygrana_ukosna(symbole))//sprawdza wygrane w ukosie
    {
    case 0:
        break;
    case 1:
        gracz[0] = 1;
        break;
    case 2:
        gracz[1] = 1;
        break;
    case 3:
        cout << "remis";
        system("pause");
        return '=';
        break;
    }

    if (gracz[0] == 1 && gracz[1] == 1)
    {
        cout << "remis";
        system("pause");
        return '=';
    }
    else if (gracz[0] == 1)
    {
        return 1;
    }
    else if (gracz[1] == 1)
    {
        return 2;
    }
    return 0;
}

void menu(char& sym1, char& sym2, char PL1[], char PL2[])
{
    char wyb;
    do
    {
        cout << "Komu zmienic znaczek: " << endl;
        cout << "1 - { " << PL1 << " }	 2 - { " << PL2 << " }" << endl;
        cin >> wyb;
        if (wyb != '1' && wyb != '2')
        {
            blad();
        }
    } while (wyb != '1' && wyb != '2');

    if (wyb == '1')
    {
        do
        {
            cout << endl << "Jaki symbol: 1 - { O }  2 - { X }  3 - { " << token1 << " }  4 - { " << token2 << " }" << endl;
            cin >> sym1;

            switch (sym1)
            {
            case '1':
                sym1 = 'O';
                break;
            case '2':
                sym1 = 'X';
                break;
            case '3':
                sym1 = token1;
                break;
            case '4':
                sym1 = token2;
                break;
            default:
                sym1 = sym2;
                break;
            }



            if (sym1 == sym2)
            {
                blad();
            }

        } while (sym1 == sym2);
    }
    else
    {
        do
        {

            cout << endl << "Jaki symbol: 1 - { O }  2 - { X }  3 - { " << token1 << " }  4 - { " << token2 << " }" << endl;
            cin >> sym2;

            switch (sym2)
            {
            case '1':
                sym2 = 'O';
                break;
            case '2':
                sym2 = 'X';
                break;
            case '3':
                sym2 = token1;
                break;
            case '4':
                sym2 = token2;
                break;
            default:
                sym2 = sym1;
                break;
            }

            if (sym2 == sym1)
            {
                blad();
            }

        } while (sym2 == sym1);
    }
}

void wyswietl_gracz(char znak1, char znak2, int tura, char gracz1[], char gracz2[], double czas1, double czas2)
{

    cout << "czas: " << czas - czas1 << "s" << "	  Znak: " << znak1 << "	  Gracz nr1: " << gracz1;  //nazwy i tura
    if ((tura + 1) % 2 == 1 && tura != -1)
    {
        cout << " <---";
    }
    cout << endl << "czas: " << czas - czas2 << "s" << "	  Znak: " << znak2 << "	  Gracz nr2: " << gracz2;
    if ((tura + 1) % 2 == 0 && tura != -1)
    {
        cout << " <---";
    }
    cout << endl;

}

void zmiana(int& symbole, int cwiar, int num)
{



    switch (cwiar)
    {
    case 0:


        if (num == 7)
        {
            symbole = 1;
        }
        else if (num == 3)
        {
            symbole = 2;
        }
        else if (num == 4)
        {
            symbole = 2;
        }
        else if (num == 5)
        {
            symbole = 1;
        }
        else if (num == 1)
        {
            symbole = 2;
        }


        break;
    case 1:

        if (num == 7)
        {
            symbole = 2;
        }
        else if (num == 3)
        {
            symbole = 2;
        }
        else if (num == 4)
        {
            symbole = 1;
        }

        break;
    case 2:

        if (num == 6)
        {
            symbole = 2;
        }
        else if (num == 7)
        {
            symbole = 2;
        }
        else if (num == 3)
        {
            symbole = 1;
        }
        else if (num == 5)
        {
            symbole = 2;
        }
        else if (num == 1)
        {
            symbole = 1;
        }


        break;
    case 3:

        if (num == 4)
        {
            symbole = 1;
        }
        else if (num == 1)
        {
            symbole = 1;
        }
        else if (num == 2)
        {
            symbole = 1;
        }

        break;

    }


}

void znajdz_sym(int historia_ruchu[cwiartki][numeryczna][36], int tura, int& cwiartka, int& numer)
{

    cwiartka = 0, numer = 0;


    do
    {
        if (historia_ruchu[cwiartka][numer][tura - 1] == 0)
        {
            numer++;
        }

        if (numer > 8)
        {
            numer = 0;
            cwiartka++;
        }

    } while (historia_ruchu[cwiartka][numer][tura - 1] == 0);





}

int znajdz_obrot(char historia_obrotu[cwiartki][36], int tura, int& cwiartka)
{

    cwiartka = 0;
    do
    {
        if (historia_obrotu[cwiartka][tura - 1] == 0)
        {
            cwiartka++;
        }

    } while (historia_obrotu[cwiartka][tura - 1] == 0);


    if (historia_obrotu[cwiartka][tura - 1] == 'z')
    {
        return 1;
    }
    else
    {
        return 2;
    }


}

void historia(int ruchy[cwiartki][numeryczna][36], char obroty[cwiartki][36], int tura, char znak1, char znak2, char gra)
{
    system("cls");
    char klawisz;
    int tur = 0, obrot;
    int symbole[4][9] = {};
    int cwiartka = 0, numer = 0;



    cout << "=  -  konczy" << endl;
    cout << "x  -  prawo" << endl;
    cout << "z  -  lewo" << endl << endl;


    if (gra == '2')
    {
        plansza(symbole, znak1, znak2);

    }
    else
    {
        kik(symbole, znak1, znak2);
    }
    cout << endl << "Strona " << tur << " / " << tura << endl;
    do
    {

        cin >> klawisz;
        system("cls");

        cout << "=  -  konczy" << endl;
        cout << "x  -  prawo" << endl;
        cout << "z  -  lewo" << endl << endl;



        if (klawisz == 'x')
        {
            if (tur == tura)
            {
                cout << "Dalej nic nie ma" << endl;
            }
            else
            {
                tur++;
                znajdz_sym(ruchy, tur, cwiartka, numer);
                symbole[cwiartka][numer] = ruchy[cwiartka][numer][tur - 1];

                if (gra == '2')
                {
                    obrot = znajdz_obrot(obroty, tur, cwiartka);

                    if (obrot == 2)
                    {
                        swap(symbole[cwiartka][0], symbole[cwiartka][2]);
                        swap(symbole[cwiartka][0], symbole[cwiartka][8]);
                        swap(symbole[cwiartka][0], symbole[cwiartka][6]);
                        swap(symbole[cwiartka][1], symbole[cwiartka][5]);
                        swap(symbole[cwiartka][1], symbole[cwiartka][7]);
                        swap(symbole[cwiartka][1], symbole[cwiartka][3]);
                    }
                    else
                    {
                        swap(symbole[cwiartka][0], symbole[cwiartka][6]);
                        swap(symbole[cwiartka][0], symbole[cwiartka][8]);
                        swap(symbole[cwiartka][0], symbole[cwiartka][2]);
                        swap(symbole[cwiartka][1], symbole[cwiartka][3]);
                        swap(symbole[cwiartka][1], symbole[cwiartka][7]);
                        swap(symbole[cwiartka][1], symbole[cwiartka][5]);
                    }


                }



            }

        }
        else if (klawisz == 'z')
        {

            if (tur == 0)
            {
                cout << "Nic wczesniej nie ma" << endl;
            }
            else
            {
                if (gra == '2')
                {
                    obrot = znajdz_obrot(obroty, tur, cwiartka);

                    if (obrot == 1)
                    {
                        swap(symbole[cwiartka][0], symbole[cwiartka][2]);
                        swap(symbole[cwiartka][0], symbole[cwiartka][8]);
                        swap(symbole[cwiartka][0], symbole[cwiartka][6]);
                        swap(symbole[cwiartka][1], symbole[cwiartka][5]);
                        swap(symbole[cwiartka][1], symbole[cwiartka][7]);
                        swap(symbole[cwiartka][1], symbole[cwiartka][3]);
                    }
                    else
                    {
                        swap(symbole[cwiartka][0], symbole[cwiartka][6]);
                        swap(symbole[cwiartka][0], symbole[cwiartka][8]);
                        swap(symbole[cwiartka][0], symbole[cwiartka][2]);
                        swap(symbole[cwiartka][1], symbole[cwiartka][3]);
                        swap(symbole[cwiartka][1], symbole[cwiartka][7]);
                        swap(symbole[cwiartka][1], symbole[cwiartka][5]);
                    }


                }

                znajdz_sym(ruchy, tur, cwiartka, numer);
                tur--;
                symbole[cwiartka][numer] = 0;



            }
        }
        else if (klawisz == '=') {}
        else
        {
            blad();
        }





        if (gra == '2')
        {
            plansza(symbole, znak1, znak2);

        }
        else
        {
            kik(symbole, znak1, znak2);
        }
        cout << endl << "Strona " << tur << " / " << tura << endl;


    } while (klawisz != '=');


}

int main() {

    int tura = 0, lokacja, cwiartka = 5, pole;

    char gracz1[krotkie + 1] = {}, gracz2[krotkie + 1] = { 'z','a','a','w','a','n','s','o','w','a','n','y','\0' };
    char znak1 = 'O', znak2 = 'X', klawisz, obrot, wybor, gra;
    int symbole[cwiartki][numeryczna] = {};//wybory i plansza

    time_t start = 0, stop = 0;
    double czas_gracz1 = 0, czas_gracz2 = 0, pomoc_czas = 0;//czas

    int historia_ruchu[cwiartki][numeryczna][36] = { {}, {}, {} }, Max_tura = 0, czesc, cyfra, pomoc_o = 0;
    char historia_obrotu[cwiartki][36] = {};//cofanie


    do
    {
        cout << "Jeden gracz czy dwoch {1 | 2}: ";
        cin >> wybor;

        if (wybor == '2')
        {

            cout << endl << "Podaj imie pierwszego gracza: ";
            cin >> gracz1;
            gracz1[15] = '\0';

            cout << endl << "Podaj imie drugiego gracza: ";
            cin >> gracz2;
            gracz2[15] = '\0';
        }
        else if (wybor == '1')
        {
            cout << endl << "Podaj imie gracza: ";
            cin >> gracz1;
            gracz1[15] = '\0';
        }
        else
        {
            blad();
        }
        system("cls");

    } while (wybor != '1' && wybor != '2');

    wybierz(gra);

    do {


        wyswietl_gracz(znak1, znak2, tura, gracz1, gracz2, czas_gracz1, czas_gracz2);



        if (gra == '2')//wyÅwietla plansze
        {
            plansza(symbole, znak1, znak2);
        }
        else
        {
            kik(symbole, znak1, znak2);
        }
        cout << endl << "h - opis gry" << endl << endl;

        if (tura != 0 && pole != -1)
        {
            start = time(NULL);
        }

        if (Max_tura < tura)
        {
            Max_tura = tura;
        }

        cin >> klawisz;
        system("cls");

        if (tura == 0 && (klawisz == 'q' || klawisz == 'w' || klawisz == 'a' || klawisz == 's'))
        {
            start = time(NULL);
        }





        switch (klawisz)   // opcje klawiszy
        {
        case 'h':
            info(gra, tura);
            break;
        case 'm':
            menu(znak1, znak2, gracz1, gracz2);
            break;
        case 'o':
            if (tura == 0)
            {
                system("cls");
                for (int cwiar = 0; cwiar < 4; cwiar++)
                {
                    for (int licz = 0; licz < 9; licz++)
                    {
                        zmiana(symbole[cwiar][licz], cwiar, licz);
                    }
                }



            }
            pomoc_o = 16;

            break;
        case 'p':

            if (tura != 0 && pomoc_czas != 1)
            {

                stop = time(NULL);
                if (tura % 2 == 1)
                {
                    czas_gracz1 += difftime(stop, start);
                }
                else if (tura % 2 == 0)
                {
                    czas_gracz2 += difftime(stop, start);
                }
            }

            pause(czas_gracz1, czas_gracz2, gracz1, gracz2);

            if (tura != 0 && pomoc_czas != 1)
            {
                start = time(NULL);
            }

            break;
        case 'u':

            if (tura >= (Max_tura - 3) && tura > 0)
            {

                stop = time(NULL);
                pomoc_czas = -1;

                if (gra == '2')
                {
                    cyfra = znajdz_obrot(historia_obrotu, tura, czesc);




                    if (cyfra == 1)
                    {
                        swap(symbole[czesc][0], symbole[czesc][2]);
                        swap(symbole[czesc][0], symbole[czesc][8]);
                        swap(symbole[czesc][0], symbole[czesc][6]);
                        swap(symbole[czesc][1], symbole[czesc][5]);
                        swap(symbole[czesc][1], symbole[czesc][7]);
                        swap(symbole[czesc][1], symbole[czesc][3]);
                    }
                    else
                    {
                        swap(symbole[czesc][0], symbole[czesc][6]);
                        swap(symbole[czesc][0], symbole[czesc][8]);
                        swap(symbole[czesc][0], symbole[czesc][2]);
                        swap(symbole[czesc][1], symbole[czesc][3]);
                        swap(symbole[czesc][1], symbole[czesc][7]);
                        swap(symbole[czesc][1], symbole[czesc][5]);
                    }


                    historia_obrotu[czesc][tura - 1] = 0;


                }



                znajdz_sym(historia_ruchu, tura, czesc, cyfra); //czas ogarnÄ
                symbole[czesc][cyfra] = 0;
                historia_ruchu[czesc][cyfra][tura - 1] = 0;
                tura--;


            }




            else if (tura <= 0)
            {
                blad();


            }
            else
            {
                cout << "Max 4 cofniecia" << endl;


            }



            break;
        case '=':

            break;
        case 'q':
            cwiartka = 0;//1
            break;
        case 'w':
            cwiartka = 1;//2
            break;
        case 'a':
            cwiartka = 2;//3
            break;
        case 's':
            cwiartka = 3;//4
            break;
        default:
            blad();
            break;
        }

        if (cwiartka != 5)
        {



            pole = wspolrzedna(symbole, cwiartka);


            if (pole != -1)
            {
                symbole[cwiartka][pole - 1] = ((tura + 1) % 2) + 1;
                historia_ruchu[cwiartka][pole - 1][tura] = ((tura + 1) % 2) + 1;
                if (gra == '1')
                {
                    tura++;
                    cwiartka = 5;
                    stop = time(NULL);


                }

            }

        }
        if (cwiartka != 5 && gra == '2')
        {
            do
            {

                wyswietl_gracz(znak1, znak2, tura, gracz1, gracz2, czas_gracz1, czas_gracz2);
                plansza(symbole, znak1, znak2);




                cout << endl << "plansza { q | w | a | s } obrot { z | x }: ";//obrot
                cin >> obrot;

                switch (obrot)
                {
                case 'q':
                    cwiartka = 0;//1
                    break;
                case 'w':
                    cwiartka = 1;//2
                    break;
                case 'a':
                    cwiartka = 2;//3
                    break;
                case 's':
                    cwiartka = 3;//4
                    break;
                default:
                    blad();
                    break;
                }

                cin >> obrot;

                historia_obrotu[cwiartka][tura] = obrot;

                if (obrot != 'x' && obrot != 'z')
                {
                    blad();
                }
                else
                {
                    if (obrot == 'z') // zgodnie
                    {

                        swap(symbole[cwiartka][0], symbole[cwiartka][6]);
                        swap(symbole[cwiartka][0], symbole[cwiartka][8]);
                        swap(symbole[cwiartka][0], symbole[cwiartka][2]);
                        swap(symbole[cwiartka][1], symbole[cwiartka][3]);
                        swap(symbole[cwiartka][1], symbole[cwiartka][7]);
                        swap(symbole[cwiartka][1], symbole[cwiartka][5]);
                    }
                    else // przeciw 
                    {
                        swap(symbole[cwiartka][0], symbole[cwiartka][2]);
                        swap(symbole[cwiartka][0], symbole[cwiartka][8]);
                        swap(symbole[cwiartka][0], symbole[cwiartka][6]);
                        swap(symbole[cwiartka][1], symbole[cwiartka][5]);
                        swap(symbole[cwiartka][1], symbole[cwiartka][7]);
                        swap(symbole[cwiartka][1], symbole[cwiartka][3]);
                    }
                }

            } while (obrot != 'x' && obrot != 'z');
            system("cls");
            tura++;
            cwiartka = 5;
            stop = time(NULL);

        }


        if (tura != 0 && pole != -1)
        {

            if (tura % 2 == 1)
            {
                czas_gracz1 += difftime(stop, start);
            }
            else if (tura % 2 == 0)
            {
                czas_gracz2 += difftime(stop, start);
            }
        }

        if (czas_gracz1 > czas)
        {
            cout << "Czas sie skonczyl. Wygrywa gracz: " << gracz2;
            klawisz = '=';
        }
        else  if (czas_gracz2 > czas)
        {
            cout << "Czas sie skonczyl. Wygrywa gracz: " << gracz1;
            klawisz = '=';
        }


        if (tura != 36 - pomoc_o && klawisz != '=')
        {
            klawisz = wygrana(symbole);

            if (klawisz == 1)
            {
                cout << "Wygrywa gracz: " << gracz1;
                klawisz = '=';
            }
            else if (klawisz == 2)
            {
                cout << "Wygrywa gracz: " << gracz2;
                klawisz = '=';
            }
        }
        else if (tura == 36 - pomoc_o && klawisz != '=')
        {
            cout << "remis" << endl;
            klawisz = '=';
        }
        pomoc_czas = 0;


    } while (klawisz != '=');



    wyswietl_gracz(znak1, znak2, -1, gracz1, gracz2, czas_gracz1, czas_gracz2);
    if (gra == '2')
    {
        plansza(symbole, znak1, znak2);
    }
    else
    {
        kik(symbole, znak1, znak2);
    }


    if (tura != 0)
    {
        cout << endl << "wpisz cos by zaczac przegladac historie" << endl;
        cin >> klawisz;
        historia(historia_ruchu, historia_obrotu, tura, znak1, znak2, gra);
    }
    else
    {
        system("pause");
    }




    return 0;


}