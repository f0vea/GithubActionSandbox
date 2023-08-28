#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int, 10> tmp;
    tmp[0] = 2;
    tmp[3] = 4;
    
    for(auto const& i : tmp) cout << i << " "; cout << endl;
    return 0;
}
