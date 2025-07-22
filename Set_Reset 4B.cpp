// Abir Seth
// PRN-24070123003
// Entc A1

#include <iostream>
using namespace std;

int main() {
    int set , num;
    cout << "Please enter the num to : ";
    cin >> num;
    cout << "Please enter the bit to be set : ";
    cin >> set;
    
    int set_bit = num ^ (1<<(set-1));

    cout<<"The number with bit set is " << set_bit;
    
    return 0;
}

Please enter the num to : 6
Please enter the bit to be set : 8
The number with bit set is 134

=== Code Execution Successful ===
