#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(i = 1;i<=4;i++){
        for( j = 1;j<=6;j++){
            if(i == 1 || i == 4)
            cout<<"*";
            else if(i == 2 || i == 3){
                if( j == 1 || j == 6)
                    cout<<"*";
            
            else{
                cout<<" ";
            }
            }
        }
        cout<<"\n";
    }
     for (i = 1; i <= 4; i++) {
        for (j = 1; j <= 6; j++) {
            if (i == 1 || i == 4)
                cout << "*";
            else if (i == 2 || i == 3) { // Corrected indentation
                if (j == 1 || j == 6)
                    cout << "*";
                else
                    cout << " ";  // Print space for non-border characters
            }
        }
        cout << "\n";
    }
    return 0;

}