int solution(int X, vector<int> &A) {
    // Implement your solution here
    int res = -1, n = A.size();
    vector<int> arr(X+1, 0);
    for(int i = 0; i < n; i++){
        if(arr[A[i]] == 0){
            --X;
            if(X == 0){
                res = i;
                break;
            }
        }
        arr[A[i]] = 1;
    }

    return res;
}
