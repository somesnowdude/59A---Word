#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string s, a = "", b = "";
    int cap = 0;
    int low = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
        if (isupper(s[i])) {
            cap++;
            
        } else {
            low++;
            
        }
        a += toupper(s[i]);
        b += tolower(s[i]);
    }
    if (cap > low) {
        cout << a << endl;
    } else {
        cout << b << endl; 
    }
}