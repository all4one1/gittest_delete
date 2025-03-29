#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <bitset>
using namespace std;


void setOptions(int options)
{
    if (options & 0x01) std::cout << "Option 1 enabled\n";
    if (options & 0x02) std::cout << "Option 2 enabled\n";

    cout << options << endl;

    std::bitset<32> bits(options);
    std::cout << bits << std::endl;
}

enum class Permissions : int
{
    Read = 0x01,
    Write = 0x02,
    Execute = 0x04
};

int main() {
    setOptions(0x01 | 0x02); // Передаем комбинацию флагов
    return 0;
}
