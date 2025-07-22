// Abir Seth
// PRN-24070123003
// Entc A1

#include <iostream>
using namespace std;
int main() {
    int a = 5; 
    int b = 9;

    int bitwise_AND = a & b;
    int bitwise_OR = a | b;
    int bitwise_XOR = a ^ b;
    int bitwise_NOT = ~b;
    int bitwise_LSHIFT = b << 2;
    int bitwise_RSHIFT = a >> 1;

    cout<<"AND : " << bitwise_AND <<endl;
    cout<<"OR : " << bitwise_OR <<endl;
    cout<<"XOR : " << bitwise_XOR <<endl;
    cout<<"NOT : " << bitwise_NOT <<endl;
    cout<<"L-shift : " << bitwise_LSHIFT << endl;
    cout<<"R-shift : " << bitwise_RSHIFT << endl;

    
    cout <<"";
    return 0;
}

AND : 1
OR : 13
XOR : 12
NOT : -10
L-shift : 36
R-shift : 2


=== Code Execution Successful ===
