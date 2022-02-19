#include <iostream>
using namespace std;
#include "trie.h"

int main(){
    Trie t;
    t.insert("are");
    t.insert("and");;
    cout << t.search("and") << endl;
    t.remove("and");
    cout << t.search("and") << endl;




return 0;
}