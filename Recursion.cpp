#include<iostream>
using namespace std;


int fsumdigit(int n){
    if(n<10){
        return n%10;
    }
    else{
        return n%10 + fsumdigit(n/10);
    }

}

void frevprint(int n){
    if(n<10){
        cout<< n;
    }
    else{
        cout<< n%10;
        frevprint(n/10);
    }
}

int fpower(int n, int r){
   if(r=0){
        return 1;
   }
    else{
        return n*fpower(n, r-1);
    }
}


int main(){
    int n,r;
    cout <<"Please enter any natural number: "<<endl;
    cin>> n;
    cout<< fsumdigit(n)<<endl;
    frevprint(n);
    cout<<endl;
    cout<< "Please enter the power you want the number to be raised to: "<<endl;
    cin>> r;
    cout<<fpower(n,r)<<endl;
    return 0;
}

