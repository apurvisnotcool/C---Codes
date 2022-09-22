#include <iostream>

using namespace std;

int main(){
    //we are calculating the Distance an oblect would freefall
    int time,distance;
    cout << "Enter the Time in Seconds \n";
    cin >> time;
    distance = (32*time*time)/2;
    cout << "The Distance object traveled in the freefall is \n";
    cout << distance;
    cout << " feet \n";
    


    return 0;


}