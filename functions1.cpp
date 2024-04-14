#include "functions1.h"
#include <iostream>
using namespace std;

 /*
void ConvertNcheck(string word)        //funkcja sprawdzajaca czy wprowadzony numer akt jest liczbą- wymaga poprawy
{


    char ch[word.length()+1];

    strcpy(ch, word.c_str());


    for(int i=0; i<word.length(); i++)
    {
        if(isdigit(ch[i]))
        {
            //cout<<"Wszystko git";

        }
        else {
            cout<<"Blad. Zly format danych."<<endl;
           // cin.ignore();
            NewCase();

        }
        break;
    }

}
*/


void NewCase()
{
    caseBox.push_back(Case_Data());
    int number=caseBox.size()-1;

    cin.ignore();
    cout<<"Podaj numer akt sprawy: ";
    getline(cin, docum.CaseFilesNum);
    //ConvertNcheck(docum.CaseFilesNum);    wymaga poprawy

    cout<<"Podaj typ sprawy: ";
    getline(cin, docum.Type);

    cout<<"Podaj date wszczecia sprawy: ";
    getline(cin, docum.caseOpen);

    cout<<"Podaj date zamkniecia sprawy: ";
    getline(cin, docum.caseClosed);

    cout<<"Podaj imie oficera prowadzacego: ";
    getline(cin, docum.officerName);

    cout<<"Podaj imie oskarzonego: ";
    getline(cin, docum.accusedName);

    cout<<"Podaj imie ofiary: ";
    getline(cin, docum.victimName);

    cout<<"Podaj imie swiadka: ";
    getline(cin, docum.witnessName);

    caseBox[number]=docum;

    cout<<endl<<"Pomyslnie dodano akta. Nacisnij ENTER by powrocic do menu.";
    getchar();
    system("cls");
    //
}





void DeleteCase()
{
    if(caseBox.empty())
    {
        cout<<"Brak akt do usuniecia! Wracanie do menu...";
        Sleep(3000);
        system("cls");
    }
    else{
        int a;
        cout<<"Podaj numer akt, ktore chcesz usunac: ";
        cin>>a;
        caseBox.erase(caseBox.begin()+a);

        system("cls");
        cout<<"Pomyslnie usunieto! Nacisnij ENTER";
       getchar();getchar();
       system("cls");
    }

}

