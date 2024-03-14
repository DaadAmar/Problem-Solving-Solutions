#include <iostream>
#include <string>
using namespace std;
int main() {
    string season ;
    int count = 0,rainy_days = 0;
    cin >> season;
    for (char c : season){
        if( c == 'R' ){
            count += 1;
            rainy_days = max(rainy_days,count);
        }else{
           count = 0 ;
        }
    }
    cout << rainy_days;
    return 0;
}
