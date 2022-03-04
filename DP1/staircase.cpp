// recursive
#include <climits>
long staircase(int n)
{
    if (n == 0){
        return 1;
    }
    if (n<0){
        return 0;
    }
    
    long option1 = staircase(n-1);

	long option2 = staircase(n-2);    
    
    long option3 = staircase(n-3);
    
	return option1 + option2 + option3;
}


// recursive with memoization
#include <climits>
long staircase(long *ans, int n)
{
    if (n == 0){
        return 1;
    }
    if (n<0){
        return 0;
    }
    if (ans[n]!= -1){
        return ans[n];
    }
    
    long option1 = staircase(ans, n-1);

	long option2 = staircase(ans, n-2);    
    
    long option3 = staircase(ans, n-3);
    
    ans[n] = option1 + option2 + option3;
	return ans[n];
}

long staircase(int n){
    long *ans = new long[n+1];
    for (int i=0; i<=n; i++){
        ans[i] = -1;
    }
    return staircase(ans, n);
}

// using DP

long staircase(int n){
    long *ans = new long[n+1];
    ans[0] = 0;
    ans[1] = 1;
    ans[2] = 2;
    for (int i=3; i<=n; i++){
        int option1 = ans[i-1];
        int option = ans[i-2];
        int option3 = ans[i-3];

        ans[i] = 1 + option1 + option2 + option3;
    }
    return ans[n];
}