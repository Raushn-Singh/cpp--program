#include<iostream>
using namespace std;

void pattern6(int n){
        for(int i=1; i<=n; i++){
            for(int j=1; j<=n-i+1; j++){
                cout<<j<<" ";
            }
            cout<<endl;
        }
}

int main(){
 int n;
 cin>>n;
 pattern6(n);

}




// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

