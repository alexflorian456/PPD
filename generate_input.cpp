#include<random>
#include<iostream>
#include<fstream>

using namespace std;

int main(){
    int n,m;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(1,100);
    ofstream g("date.txt");
    cout<<"Linii: ";
    cin>>n;
    cout<<"Coloane: ";
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            g << distribution(gen) << " ";
        }
        g << endl;
    }
    return 0;
}
