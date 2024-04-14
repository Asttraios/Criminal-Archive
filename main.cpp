#include "functions1.cpp"
#include <iostream>

using namespace std;

int main()
{

    int wybor;
    while(true)
    {
         cout<<"--------ARCHIWUM KREYMINALNE - MENU GLOWNE---------"<<endl;
    cout<<"1. Dodaj nowe akta."<<endl;
    cout<<"2. Usun akta."<<endl;
    cout<<"3. Zmien dane akt."<<endl;
    cout<<"4. Wyszukaj akta po numerze."<<endl;
    cout<<"5. Wyszukaj akta po typie."<<endl;
    cout<<"6. Zapisz baze danych w pliku."<<endl;
    cout<<"7. Wczytaj zapisana baze danych z pliku."<<endl;
    cout<<"8. Wyszukaj podejrzanego."<<endl;
    cout<<"9. Wyjscie"<<endl<<endl;

    cout<<"Wybor: ";
    cin>>wybor;



        switch(wybor)
        {

         case 1:
            {
                system("cls");

                NewCase();
               
               
            }
            break;

            case 2:
            {
               system("cls");

               DeleteCase();
            }
            break;

            case 3:
            {
                system("cls");
                EditCase();
            }
            break;

            case 4:
            {
                system("cls");
                DisplayNr();
            }
            break;

            case 5:
            {
                system("cls");
                DisplayType();
            }
            break;

            case 6:
            {
                system("cls");
                FileSave();
            }
            break;

            case 7:
            {
                system("cls");
                FileLoad();
            }
            break;

            case 8:
            {
                system("cls");
                NameSearch();
            }
            break;

            case 9:
            {
                string dots="...";
                int counter=0;

                cout<<"Wychodzenie z programu";

                    for(int i=0;i<3;i++)
                    {
                        cout<<dots[i];
                        Sleep(1000);
                    }
                   exit(0);
            }
            break;

            default:
            {
                cout<<"Wybrano niepoprawna opcje!";
                Sleep(3000);
                system("cls");
            }
            break;
        }

    }
    system("pause");
    return 0;
}
