#include <iostream>

using namespace std;

int main()
{
    int namhar;
    int rabu;
    string warna[] = {"Red","Blue","Yellow","Pink","Yellow and white","Green","Grey","Orange-red","orange","purple","light blue","black and dark blue"};
    cout<<"Choose Day Number"<<endl<<"1. Sunday"<<endl<<"2. Monday"<<endl<<"3. Tuesday"<<endl<<"4. Wednesday"<<endl<<"5. Thursday"<<endl<<"6. Friday"<<endl<<"7. Saturday"<<endl;
    cout<<"Day Number = ";cin>>namhar;
    
    if(namhar == 1){
        cout<<"Lucky = "<<warna[0]<<endl<<"Unlucky = "<<warna[1];
        return 0;
    }
    
    if(namhar == 2){
        cout<<"Lucky = "<<warna[2]<<endl<<"Unlucky = "<<warna[0];
        return 0;
    }
    
    if(namhar == 3){
        cout<<"Lucky = "<<warna[3]<<endl<<"Unlucky = "<<warna[4];
        return 0;
    }
    
    if(namhar == 4){
        cout<<"Day or Night?"<<endl<<"1 for day, 2 for night"<<endl;
        cout<<"Choose Number = ";cin>>rabu;
        if(rabu == 1){
            cout<<"Lucky = "<<warna[5]<<endl<<"Unlucky = "<<warna[3];
            return 0;
        }
        if(rabu == 2){
            cout<<"Lucky = "<<warna[6]<<endl<<"Unlucky = "<<warna[7];
            return 0;
        }
    }
    
    if(namhar == 5){
        cout<<"Lucky = "<<warna[8]<<endl<<"Unlucky = "<<warna[9];
        return 0;
    }
    
    if(namhar == 6){
        cout<<"Lucky = "<<warna[10]<<endl<<"Unlucky = "<<warna[11];
        return 0;
    }
    
    if(namhar == 7){
        cout<<"Lucky = "<<warna[9]<<endl<<"Unlucky = "<<warna[5];
        return 0;
    }
    return 0;
}
