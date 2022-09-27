#include <iostream>
using namespace std;
int main(){
    int number_of_bars; //This is a variable
    double one_weight, total_weight;
    cout << "Enter the number of candy Bars in a package\n";
    cout << "and the weight in ounces of one candy bar.\n";
    cin >> number_of_bars;
    cin >> one_weight;

    total_weight = one_weight * number_of_bars;
    
    cout << number_of_bars << " Candy bars\n";
    cout << one_weight << " Ounces each \n";
    cout << "Total weight is " << total_weight << " Ounces.\n";
    
    cout << " Try Another Brand. \n";
    cout << " Enter the Number of candy Bars in a package\n";
    cout << " and the Weight in ounces of one candy bar.\n";
    cout << " then press Return.\n";
    cin >> one_weight;
    
    total_weight = one_weight*number_of_bars;

    cout << number_of_bars << " Candy bars\n";
    cout << "Total weight is " << total_weight << " Ounces.\n";
    
    cout << "Perhaps an Apple would be healthier.\n";
    return 0;

}