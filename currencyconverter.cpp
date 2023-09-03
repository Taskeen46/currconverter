#include<iostream>
using namespace std;
int main() {
    char startValue;
    char selectAgain;
    float converter(void);
    start:
    cout<<"---------Welcome to Currency Converter Application---------"<<endl;
    cout<<"---------------Please follow the instruction---------------"<<endl;
    cout<<"You can have currencies- Dollar, Rupees, Euro, Pound. "<<endl;
    cout<<"You can type a, b, c, d respectively for Currencies- Dollar, Rupees, Euro, Pound. "<<endl;
    cout<<"Enter Currency1 which you want to convert"<<endl;
    cout<<"Enter the value for Currency1"<<endl;
    cout<<"Enter the Currency in which you want to convert Currency1"<<endl;
    cout<<"(a) Dollar  (b) Rupees  (c) Euro  (d) Pound"<<endl;
    cout<<"Please press s to start"<<endl;
    selectChoice:
    cin>>startValue;
    if(startValue=='s' || startValue=='S') {
        float finalValue=converter();
        cout<<"Result is:"<<finalValue<<endl;
        cout<<"do you want to use this application again? y or n "<<endl;
        typeAgain:
        cin>>selectAgain;
        if(selectAgain== 'y' || selectAgain== 'Y'){
        goto start;
        }
        else if (selectAgain== 'n' || selectAgain== 'N') {
            cout<<"Thank you for using my application! ";
        }
        else{
            cout<<"You have entered the wrong value ,please re-enter"<<endl;
            goto typeAgain;
        }
    } 
    else {
        cout<<"You have entered wrong value, please type s"<<endl;
        goto selectChoice;
    }
}
float converter() {
    char currName1;
    char currName2;
    float currency1;
    float currency2;
    currLevel:
    cout<<"Enter Currency1 Name"<<endl;
    cin>>currName1;
    cout<<"Enter Currency1 value"<<endl;
    cin>>currency1;
    switch(currName1) {
        case 'a' :
            currLevel1:
             cout<<"Enter Currency2 Name "<<endl;
             cin>>currName2;
             if(currName2== 'a'|| currName2== 'A') {
                currency2=currency1*1;
             }
             else if (currName2== 'b'|| currName2== 'B') {
                currency2=currency1*82.72;
             }
             else if (currName2== 'c'|| currName2== 'C') {
                currency2=currency1*0.93;
             }
             else if (currName2== 'd'|| currName2== 'D') {
                currency2=currency1*0.79;
             }
             else{
                cout<<"You have entered the wrong value, please recheck"<<endl;
                goto currLevel1;
             }
             break;
        case 'b' :
            currLevel2:
             cout<<"Enter Currency2 Name "<<endl;
             cin>>currName2;
             if(currName2== 'a'|| currName2== 'A') {
                currency2=currency1*0.01;
             }
             else if (currName2== 'b'|| currName2== 'B') {
                currency2=currency1*1;
             }
             else if (currName2== 'c'|| currName2== 'C') {
                currency2=currency1*0.01;
             }
             else if (currName2== 'd'|| currName2== 'D') {
                currency2=currency1*0.009;
             }
             else{
                cout<<"You have entered the wrong value, please recheck"<<endl;
                goto currLevel2;
             }
             break;
        case 'c' :
            currLevel3:
             cout<<"Enter Currency2 Name "<<endl;
             cin>>currName2;
             if(currName2== 'a'|| currName2== 'A') {
                currency2=currency1*1.07;
             }
             else if (currName2== 'b'|| currName2== 'B') {
                currency2=currency1*89.13;
             }
             else if (currName2== 'c'|| currName2== 'C') {
                currency2=currency1*1;
             }
             else if (currName2== 'd'|| currName2== 'D') {
                currency2=currency1*0.85;
             }
             else{
                cout<<"You have entered the wrong value, please recheck"<<endl;
                goto currLevel3;
             }
             break;
        case 'd' :
            currLevel4:
             cout<<"Enter Currency2 Name "<<endl;
             cin>>currName2;
             if(currName2== 'a'|| currName2== 'A') {
                currency2=currency1*1.25;
             }
             else if (currName2== 'b'|| currName2== 'B') {
                currency2=currency1*104.15;
             }
             else if (currName2== 'c'|| currName2== 'C') {
                currency2=currency1*1.16;
             }
             else if (currName2== 'd'|| currName2== 'D') {
                currency2=currency1*1;
             }
             else{
                cout<<"You have entered the wrong value, please recheck"<<endl;
                goto currLevel4;
             }
             break;
        default: {
             cout<<"You have entered the wrong value, please recheck"<<endl;
                goto currLevel;
            break;
        }
           
    }
    return currency2;
}