#include <iostream>
using namespace std;
#include <vector>
int main()
{
    vector<int>mesurments;
    int dimension;
    int measurements_number=0;
    cout<<"Введите количество измерений электрических сопротивлений:  ";
    cin>>measurements_number;
    for (int i=0;i<measurements_number;i++){
        cout<<"Введите электрическое сопротивление "<<i+1<<":";
        cin>>dimension;
        mesurments.push_back(dimension);
    }
    for (int n=1;n<measurements_number;n++)
for (int i:mesurments)
cout<<"------"<<'\n'<<n++<<")-"<<i<<'\n';
cout<<"-------";
}
