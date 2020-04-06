
#include <iostream>
#include <string>
#include "customer.h"
#include "Nakup.h"


using namespace std;
int main()
{
    cout << " jednoducha implementacia diagramu place order " << endl;
    customer* jakub = new customer("Jakub Fedorko");
    cout << "Hello there, what product can we offer you (WE ONLY HAVE VODKA AND JABKO :(  )" << endl << "also, insert a quantity too :)" << endl;
    string a;
    int b;
    cin >> a;
    cin >> b;
    jakub->IsAvailable(a, b);
    cout << endl;                                           /*po redukcii inventára uz nieje vodka/jabko*/
    jakub->IsAvailable(a, b);

    cout << "------------------------" << endl;

    cout << "jednoducha implementácia diagramu nakupu"<< endl;
    Nakup mojnakup;
    cout << "Fill the shopping list (lets assume, that we only have vajca,kura,zemiaky,ryza,chleba,koblihy,kapusta,mlieko :(" << endl;
    string list[9];
    for (int i = 0; i <= 7; i++)
    {
        cin >> list[i];
        cout << endl;
    }
    int cena;
    cout << "Total prize is : ";
    cena = mojnakup.SpocitejCenu(list);
    cout << cena << endl;;
    int cena_po_zlave;
    cout << "Prize after discount (if prize is bigger than 1000)" << endl;
    cena_po_zlave = mojnakup.Zlava(cena);
    cout << cena_po_zlave << endl;


    
    

    
}

