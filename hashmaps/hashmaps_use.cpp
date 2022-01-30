#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main(){
    unordered_map<string, int> ourmap;

    // insert
    pair<string, int> p("abc", 1);
    ourmap.insert(p);
    ourmap["def"] = 2;

    // access
    // this method inserts the key if it is not 
    // already there and set default value of zero
    cout << ourmap["abc"] << endl;

    cout << ourmap.at("def") << endl;

    // size
    cout << ourmap.size() << endl;
    cout << ourmap["xyz"] << endl;
    cout << ourmap.size() << endl;


    // check presence
    if (ourmap.count("ghi") > 0){
        cout << ourmap["abc"]; 
    }

    return 0;
}