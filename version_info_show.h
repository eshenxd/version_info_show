#ifndef VERSION_INFO_SHWO
#define VERSION_INFO_SHWO

#include <iostream>
#include <string>

#ifdef DLLAPI
#else

#define DLLAPI  extern "C" __declspec(dllexport)

#endif


DLLAPI void  version_info_show(std::string name ,std::string function ,std::string author ,std::string time );

#endif