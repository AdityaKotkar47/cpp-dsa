#include <bits/stdc++.h>

using namespace std;

bool customSort(pair<double, int> a, pair<double, int> b) {
    return a.first > b.first;
}

double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {

    double valueTotal = 0, weightLeft = capacity;
    int n = val.size();
    
    vector<pair<double, int>> ratios(n);
    
    for (int i = 0; i < n; i++) {

        ratios[i].second = i;
        ratios[i].first = (double) val[i] / wt[i];
    }

    sort(ratios.begin(), ratios.end(), customSort);

    for (int i = 0; i < n; i++) {

        if (weightLeft == 0)
            break;
        else if (wt[ratios[i].second] <= weightLeft) {
            
            weightLeft -= wt[ratios[i].second];
            valueTotal += val[ratios[i].second];
        }
        else {

            valueTotal += ratios[i].first * weightLeft;
            weightLeft = 0;
        }
    }
    
    return valueTotal;
}

int main() {

    // put items in knapsack to get the maximum total value in knapsack

    // here we will fill our knapsack [kind of sack] with items
    // each item has weight and value, our knapsack has some weight capacity
    // and we try to ensure that the stuff we are filling it with has maximum total value

    // we need to ensure minimum weight gets added [weight 👇] while maximum value gets added [value 👆]
    // we start by finding the value per weight of each item
    // then we start by filling the items with highest per weight value first

    // we also need to keep track of the idx the ratio belongs to as we will sort the ratios too

    int capacity = 50;
    vector<int> values = {60, 100, 120};
    vector<int> weights = {10, 20, 30};

    cout << fractionalKnapsack(values, weights, 50) << endl;

    return 0;
}