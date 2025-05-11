#include <iostream>
#include <cstdint>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    char wybor;
    cout << "Czesc, co tu robisz?" << endl;
    cout << "Mowisz, ze chcesz sie dowiedziec czegos o broniach?" << endl;
    cout << "Usiadz sobie, zaraz Ci opowiem" << endl;
    cout << "1: Opowiedz mi o pistolecie" << endl;
    cout << "2: Opowiedz mi o m16" << endl;
    cout << "3: Opowiedz mi o ak47" << endl;
    cout << "4: A kim Ty wgle jestes?" << endl;
    cout << "5: Nie interejsuje mnie to, papa" << endl;
    switch (wybor)
    {
    case '1':
        cout << "Pistolet jest polautomatyczny i ma w magazynku miejsce na 12 naboi, jest lekki" << endl;
        break;
    case '2':
        cout << "M16 jest w pelni automatyczny, popularny w amerykanskiej armii i dosc ciezki" << endl;
        break;
    case '3':
        cout << "AK47 to bardzo czesto wykorzystowana bron w konfliktach na bliskim wschodzie, jest dosc destrukcyjny, ale mniej precyzyjny" << endl;
        break;
    case '4':
        cout << "Wiktor Wiktor" << endl;
        break;
    case '5':
        cout << "Nara lamusie" << endl;
        break;
    default:
        cout << "Naucz sie polskiego jelopie" << endl;
    }
    return 0;
}