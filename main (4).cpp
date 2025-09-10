#include <iostream>
using namespace std;

    int main(){
        int wysokosc;
        int szerokosc;
        
        cout<<"Podaj wysokosc ";
        cin>>wysokosc;
        cout<<"Podaj szerokosc ";
        cin>>szerokosc;
        
        for(int i=0; i<wysokosc; i++){
            for(int j=0; j<szerokosc; j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }

    return 0;
    }