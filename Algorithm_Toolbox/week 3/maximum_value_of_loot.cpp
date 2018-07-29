#include <bits/stdc++.h>
using namespace std;

int max_index (vector<int> wts, vector<int> val) {
    int max_i = 0;  double max = 0;

    for (int k = 0; k < wts.size(); k++) {
        if (wts[k] != 0 && (double)val[k]/wts[k] > max) {
            max = (double)val[k]/wts[k];
            max_i = k;
        }
    }
    return max_i;
}

double optimal_value1(int capacity, vector<int> wts, vector<int> val) {
    double value = 0.0;

    for (int k = 0; k < wts.size(); k++) {
        if (capacity == 0) return value;
        int index = max_index(wts, val);
        int a = min(capacity, wts[index]);
        value += a * (double)val[index]/wts[index];
        wts[index] -= a;
        capacity -= a;
    }

    return value;
}


int main() {
    int n1;
    int W;
    cin >> n1 >> W;
    vector<int> val(n1);  vector<int> wts(n1);
    for (int k = 0; k < n1; k++) {
        cin >> val[k] >> wts[k];
    }

    double optimal_value = optimal_value1(W, wts, val);

    cout.precision(10);
    cout << optimal_value <<endl;
    return 0;
}
