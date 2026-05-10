/*
unique 함수를 써서 중복 제거
중복되지 않는 배열을 먼저 만들고 나머지 2,3,3을 채운다.

*/

#include<bits/stdc++.h>
using namespace std;

void f(vector<int> &v){
    v.erase(unique(v.begin(), v.end()), v.end());
}


int main(){
    vector<int> v {1,1,2,2,3,3};
//    auto it = unique(v.begin(), v.end());
    for(int i : v) cout << i << ' ';
    cout << '\n';
    cout << "다음" << '\n';
    f(v);
    for(int i : v) cout << i << ' ';
    return 0;
}

