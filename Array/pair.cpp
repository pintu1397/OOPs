#include<bits/stdc++.h>
#include <iostream>
using namespace std;

bool myCamp(pair<int,int>p1, pair<int,int>p2){
    if(p1.first == p2.first) {
        return p1.second < p2.second;
    }
    return p1.first < p2.first;
}
int countPair(int N, int arr[], int X) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        for (int j = i+1; j < N; j++) {
            if (i < j && arr[i] == arr[j] && ((i + 1) * (j + 1)) % X == 0) {
                count = count + 1;
            }
        }
    }
   
    return count;
}

int main() {
    int T;
    cin >> T;

    for (int i = 1; i <= T; i++) {
        int N;
        cin >> N;
        int arr[N];
        for (int j = 0; j < N; j++) {
            cin >> arr[j];
        }
        int X;
        cin >> X;
        int pair = countPair(N, arr, X);
        cout << pair << endl;
    }

    return 0;
}
