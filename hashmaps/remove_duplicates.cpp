#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> removeDuplicates(int *arr, int size){
    unordered_map<int, bool> seen;
    vector<int> output;
    for (int i=0; i<size; i++){
        if (seen.count(arr[i]) > 0){
            continue;
        }
        seen[arr[i]] = true;
        output.push_back(arr[i]);
    }
    return output;
}
int main(){
    int arr[] = {1,2,3,3,4,2,8,9,1,7,6,4};
    vector<int> output = removeDuplicates(arr, sizeof(arr)/sizeof(int));
    for (int i=0; i<output.size(); i++){
        cout << output[i] << " ";
    }
    cout << endl;

    return 0;
}