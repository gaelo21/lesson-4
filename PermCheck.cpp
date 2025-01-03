// ********************************* solution 1: **************************************
int solution(vector<int> &A) {
    // Implement your solution here
    int n = A.size();
    vector<int> B(n+1, 0);
    for(int i = 0; i < n; i++){
        if(A[i] <= n)
            B[A[i]]++;
    }
    for(size_t i = 1; i < B.size(); i++){
        if(B[i] != 1){
            return 0;
        }
    }

    return 1;
}

// ********************************* solution 2: **************************************

int solution(vector<int> &A) {
    // Implement your solution here
    int n = A.size(), res =0;
    vector<int> B(n, -1);
    for(int i = 0; i < n; ++i){
        if(n >= A[i]){
            B[A[i]-1] = 1;
        }
    }
    for(int i = 0; i < n; ++i){
        if(B[i] == 1){
            res = 1;
        }
        else{
            res = 0;
            break;
        }
    }

    return res;
}
