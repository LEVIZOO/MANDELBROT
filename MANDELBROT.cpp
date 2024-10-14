#include <iostream>
using namespace std;

int main() {
    float r,i;
     float a = 0;
    float b = 0;
    int n = 0;

    cout << "Entrez la partie reelle du nombre complexe : ";
    cin >> r;
    cout << "Entrez la partie imaginaire du nombre complexe : ";
    cin >> i;


    for (n=0;n < 30 ;n++) {
        float a_new = a * a - b * b + r; 
        float b_new  = 2 * a * b + i;              
        a = a_new;

}
        if (a * a + b * b > 4) {
            cout << "Le nombre complexe (" << r << "+i"<< i << ") diverge";
}
         else {
           
        cout << "Le nombre complexe (" << r << "+i "<< i << ") ne diverge pas ";
     

 }
    

    return 0;
}
