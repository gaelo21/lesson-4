int solution(vector<int> &A) {
    // Implement your solution here
    vector<int> B(1000000+1, 0);
    for(size_t i = 0; i < A.size(); ++i){
        if(A[i] > 0)
            B[A[i]] = 1;
    }
    for(size_t i = 1; i < 1000000; ++i){
        if(B[i] == 0)
            return i;
    }

    return 1;
}
