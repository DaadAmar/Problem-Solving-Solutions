#include <iostream>
using namespace std;
int main() {
    int lakes,fish;
    cin>>lakes;
    for (int i=0;i<lakes;i++) {
        cin>>fish;
        if( fish == 0){
            cout<<"Yes"<<endl;
        }
        else {
            cout << "No"<<endl;
        }
    }
    return 0;
}
