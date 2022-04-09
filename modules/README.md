# Creating a module: 

Create a folder with your module name

## module_macros.hpp
Create a module_macros.hpp file which contains the following (replacing YOUR_MODULE_NAME): 

```hpp
#define MODULE YOUR_MODULE_NAME
#include "../../macros.hpp"
```

## CfgFunctions.hpp
Each module has a CfgFunctions.hpp to define its functions, with the following content: 

```sqf
#include macros.hpp

class MODULE // Tag
{
    class MODULE // Category
    {
        file = MODULEFILEPATH;

        // Functions go here
    }
}
```

You can use the following functions to automatically do things at certain times, used for initialization (use the tags found [here](https://community.bistudio.com/wiki/Arma_3:_Functions_Library)): 
```sqf
// On mission start, before objects are initialized
class preInit {
    preInit = 1;
};

// On mission start, after objects are initialized
class postInit = {
    postInit = 1;
};
```

## Folder structure

Make sure to name your functions and files correctly. Using the examples above your folder structure should look like this: 
```sqf
Mission.Map
├ Modules
│ └ MODULE_NAME
│   ├ CfgFunctions.hpp
│   ├ fn_postInit.sqf
│   ├ fn_preInit.sqf
│   ├ fn_otherFunction.sqf
│   └ macros.hpp
├ description.ext
├ macros.hpp
└ mission.sqm
```