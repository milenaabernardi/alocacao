#include <iostream>
#include <vector>
using namespace std;

void insert_numbers(vector<int>& v, int n){
    for (int i = 0; i < n; i++) {
        v.push_back(i);
    }
}

void print_vector(const vector<int>& v){
    for (int num : v) {
        cout << num << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "insira o numero de elementos: ";
    cin >> n;

    vector<int>* v = new vector<int>();
    insert_numbers(*v, n);
    print_vector(*v);

    delete v;

    return 0;
}