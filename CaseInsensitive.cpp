#include <string>
#include <iostream>
#include <cstring>

#include "CaseInsensitive.h"

using namespace std;

CaseInsensitive::CaseInsensitive()
{
    //ctor
}

CaseInsensitive::~CaseInsensitive()
{
    //dtor
}

void CaseInsensitive::insertion_sort(string pass[], int N)
{
    CaseInsensitive CIsort;
    string key="0";
    int i=0, j=0;

   for(i;i<N;i++)
    {
        key=pass[i];
        j=i-1;

    for (j ; j >=0 && _strcmpi(pass[j].c_str(), key.c_str()) > 0; j--)
        {
            pass[j+1]=pass[j];
        }
            pass[j+1]=key;
    }
}

