#pragma once

#ifdef DLL_EXPORTS
#define DLL_API __declspec(dllexport)
#else
#define DLL_API __declspec(dllimport)
#endif

#include <vector>

class DLL_API RandomList
{
public:
    std::vector<CString> GetCities();
};
