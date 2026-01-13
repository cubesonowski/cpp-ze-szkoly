#include <iostream>

using namespace std;

int main()
{
    /*
    Napisz prosty test wyboru. Niech zawiera 2 pytania. Wykorzystaj instrukcje wyboru.
    Uzytkownik powinien miec do wyboru temat: Znajomosc geografii oraz Znajomosc historii.
    Nastepnie jesli wybierze Znajomosc geografii wtedy wybiera z dwoch tematow: Panstwa i stolice lub Szczyty gorskie i ich wysokosci
    Do kazdego wybranego tematu napisz 2 pytania.
    Jesli wybierze Znajomosc historii wtedy wybiera z trzech tematow: Bitwy i ich daty lub Krolowie i wazne wydarzenia za ich zycia lub Pisarze i ich ksiazki.
    Do kazdego wybranego tematu napisz 2 pytania
    Masz do wyboru jeden z nastepujacych tematow:
    - Znajomosc geografii - Panstwa i stolice - Szczyty gorskie i ich wysokosci
    - Znajomosc historii - Bitwy i ich daty - Krolowie i wazne wydarzenia za ich zycia - Pisarze i ich ksiazki
    */

    int x;
    char odp;
    cout << "Wybierz temat do wyboru (wpisz numer)\n1. Znajomosc geografii\n2. Znajomosc historii" << endl;
    cin >> x;
    switch(x){
    case 1:
        cout << "Wybrales \"Znajomosc geografii\"" << endl;
        cout << "Wybierz temat do wyboru(wpisz numer)\n1. Panstwa i ich stolice\n2. Szczyty gorskie i ich wysokosci" << endl;
        cin >> x;
        switch(x){
        case 1:
            cout << "Wybrales \"Panstwa i ich stolice\"" << endl;
            cout << "Pytanie 1 - Jaka jest stolica Indii?\na. Kalkuta\nb. Delhi\nc. Nowe Delhi\nd. Bombaj" << endl;
            cin >> odp;
            switch(odp){
                case 'c':cout<<"Podales prawidlowa odpowiedz"<<endl;break;
                default: cout<<"Podales nie prawidlowa odpowiedz"<<endl;abort();
            }
            cout << "Pytanie 2 - Jakiego kraju stolica jest Canberra?\na. Austria\nb. Republika Poludniowej Afryki\nc. Nowa Zelandia\nd. Australia" << endl;
            cin >> odp;
            switch(odp){
                case 'd':cout<<"Podales prawidlowa odpowiedz"<<endl;break;
                default: cout<<"Podales nie prawidlowa odpowiedz"<<endl;abort();
            }
            cout << "Odpowiedziales na wszystkie pytania, gratulacje!" << endl;
            break;
        case 2:
            cout << "Wybrales \"Szczyty gorskie i ich wysokosci\"" << endl;
            cout << "Pytanie 1 - Jaka jest wysokosc Rys?\na. 2499\nb. 2592\nc. 1893\nd. 2183" << endl;
            cin >> odp;
            switch(odp){
                case 'a':cout<<"Podales prawidlowa odpowiedz"<<endl;break;
                default: cout<<"Podales nie prawidlowa odpowiedz"<<endl;abort();
            }
            cout << "Pytanie 2 - Jaka wysokosc ma Mount Blanc?\na. 5162\nb. 4810\nc. 4500\nd. 5300" << endl;
            cin >> odp;
            switch(odp){
                case 'b':cout<<"Podales prawidlowa odpowiedz"<<endl;break;
                default: cout<<"Podales nie prawidlowa odpowiedz"<<endl;abort();
            }
            cout << "Odpowiedziales na wszystkie pytania, gratulacje!" << endl;
            break;
        default: cout<<"Wybrales zly numer tematu"<< endl; break;
        }
        cout << "Dziekuje za wziecie udzialu w quizie!" << endl;
        break;
    case 2:
        cout << "Wybrales \"Znajomosc historii\"" << endl;
        cout << "Wybierz temat do wyboru(wpisz numer)\n1. Bitwy i ich daty\n2. Krolowie i wazne wydarzenia za ich zycia\n3. Pisarze i ich ksiazki" << endl;
        cin >> x;
        switch(x){
        case 1:
            cout << "Wybrales \"Bitwy i ich daty\"" << endl;
            cout << "Pytanie 1 - Kiedy odbyla sie Bitwa pod Grunwaldem?\na. 14 sierpnia 1410\nb. 28 grudnia 1411\nc. 15 lipca 1410\nd. 16 lipca 1410" << endl;
            cin >> odp;
            switch(odp){
                case 'c':cout<<"Podales prawidlowa odpowiedz"<<endl;break;
                default: cout<<"Podales nie prawidlowa odpowiedz"<<endl;abort();
            }
            cout << "Pytanie 2 - Kiedy odbyla sie Bitwa pod Raclawicami?\na. 18 sierpnia 1783\nb. 29 grudnia 1799\nc. 5 kwietnia 1794\nd. 4 kwietnia 1794" << endl;
            cin >> odp;
            switch(odp){
                case 'd':cout<<"Podales prawidlowa odpowiedz"<<endl;break;
                default: cout<<"Podales nie prawidlowa odpowiedz"<<endl;abort();
            }
            cout << "Odpowiedziales na wszystkie pytania, gratulacje!" << endl;
            break;
        case 2:
            cout << "Wybrales \"Krolowie i wazne wydarzenia za ich zycia\"" << endl;
            cout << "Pytanie 1 - Ktory krol Polski zostal koronowany w 1025 roku jako pierwszy krol Polski?\na. Boleslaw Chrobry\nb. Kazimierz Wielki\nc. Wladyslaw Jagiello\nd. Mieszko I" << endl;
            cin >> odp;
            switch(odp){
                case 'a':cout<<"Podales prawidlowa odpowiedz"<<endl;break;
                default: cout<<"Podales nie prawidlowa odpowiedz"<<endl;abort();
            }
            cout << "Pytanie 2 - Ktory krol zawarl unie w Krewie, rozpoczynajac dynastie Jagiellonow?\na. Zygmunt III Waza\nb. Wladyslaw Jagiello\nc. Jan III Sobieski\nd. Stefan Batory" << endl;
            cin >> odp;
            switch(odp){
                case 'b':cout<<"Podales prawidlowa odpowiedz"<<endl;break;
                default: cout<<"Podales nie prawidlowa odpowiedz"<<endl;abort();
            }
            cout << "Odpowiedziales na wszystkie pytania, gratulacje!" << endl;
            break;
        case 3:
            cout << "Wybrales \"Pisarze i ich ksiazki\"" << endl;
            cout << "Pytanie 1 - Kto jest autorem powiesci \"Lalka\"?\na. Boleslaw Prus\nb. Henryk Sienkiewicz\nc. Stefan Zeromski\nd. Adam Mickiewicz" << endl;
            cin >> odp;
            switch(odp){
                case 'a':cout<<"Podales prawidlowa odpowiedz"<<endl;break;
                default: cout<<"Podales nie prawidlowa odpowiedz"<<endl;abort();
            }
            cout << "Pytanie 2 - Ktory pisarz napisal \"Zbrodnie i kare\"?\na. Lew Tolstoj\nb. Fiodor Dostojewski\nc. Anton Czechow\nd. Nikolaj Gogol" << endl;
            cin >> odp;
            switch(odp){
                case 'b':cout<<"Podales prawidlowa odpowiedz"<<endl;break;
                default: cout<<"Podales nie prawidlowa odpowiedz"<<endl;abort();
            }
            cout << "Odpowiedziales na wszystkie pytania, gratulacje!" << endl;
            break;
        default: cout<<"Wybrales zly numer tematu"<< endl; break;
        }
        cout << "Dziekuje za wziecie udzialu w quizie!" << endl;
        break;
    }
    return 0;
}
