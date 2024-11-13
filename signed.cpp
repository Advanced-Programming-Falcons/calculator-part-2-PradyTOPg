#include <iostream>
#include <string>
#include <climits>
using namespace std;

int main(void){
    int s = INT_MAX;
    int unsigned uns = UINT_MAX;
    cout << s << endl;
    cout << uns << endl;
    cout << s + 1 << endl;
    // reutns into a max negative limit 
    cout << uns + 1 << endl;
    // returns to 0
    cout << s - 1 << endl;
    cout << uns - 1 << endl;
    // returns the same result the first time but subtracted by 1

    return 0;
}
