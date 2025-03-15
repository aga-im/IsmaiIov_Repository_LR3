#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b,c,g;

    cout<<"Введите целое число A";
    cin>>a;
    cout<<endl;
    cout<<"Введите целое число B";
    cin>>b;
    cout<<endl;
    cout<<"Введите целое число C";
    cin>>c;
    cout<<endl;
    cout<<"1-Найти остаток от деления суммы целых чисел А и В на число С"<<endl;
    cout<<"2-Найти целую часть от деления суммы целых чисел А и В на число С"<<endl;
    cin>>g;
    switch(g){
        case 1: cout<<"Остаток = "<<(a+b)%c;
            break;
        case 2: cout<<"Целая часть = "<<(a+b)/c;
            break;
        default: cout<<"Вы вели неверное число";
    }     
//sadasd

    return 0;
}
