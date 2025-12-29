#include <iostream>
using namespace std;
int main(){
    int n,j,i,k;
    cout<<"Enter the number of rows: ";
    cin>>n;
    //1 2 3 4
    //1 2 3 4
    //1 2 3 4
    //1 2 3 4
    for (i=1; i<=n; i++){
        for (j=1; j<=n; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    // *
    // **
    // ***
    // ****
    for (i=1; i<=n; i++){
        for (j=1; j<=i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    // ****
    // ***
    // **
    // *
    for (i=n; i>0; i--){
        for (j=i; j>0; j--){
            cout<<"* ";
        }
        cout<<endl;
    }

    // 1
    // 23
    // 456
    // 78910
    k=1;
    for(i=1; i<=n; i++){
        for (j=1; j<=i; j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}
