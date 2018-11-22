#include<iostream>
#include<cstring>
using namespace std;

int mystrlen(char *a){
    int counter=0;
    for(int i=0;i<30;i++){
        if((*(a+i))!='\0'){
            counter++;
        }
    }
    return counter;
}

int main(){
    string str;
    cout<< "Please enter the character array "<<endl;
    getline(cin,str);
    cout<<str<<endl;

    cout<< "The number of the characters in the array is "<< mystrlen(str)<<endl;
    return 0;
}
