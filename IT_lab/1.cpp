#include <iostream>
#include <fstream>

using namespace std;
int main(){
    ifstream fs;
    ofstream ft;
    char ch, fname1[20], fname2[20];
    cin >> fname1;
    fs.open(fname1);
    if(!fs){
        cout << "Error in opening file..!!";
        exit(1);
    }
    cin >> fname2;
    ft.open(fname2);
    if(!ft){
        cout << "Error in opening file..!!";
        fs.close();
        exit(2);
    }
    while(fs.eof()==0){
        ch=fs.get();
        if(!fs.eof())
        ft << ch;
    }
    cout << "File copied successfully..!!";
    fs.close();
    ft.close();
    return 0;
}