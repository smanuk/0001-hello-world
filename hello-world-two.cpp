#include <vector>
#include <iostream>

using namespace std;

int main() {

    vector<string> msg {"hello", "c++", "world", "from", "VS Code", "and the C++ Extension!"};


    for (const string& word : msg) {
        cout << word << " ";
    }

    cout << endl;
}