#include<bits/stdc++.h>
using namespace std;
vector<int> v; 

void makePermutation(int n, int r, int depth){
    if(r == depth){
        return;
    }

    for(int i = depth; i < n; i++){
        swap(v[i], v[depth]);
        makePermutation(n, r, depth + 1);
        swap(v[i], v[depth]); // 원복하는 과정
    }
}

int main(){
    makePermutation(3,3,0);
    return 0;
}