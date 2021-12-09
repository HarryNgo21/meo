#include "40A.h"
void Determine_Color(int x, int y)
{
    int r1 = x * x + y * y;
    int r2 = int(sqrt(r1));
    if (r2 * r2 < r1 && (r2 + 1) * (r2 + 1) > r1 && ((r2 % 2 == 1 && x * y > 0) || r2 % 2 == 0 && x * y < 0))
    {
        cout << "white";
    }
    else
    {
        cout << "black";
    }
}