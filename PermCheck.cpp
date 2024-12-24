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
