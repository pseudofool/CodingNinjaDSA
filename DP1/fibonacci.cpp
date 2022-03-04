// memoization
int fibonacci(int *arr, int n){
    if (n <= 1){
        return n;
    }
    
    if (arr[n] != -1){
        return arr[n];
    }
    
    arr[n] = fibonacci(arr, n-1) + fibonacci(arr, n-2);
    return arr[n];
}

int fib(int n) {
    int *arr = new int[n+1];
    for (int i=0; i<=n; i++){
        arr[i] = -1;
    }
    return fibonacci(arr, n);
}

// Dp
int fibonacci(int n){
    int *ans = new int[n+1];
    ans[0] = 0;
    ans[1] = 1;
    for (int i=2; i<n+1; i++){
        ans[i] = ans[i-1] + ans[i-2];
    }
    int output = ans[n];
    delete ans;
    return output;
}