void EditCase()
{
    int a, b;
    cout<<"Podaj numer akt, ktore chcesz zmodyfikowac: ";
    cin>>a;
    a=a-a;
    cout<<"------MENU EDYCJI------"<<endl;
    cout<<"1. Edytuj numer akt: "<<endl;
    cout<<"2. Edytuj typ akt: "<<endl;
    cout<<"3. Edytuj date wszczecia sprawy: "<<endl;
    cout<<"4. Edytuj date zamkniecia sprawy: "<<endl;
    cout<<"5. Edytuj imie oficera prowadzacego: "<<endl;
    cout<<"6. Edytuj imie oskarzonego: "<<endl;
    cout<<"7. Edytuj imie ofiary: "<<endl;
    cout<<"8. Edytuj imie swiadka: "<<endl;
    cout<<"Wybor: ";
    cin>>b;

    switch(b)
    {
        case 1:
        {

            cout<<"Podaj nowy numer akt: ";
            cin.ignore();
            getline(cin, caseBox[a].CaseFilesNum);
            system("cls");
            cout<<"Pomyslnie aktualizowano!"<<endl<<"Nacisnij ENTER.";
             getchar();
            system("cls");


        }
            break;

        case 2:
        {
            cout<<"Podaj nowy typ: ";
            cin.ignore();
            getline(cin, caseBox[a].Type);
            system("cls");
            cout<<"Pomyslnie aktualizowano!"<<endl<<"Nacisnij ENTER.";
             getchar();
            system("cls");
        }
            break;

        case 3:
        {
            cout<<"Podaj nowa date rozpoczecia sprawy (format dd-mm-rrrr): ";
            cin.ignore();
            getline(cin, caseBox[a].caseOpen);
            system("cls");
            cout<<"Pomyslnie aktualizowano!"<<endl<<"Nacisnij ENTER.";
             getchar();
            system("cls");
        }
            break;

        case 4:
        {
           cout<<"Podaj nowa date zamkniecia sprawy (format dd-mm-rrrr): ";
            cin.ignore();
            getline(cin, caseBox[a].caseClosed);
            system("cls");
            cout<<"Pomyslnie aktualizowano!"<<endl<<"Nacisnij ENTER.";
             getchar();
            system("cls");
        }
            break;

        case 5:
        {
           cout<<"Podaj imie nowego oficera prowadzacego: ";
            cin.ignore();
            getline(cin, caseBox[a].officerName);
            system("cls");
            cout<<"Pomyslnie aktualizowano!"<<endl<<"Nacisnij ENTER.";
             getchar();
            system("cls");
        }
            break;

        case 6:
        {
            cout<<"Podaj imie nowego oskarzonego: ";
            cin.ignore();
            getline(cin, caseBox[a].accusedName);
            system("cls");
            cout<<"Pomyslnie aktualizowano!"<<endl<<"Nacisnij ENTER.";
             getchar();
            system("cls");
        }
            break;

        case 7:
        {
            cout<<"Podaj imie nowej ofiary: ";
            cin.ignore();
            getline(cin, caseBox[a].victimName);
            system("cls");
            cout<<"Pomyslnie aktualizowano!"<<endl<<"Nacisnij ENTER.";
             getchar();
            system("cls");
        }
            break;
        case 8:
        {
            cout<<"Podaj imie nowego swiadka: ";
            cin.ignore();
            getline(cin, caseBox[a].witnessName);
            system("cls");
            cout<<"Pomyslnie aktualizowano!"<<endl<<"Nacisnij ENTER.";
             getchar();
            system("cls");
        }
            break;

        default:
        {
            cout<<"Wybrano niepoprawna opcje"<<endl<<"Nacisnij ENTER.";
            getchar();
            system("cls");
            EditCase();

        }
            break;
    }


}

void NameSearch()
{
    string name;
    cout<<"Podaj imie podejrzanego: ";
    cin.ignore();
    getline(cin, name);
    system("cls");

    for(int i=0; i<caseBox.size(); i++)
    {
        if(name==caseBox[i].accusedName)
        {
            cout<<"Numer akt: "<<caseBox[i].CaseFilesNum<<endl;
            cout<<"Typ sprawy: "<<caseBox[i].Type<<endl;
            cout<<"Data wszczecia sprawy: "<<caseBox[i].caseOpen<<endl;
            cout<<"Data zamkniecia sprawy: "<<caseBox[i].caseClosed<<endl;
            cout<<"Oficer prowadzacy: "<<caseBox[i].officerName<<endl;
            cout<<"Oskarzony: "<<caseBox[i].accusedName<<endl;
            cout<<"Ofiara: "<<caseBox[i].victimName<<endl;
            cout<<"Swiadek: "<<caseBox[i].witnessName<<endl<<endl;
        }
    }
     cout<<"Nacisnij ENTER, aby powrocic do menu";
    getchar();
    system("cls");
}

void DisplayNr()
{
    string number1;
    cout<<"Podaj numer akt: ";
    cin.ignore();
    getline(cin, number1);
    system("cls");

    for(int j=0; j<caseBox.size(); j++)
    {
        if(caseBox[j].CaseFilesNum==number1)
        {
            cout<<"Numer akt: "<<caseBox[j].CaseFilesNum<<endl;
            cout<<"Typ sprawy: "<<caseBox[j].Type<<endl;
            cout<<"Data wszczecia sprawy: "<<caseBox[j].caseOpen<<endl;
            cout<<"Data zamkniecia sprawy: "<<caseBox[j].caseClosed<<endl;
            cout<<"Oficer prowadzacy: "<<caseBox[j].officerName<<endl;
            cout<<"Oskarzony: "<<caseBox[j].accusedName<<endl;
            cout<<"Ofiara: "<<caseBox[j].victimName<<endl;
            cout<<"Swiadek: "<<caseBox[j].witnessName<<endl<<endl;
        }
    }
    cout<<"Nacisnij ENTER, aby powrocic do menu";
    getchar();
    system("cls");

}

