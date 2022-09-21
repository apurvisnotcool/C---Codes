#include <iostream>

using namespace std;

int main(){
    int number_of_pods, peas_per_pod, total_peas;
    cout << "Press return after entering a Number.\n";
    cout << "Enter the Number of Pods: \n";
    
    cin >> number_of_pods;
    cout << "Enter the number of peas in a pod : \n";

    cin >> peas_per_pod;

    total_peas= number_of_pods*peas_per_pod;
    cout << "If your have ";
    cout << number_of_pods;
    cout << " pea pods\n";
    cout << "and ";
    cout << peas_per_pod;
    cout << " peas in each pod, then \n";
    cout << "you have ";
    cout << total_peas;
    cout << " peas in all pods. \n";

    return 0;




}