#include <iostream>
using namespace std;

struct events
{
    string name;
    string fecha;
    string hora;
};


//Structures
int main(){
    events event;
    event.name = "Dia de playa";
    event.hora = "12:00 pm";
    event.fecha = "12-05-25";

    events event2;
    event2.name = "Dia de sol";
    event2.hora = "12:00 pm";
    event2.fecha = "12-05-25";

    cout << event.name << "\n" << event.fecha << "\n" << event.hora << "\n" ;
    cout << event2.name << "\n" << event2.fecha << "\n" << event2.hora;
    return 0;
}