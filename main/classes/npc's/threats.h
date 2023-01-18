#include <iostream>
using namespace std;



class Threats{
    double Size; // how big it is, they will probably always be 1x1
    double Walkibility = true; // can u passs through it, true for everything but walls 
    double Damadge;
    double Proc_time; // how long till the trap activates
    double Leavable_while_proc = true; // can u leave while the trap is activating, true for everthing exept holes
    double Teleport_player_out = false; // will the trap teleport you out on hit, false for everything exept holes
    double Pos_x;
    double Pos_y;
};