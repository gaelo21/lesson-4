vector<int> solution(int N, vector<int> &A) {
    // Implement your solution here
    vector<int> B(N, 0);
    int current_val = 0, max_val = 0;
    for(size_t i = 0; i < A.size(); ++i){
        if(1 <= A[i] && A[i] <= N){
            B[A[i]-1] = max(current_val, B[A[i]-1])+1;
            if(B[A[i]-1] > max_val)
                max_val = B[A[i]-1];
        }
        else
            current_val = max_val;
    }
    for(size_t j = 0; j < B.size(); ++j){
        B[j] = max(current_val, B[j]);
    }

    return B;
}
