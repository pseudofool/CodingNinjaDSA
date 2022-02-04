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

    // iterator

    cout << endl << endl << "using iterator" << endl;
    unordered_map<string, int> xmap;
    xmap["abc"] = 1;
    xmap["abc1"] = 2;
    xmap["abc2"] = 3;
    xmap["abc3"] = 4;
    xmap["abc4"] = 5;
    xmap["abc5"] = 6;
    xmap["abc6"] = 7;

    unordered_map<string, int>::iterator it;
    it = xmap.begin();
    while(it != xmap.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }

    unordered_map<string, int>::iterator it2 = xmap.find("abc");
    cout << it2->first << " " << it2->second << endl;
    return 0;

    // erasing the map;
    xmap.erase(it, xmap.end());
    return 0;
}