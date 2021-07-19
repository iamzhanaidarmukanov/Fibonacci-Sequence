//
//  Created by Zhanaidar Mukanov
//  Copyright © 2021 Zhanaidar Mukanov. All rights reserved.
//


#include <iostream>
using namespace std;

int64_t mod(const int64_t& x, const int64_t& y, const int64_t& Q) {
    int64_t z = (x + y) % Q;
    return z;
}

int64_t getMax(int32_t sequence[], int64_t N, int64_t Q) {
    int64_t max = 1;
    sequence[0] = 1;
    sequence[1] = 1;
    
    for (int64_t i = 2; i < N; ++i) {
        sequence[i] = mod(sequence[i - 1], sequence[i - 2], Q);
        if (max < sequence[i])
            max = sequence[i];
    }
    return max;
}

int main() {
    
    int number_of_testcases;
    cin >> number_of_testcases;
    
    for (int testcase = 0; testcase < T; ++testcase) {
        int64_t *sequence_one, *sequence_two;
        sequence_one = new int64_t[500000];
        sequence_two = new int64_t[500000];
        int64_t N, Q;
        int64_t max;
        cin >> N >> Q;
        max = getMax(sequence_one, N, Q);
        
    }
    system("pause");
    return 0;
}
