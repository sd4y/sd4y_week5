int main(){
    int N;
    int size;
    int **A;
    int **B;
    int **C;

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // 블록화된 루프 (Block size = size)   시간 지역성 극대화
    for (int i0 = 0; i0 < N; i0 += size) {    // i 블록 시작
        for (int j0 = 0; j0 < N; j0 += size) { // j 블록 시작
            for (int k0 = 0; k0 < N; k0 += size) { // k 블록 시작
                
                // 이 내부 루프에서만 연산을 집중적으로 수행
                for (int i = i0; i < i0 + size; i++) {
                    for (int j = j0; j < j0 + size; j++) {
                        for (int k = k0; k < k0 + size; k++) {
                            C[i][j] += A[i][k] * B[k][j]; 
                        }
                    }
                }
            }
        }
    }

    return 0;
}