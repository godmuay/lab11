#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;

int main(){
    ifstream file;
    file.open("score.txt");

    int num=0;
    float sum=0;
    string score;
    float SD,sqsum = 0;
    while (getline(file,score))
    {
        sum+= stof(score);
        num +=1;
        sqsum += pow((stof(score)),2);
    }

    float mean = sum/num;

    SD = pow((sqsum/num) - pow(mean,2),0.5);
    cout << "Number of data = " << num << "\n" ;
    cout << setprecision(3);
    cout << "Mean = " << mean << "\n";
    cout << "Standard deviation = " << SD;
}



