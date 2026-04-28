#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[] = {1,2,3};
    do{
        for(int i : a) cout << i <<  " ";
        cout << '\n';
    }while(next_permutation(&a[0], &a[0] + 3));
    return 0;
}

/*
벡터라면?
*/

#include<bits/stdc++.h>
using namespace std;
vector<int> v {2,1,3};
int main(){
    sort(v.begin(), v.end()); // 오름차순 정렬
    do{
        for(int i : v) cout << i << " ";
        cout << '\n';
    } while(next_permutation(v.begin(), v.end()));
    return 0;
}

// 2 1 3 
// 2 3 1 
// 3 1 2 
// 3 2 1 

/*
오름차순으로 뽑아내는 것
*/


#include<bits/stdc++.h>
using namespace std;
vector<int> v {2,1,3, 100, 200};
int main(){
    sort(v.begin(), v.end()); // 오름차순 정렬
    do{
        for(int i : v) cout << i << " ";
        cout << '\n';
    } while(next_permutation(v.begin(), v.end()));
    return 0;
}

/*
3개 중에 2개를 뽑아야 한다
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v {1,2,3};
    sort(v.begin(), v.end());
    do{
        for(int i = 0; i < 2; i++){
            cout << v[i] << " : " << " ";
        } 
    }while(next_permutation(v.begin(), v.end()));
    return 0;
}