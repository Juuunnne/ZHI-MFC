#include "pch.h"
#include "RandomList.h"

std::vector<CString> RandomList::GetCities()
{
    std::vector<CString> cities = {L"Lyon", L"Marseille", L"St Etienne", L"Orange", L"Orléans", L"Strasbourg"};
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(cities.begin(), cities.end(), g);
    return cities;
}