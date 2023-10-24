#include<random>
#include<iostream>
#include<fstream>
#include<cstring>

using namespace std;

int main(int argc, char** argv){
    int n,m;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> distribution(1,100);
    ofstream g(argv[3]);
    n = atoi(argv[1]);
    m = atoi(argv[2]);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            g << distribution(gen) << " ";
        }
        g << endl;
    }
    return 0;
}
