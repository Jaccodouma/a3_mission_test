// Practically a copy of CBA macros I wanted to use 
// https://github.com/CBATeam/CBA_A3/blob/master/addons/main/script_macros_common.hpp 
// Note: I renamed ADDON to MODULE 

// Need to define: 
// MODULE (for MODULE_fnc_Functionname)


#define DOUBLES(var1,var2) var1##_##var2
#define TRIPLES(var1,var2,var3) var1##_##var2##_##var3
#define QUOTE(var1) #var1

#define FUNC(var1) TRIPLES(MODULE,fnc,var1)
#define QFUNC(var1) QUOTE(FUNC(var))

#define GVAR(var1) DOUBLES(MODULE,var1)
#define QGVAR(var1) QUOTE(GVAR(var1))

#define MODULEFILEPATH QUOTE(modules\MODULE)