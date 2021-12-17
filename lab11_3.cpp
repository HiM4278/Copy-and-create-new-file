#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    string score;
    float sum = 0,deviation = 0;
    int count = 0;
    while (getline(source,score))
        {
            sum += atof(score.c_str());
            deviation += pow(atof(score.c_str()),2);
            count++;
        }
    cout << "Number of data = "<< count << '\n';
    cout << setprecision(3);
    cout << "Mean = "<< sum/count <<'\n';
    cout << "Standard deviation = "<< sqrt((deviation/count)-pow(sum/count,2));
}
