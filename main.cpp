#include <iostream>
using namespace std;
#include <iostream>
#include <sstream>
#include <string>

double calcolaArea1(int r1);
double calcolaArea2(int r2);
double calcolaCirconferenza1(int r1);
double calcolaCirconferenza2(int r2);

int main() {
    int r1, r2;
    double area1, circonferenza1, area2, circonferenza2;
    
    area1 = 0;
    circonferenza1 = 0;
    area2 = 0;
    circonferenza2 = 0;
    cout << "Inserisci raggio del primo cerchio" << endl;
    cin >> r1;
    cout << "Inserisci raggio del secondo cerchio" << endl;
    cin >> r2;
    cout << "Visualizzare area e circonferenza di entrambi i cerchi" << endl;
    area1 = calcolaArea1(r1);
    area2 = calcolaArea2(r2);
    circonferenza1 = calcolaCirconferenza1(r1);
    circonferenza2 = calcolaCirconferenza2(r2);
    cout << "L'area del primo cerchio è " << area1 << endl;
    cout << "La circonferenza del primo cerchio è " << circonferenza1 << endl;
    cout << "L'area del secondo cerchio è " << area2 << endl;
    cout << "La circonferenza del secondo cerchio è " << circonferenza2 << endl;
    return 0;
}

double calcolaArea1(int r1) {
    double area1;
    
    area1 = r1 * 3.14;
    
    return area1;
}

double calcolaArea2(int r2) {
    double area2;
    
    area2 = r2 * 3.14;
    
    return area2;
}

double calcolaCirconferenza1(int r1) {
    double circonferenza1, circonferenza2;
    
    circonferenza1 = 6.28 * r1;
    
    return circonferenza1;
}

double calcolaCirconferenza2(int r2) {
    double circonferenza2;
    
    circonferenza2 = 6.28 * r2;
    
    return circonferenza2;
}

