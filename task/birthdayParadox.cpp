#include <iostream>
using namespace std;

float task(float p)
{
    float k = 1;
    float t = 1;

    while (!(1 - t >= p))
    {
        k++;
        t = (t * (365 - (k - 1))) / 365; 
    }

    return k;
}


int main()
{
    float input;
    cin >> input;
    
    float result = task(input);
    cout << result << endl;

    return 0;
}