#include "Luggage.h"

int Luggage::id = 0;
#include "Luggage.h"
Luggage::Luggage(){
    id++;
}
//Detail: dá cout dos atributos de um item.
//Select: abre outra tela para selecionar o que fazer com o item, por exemplo botar bagagem de flight em carrinhos.
//Show: abre outra tela para escolher tipo de sort e ranges.
/*
"|===========================================================================================|\n"
"|            ____ ______ ____   ___     ____ ____   __     ____ _   __ ______ _____         |\n"
"|           /  _// ____//  _/  /   |   /  _// __ \  / /    /  _// | / // ____// ___/        |\n"
"|           / / / __/   / /   / /| |   / / / /_/ // /     / / /  |/ // __/    \__\          |\n"
"|         _/ / / /___ _/ /   / ___ | _/ / / _, _// /___ _/ / / /|  // /___  ___/ /          |\n"
"|        /___//_____//___/  /_/  |_|/___//_/ |_|/_____//___//_/ |_//_____/ /____/           |\n"
"|                                                                                           |\n"
"|===========================================================================================|\n"
"|                  Airports                   |                 Luggage Car                 |\n"
"|=============================================|=============================================|\n"
"|  Add Airport                           [11] |  Add Luggage Car                       [21] |\n"
"|  Remove Airport                        [12] |  Remove Luggage Car                    [22] |\n"
"|  Detail Airport                        [13] |  Detail Luggage Car                    [23] |\n"
"|  Show Airports                         [14] |  Show Luggage Car                      [24] |\n"
"|  Transports                            [15] |                                             |\n"
"|=============================================|=============================================|\n"
"|                    Plane                    |                  Passenger                  |\n"
"|=============================================|=============================================|\n"
"|  Add Plane                             [31] |  Add Passenger                         [41] |\n"
"|  Remove Plane                          [32] |  Remove Passenger                      [42] |\n"
"|  Detail Plane                          [33] |  Detail Passenger                      [43] |\n"
"|  Show Plane                            [34] |  Show Passengers                       [44] |\n"
"|  Flights                               [35] |  Tickets                               [45] |\n"
"|  Services                              [36] |                                             |\n"
"|=============================================|=============================================|\n"
"|               Other operations              |                                              \n"
"|=============================================|                                              \n"
"|  Close                                  [0] |                                              \n"
"|  Save                                   [1] |                                              \n"
"|===========================================================================================|\n"
"                                                                                             \n";
--------------------------------------------------------------------------------------------------

 "|==============================================|\n"
 "|                   Flights                    |\n"
 "|  Add Flight                             [1]  |\n"
 "|  Remove Flight                          [2]  |\n"
 "|  Detail Flight                          [3]  |\n"
 "|  Show Flights                           [4]  |\n"
 "|  Get Luggage To Car                     [5]  |\n"
 "|  Go Back                                [0]  |\n"
 "|==============================================|\n"

 "|==============================================|\n"
 "|                   Tickets                    |\n"
 "|  Add Ticket                             [1]  |\n"
 "|  Remove Ticket                          [2]  |\n"
 "|  Detail Ticket                          [3]  |\n"
 "|  Show Tickets                           [4]  |\n"
 "|  Checkin                                [5]  |\n"
 "|  Go Back                                [0]  |\n"
 "|==============================================|\n"

 "|==============================================|\n"
 "|                   Service                    |\n"
 "|  Add Service                            [1]  |\n"
 "|  Remove Service                         [2]  |\n"
 "|  Detail Service                         [3]  |\n"
 "|  Show Service                           [4]  |\n"
 "|  Go Back                                [0]  |\n"
 "|==============================================|\n"

 "|==============================================|\n"
 "|                   Transport                  |\n"
 "|  Add Transport                          [1]  |\n"
 "|  Remove Transport                       [2]  |\n"
 "|  Detail Transport                       [3]  |\n"
 "|  Show Transport                         [4]  |\n"
 "|  Go Back                                [0]  |\n"
 "|==============================================|\n"

 */