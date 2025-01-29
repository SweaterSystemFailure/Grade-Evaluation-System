#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    short score;
    string result;
    
    cout << "Enter your score: ";
    cin >> score;

    result = (score > 60 && score < 70) ? (score >= 70 && score < 90) ? (score >= 90) ? : "Pass" : "Good" : "Excellent": "Fail" ;

    cout << result;
    return 0;
}

