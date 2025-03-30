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
}

enum class Permissions : int
{
    Read = 0x01,
    Write = 0x02,
    Execute = 0x04
};


void nobrain()
{
    cout << "no functionality" << endl;
}

void func1()
{
    cout << "a" << endl;
}

void extra_feature()
{
    // branch FV
}
void main_new()
{

}


int main() {
    setOptions(0x01 | 0x02); // Передаем комбинацию флагов
    
    nobrain();
    return 0;
}
