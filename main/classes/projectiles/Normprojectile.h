#include <iostream>
using namespace std;

class Projectile{
    double Damadge;
    double Speed;
    double Count;
    double Hit_affect_toggle = false; // false by default, changed by some stuff
    double Crit_chance;
    double Dclass; // which damdage class it is (magic, ranged, melee)
    double Range;
    double Pos_y;
    double Pos_x;
};