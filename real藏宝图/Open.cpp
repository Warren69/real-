#include "Open.h"

Open::Open()
{
    _instance = 0;
}

Open* Open::Instance()
{
    if (_instance == 0)
    {
        _instance = new Open;
    }
}
