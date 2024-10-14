#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string a = "akash Singh";
    for(int i = 0; i < a.length(); i++) {
        putchar(toupper(a[i]));
    }
    return 0;
}