#include <iostream>
#include <vector>
#include <string>

#include "answer/include/answer.h"

using namespace std;

int main(int argc, const char *argv[]) {
    vector<string> msg {"What", "is", "the", "ultimate", "answer?"};

    for (const string& word : msg) {
        cout << word << " ";
    }
    cout << endl;

    cout << answer::find_the_ultimate_answer() << endl;
}