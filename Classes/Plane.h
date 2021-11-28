#ifndef TP1_AED_PLANE_H
#define TP1_AED_PLANE_H

#include "Flight.h"
#include <list>
#include <string>
using namespace std;
//Um avião é caracterizado, no mínimo, por: matrícula, tipo ( A310, A320, A321, A330, A340, B737, B747, ...)
//e capacidade. Um avião possui ainda um plano de voo, isto é, a lista de voos que realiza.
class Plane{
    int capacity;
    string registration;
    string type;
    list<Flight> flights;

    public:
    Plane(int capacity,string registration,string type);
    void AddFlight(Flight flight); //adicionar 1 voo só
    void AddFlight(list<Flight> flight); //adiciona uma lista de voos]
    int GetCapacity();
    string GetRegistration();
    char GetType();
    list<Flight> GetFlights();
    void DeleteFlight(string registration);
    //checar se há vagas para o passageiro()
};


#endif //TP1_AED_PLANE_H
