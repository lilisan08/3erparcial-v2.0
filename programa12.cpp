#include <iostream>
using namespace std;

int main() {

int num1,num2,total;

cout<<"dame el primer numero:";
cin>>num1;
cout<<"dame el segundo numero:";
cin>>num2;
total=num1%num2;
cout<<"el total de la division es "<<total;
if(total-0){;
cout<<" el numero no es divisible";
}
else{
cout<<"el numero es divisible";


}
return 0;
}