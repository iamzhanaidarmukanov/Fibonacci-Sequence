//
//  Created by Zhanaidar Mukanov
//  Copyright © 2021 Zhanaidar Mukanov. All rights reserved.
//


#include <iostream>
using namespace std;


long long mod(const long long& x, const long long& y, const long long& Q) {
    long long z = (x + y) % Q;
    return z;
}


long long getMax(long firstSequence[], const long& N, const long& Q) {
    long long max = 1;
    firstSequence[0] = 1;
    firstSequence[1] = 1;
    for (int i = 2;i < N; i++) {
        firstSequence[i] = mod(firstSequence[i - 1], firstSequence[i - 2], Q);
        if (max < firstSequence[i])
            max = firstSequence[i];
    }
    return max;
}


void countingSort(long firstSequence[], long secondSequence[], const long& N, const long& rightShift) {

    long  *pointr = new long[1024];

    for (int i = 0; i < 1024; i++) {
        pointr[i] = 0;
    }
    
    for (int i = 0; i < N; i++) {
        pointr[(firstSequence[i] >> rightShift) % 1024]++;
        secondSequence[i] = firstSequence[i];
    }
    for (int i = 1;i < 1024; i++) {
        pointr[i] += pointr[i - 1];
    }
    for (long i = N - 1;i >= 0;i--) {
        firstSequence[pointr[(secondSequence[i] >> rightShift) % 1024] - 1] = secondSequence[i];
        --pointr[(secondSequence[i] >> rightShift) % 1024];
    }
}

int main() {
    int T;
    cin >> T;
    for (int K = 0;K < T;K++)
    {
        long *firstSequence, *secondSequence;

        firstSequence = new long[5000000];
        secondSequence = new long[5000000];

        long N, Q;
        long max;

        cin >> N  >> Q;
        max = getMax(firstSequence, N,  Q);

        for (long long i = 0; (max >> i) > 0; i += 10)
            countingSort(firstSequence, secondSequence, N,  i);

        long long sum = 0;

        for (long long i = 0; i < N; i++)
        {
            sum += (i + 1)* firstSequence[i];
            sum %= Q;
        }

        cout << sum << endl;
    }

    return -1;
}