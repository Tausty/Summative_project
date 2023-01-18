#include <iostream>
using namespace std;

class sword_slinger {
    public:
        double Projectile_damadge; // this is a damadge multiplyer to the already existing projectile class
        double Projectile_hit_effect_toggle = true; // this allowes the projetile the thing shoots to toggle a specific hit affect
        double Speed; 
        double Luck; // im unsure if i really want this, but my idea is that for every extra luck, your roll an extra time and then choose the more favoirable option
        double Hit_effectable = false; // if this thing can be targeted by a hit affect
        double Attack_speed; // the cap of your attack speed, every weopon is different
        double Projectile_speed; // another multiplier
        double Critcal_damadge_chance; // chance to do double damdge
        double Health;
        double Pos_x;
        double Pos_y;  
        double Powerup_pool=1;
        double increase_dclass1=true;
        double decrease_dclass2=true;
        double decrease_dclass3=true;
};