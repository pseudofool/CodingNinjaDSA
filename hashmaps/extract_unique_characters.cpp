string uniqueChar(string str) {
	string output;
    unordered_map<char, int> temp;
    for (int i=0; i<str.length(); i++){
        if (temp.count(str[i]) == 0){
            output += str[i];
            ++temp[str[i]];
        }
    }
    return output;
}