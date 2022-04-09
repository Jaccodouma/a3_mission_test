#include "module_macros.hpp"

// Every n time, index iteractable things 
if (time > ((missionNamespace getVariable ["interact_draw_last_check", 0]) + 5)) then {
    missionNamespace setVariable ["interact_draw_last_check", time];
    systemChat "Checking..."; 
};

// Draw 3d interaction things 
systemChat ".";