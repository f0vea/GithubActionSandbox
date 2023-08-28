#include <iostream>
#include <vector>
using namespace std;

vector<int> insertionSort(const vector<int>& arr)
{
    vector<int> ret = arr;
    const int n = ret.size();
    for(int i = 1; i < n; i++){
        const int v = ret[i];
        int j = i - 1;
        while(j >= 0 && ret[j] > v){
            ret[j + 1] = ret[j];
            j--;
        }
        ret[j + 1] = v;
    }
    return ret;
}