void DisplayType()
{
    string tp;
    cout<<"Podaj typ sprawy: ";
    cin.ignore();
    getline(cin, tp);
    system("cls");

    for(int j=0; j<caseBox.size(); j++)
    {
        if(caseBox[j].Type==tp)
        {
            cout<<"Numer akt: "<<caseBox[j].CaseFilesNum<<endl;
            cout<<"Typ sprawy: "<<caseBox[j].Type<<endl;
            cout<<"Data wszczecia sprawy: "<<caseBox[j].caseOpen<<endl;
            cout<<"Data zamkniecia sprawy: "<<caseBox[j].caseClosed<<endl;
            cout<<"Oficer prowadzacy: "<<caseBox[j].officerName<<endl;
            cout<<"Oskarzony: "<<caseBox[j].accusedName<<endl;
            cout<<"Ofiara: "<<caseBox[j].victimName<<endl;
            cout<<"Swiadek: "<<caseBox[j].witnessName<<endl<<endl;
        }
    }
    cout<<"Nacisnij ENTER, aby powrocic do menu";
    getchar();
    system("cls");
}

void FileSave()
{
    string border="---------------------------";

    fstream file;
    file.open("DataBaseFile.txt", ios::out | ios::app);

    for(int j=0; j<caseBox.size(); j++)
    {
        file<<"Numer akt: "<<caseBox[j].CaseFilesNum<<endl;
        file<<"Typ sprawy: "<<caseBox[j].Type<<endl;
        file<<"Data wszczecia sprawy: "<<caseBox[j].caseOpen<<endl;
        file<<"Data zamkniecia sprawy: "<<caseBox[j].caseClosed<<endl;
        file<<"Oficer prowadzacy: "<<caseBox[j].officerName<<endl;
        file<<"Oskarzony: "<<caseBox[j].accusedName<<endl;
        file<<"Ofiara: "<<caseBox[j].victimName<<endl;
        file<<"Swiadek: "<<caseBox[j].witnessName<<endl;
        file<<border<<endl;

    }
    file.close();

    cout<<"Zapis dokonany pomyslnie";
    Sleep(2500);
    system("cls");

}

void FileLoad()
{
  caseBox.clear();
   caseBox.push_back(Case_Data());

    fstream file;
    file.open("DataBaseFile.txt", ios::in);

    if(file.good()==false)
    {
        cout<<"Plik nie istnieje!";
        Sleep(3000);
        system("cls");
    }
    string line, border="---------------------------";
    int line_nr=1, it=0;
    while(getline(file, line))
    {
        switch(line_nr)
        {
            case 1: caseBox[it].CaseFilesNum=line.substr(line.find(':')+2); break;
            case 2: caseBox[it].Type=line.substr(line.find(':')+2); break;
            case 3: caseBox[it].caseOpen=line.substr(line.find(':')+2); break;
            case 4: caseBox[it].caseClosed=line.substr(line.find(':')+2); break;
            case 5: caseBox[it].officerName=line.substr(line.find(':')+2); break;
            case 6: caseBox[it].accusedName=line.substr(line.find(':')+2); break;
            case 7: caseBox[it].victimName=line.substr(line.find(':')+2); break;
            case 8: caseBox[it].witnessName=line.substr(line.find(':')+2); break;
            case 9: border=line; break;

        }
        line_nr++;
        if(line_nr==9) it++;


    }
    file.close();

    cout<<"Odczyt dokonany pomyslnie";
    Sleep(2500);
    system("cls");

}








