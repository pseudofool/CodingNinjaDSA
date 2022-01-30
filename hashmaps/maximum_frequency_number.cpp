int highestFrequency(int arr[], int n) {
    unordered_map<int, int> temp;
    int max;
    int maxCount = -1;
    
    // store all the elements in map
    for (int i=0; i<n; i++){
        temp[arr[i]]++;
    }
    
    
    // check for max frequency
    for (int i=0; i<n; i++){
        if (temp[arr[i]] > maxCount){
            maxCount = temp[arr[i]];
            max = arr[i];
        }
    }
    return max;
}