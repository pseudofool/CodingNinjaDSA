// recursive

#include <climits>
int countMinStepsToOne(int n){
	if (n <= 1){
        return 0;
    }
    int option2 = INT_MAX;
    int option3 = INT_MAX;
    int option1 = countMinStepsToOne(n-1);
	if (n%2 == 0)
    	option2 = countMinStepsToOne(n/2);
	if (n%3 == 0)
    	option3 = countMinStepsToOne(n/3);
    
    return min(option1, min(option2, option3)) + 1;
}

// recursive with memoization

#include <climits>
int countMinStepsToOneHelper(int *ans, int n){
    if (n <= 1){
        return 0;
    }
    
    if (ans[n] != -1){
        return ans[n];
    }
    int option2 = INT_MAX;
    int option3 = INT_MAX;
    
    
    int option1 = countMinStepsToOneHelper(ans, n-1);
	if (n%2 == 0)
    	option2 = countMinStepsToOneHelper(ans, n/2);
	if (n%3 == 0)
    	option3 = countMinStepsToOneHelper(ans, n/3);
    
	ans[n] =  min(option1, min(option2, option3)) + 1;
    return ans[n];
}

int countMinStepsToOne(int n){
    int *arr = new int[n+1];
    for (int i=0; i<=n; i++){
        arr[i] = -1;
    }
    return countMinStepsToOneHelper(arr, n);
}


// using DP

int countStepsToOne(int n)
{
	int *ans = new int[n+1];
    ans[1] = 0;
    for (int i=2; i<=n; i++){
        int option1 = ans[i-1];
        int option2 = INT_MAX;
        int option3 = INT_MAX;
        
        if (i%2 == 0){
            option2 = ans[i/2];
        }
        if(i%3 == 0){
            option3 = ans[i/3];
        }
        
        ans[i] = min(option1, min(option2, option3));
    }
    return ans[n];
}