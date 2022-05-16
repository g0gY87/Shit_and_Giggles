#include       <iostream>
#include       <cmath>


using namespace std;

int main()
{
    cout << "Tukaj izracunavam hipotenzo trikotnika, ko imamo 2 kateti" << endl;

    float a, b;

    cout << "Vpisi kateto a: " << endl;

    cin >> a;

    cout << "Vpisi kateto b: " << endl;

    cin >> b;

    float hipotenuza = sqrt((pow(a,2)) + (pow (b,2)));


    cout << "Hipotenuza c: " << hipotenuza << endl;


    return 0;
}
