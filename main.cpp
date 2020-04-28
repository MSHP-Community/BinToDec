#include <fstream>
#include <string>
using namespace std;

int main()
{
    ifstream f("input.txt");
    ofstream d("output.txt");

    string s;
    unsigned num = 0;
    while (!f.eof()) {
        f >> s;
        for (size_t i = 0; i < s.length(); i++)
            num = num * 2 + s[i] - 48;
        d << num << " ";
        num = 0;
    }

    return 0;
}
