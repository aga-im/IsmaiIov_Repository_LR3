#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b,c,g;

    cout<<"������� ����� ����� A";
    cin>>a;
    cout<<endl;
    cout<<"������� ����� ����� B";
    cin>>b;
    cout<<endl;
    cout<<"������� ����� ����� C";
    cin>>c;
    cout<<endl;
    cout<<"1-����� ������� �� ������� ����� ����� ����� � � � �� ����� �"<<endl;
    cout<<"2-����� ����� ����� �� ������� ����� ����� ����� � � � �� ����� �"<<endl;
    cin>>g;
    switch(g){
        case 1: cout<<"������� = "<<(a+b)%c;
            break;
        case 2: cout<<"����� ����� = "<<(a+b)/c;
            break;
        default: cout<<"�� ���� �������� �����";
    }     
//sadasd

    return 0;
}
