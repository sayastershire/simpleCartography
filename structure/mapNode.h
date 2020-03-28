// Node class.
// Node should contain:
// 1. (int) ID
// 2. (LPCWSTR) Name
// 3. (struct of lat and long) Location

#include "location.h"

#ifdef _WIN32   // If Windows API is available
#include <windows.h>    // We need: LPCWSTR
#else
typedef const wchar_t LPCWSTR;
#endif

class mapNode {
    private:
        int id{};
        LPCWSTR name{};
        coordinate location{};
    public:
        mapNode(int, LPCWSTR, double, double);
        int getID();
        LPCWSTR getName();
        coordinate getLocation();
};