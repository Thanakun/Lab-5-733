#include<iostream>
using namespace std;
int main(){
    int number = 1;
    int Even = 0;
    int Odd = 0;
    while(number!= 0){
        cout << "Enter an integer: ";
        cin >> number;
        if (number % 2 != 0 && number !=0) {
            Odd++;
        }
        if(number % 2 == 0 && number != 0){
            Even++;
        }

    }

    cout << "#Even numbers = " << Even << endl;
    cout << "#Odd numbers = " << Odd << endl;
    return 0;
}
