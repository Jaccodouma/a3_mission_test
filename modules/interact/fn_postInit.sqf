#include "module_macros.hpp"

// Clients only
if (!hasInterface) exitWith {}; 

// Key Handler 
[] spawn {
	waitUntil {!isNull(findDisplay 46)};
	(findDisplay 46) displayAddEventHandler ["KeyDown", {
		_this call FUNC(handleKeyPress);
	}]; 
};

// Frame handler 
addMissionEventHandler ["Draw3D", {_this call interact_fnc_draw3d;}]; 