#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main(){
    ofstream fout;
    fout.open("./formattest",ios::out);
    string line;
    line.reserve(100000);
     while( getline(cin,line) ) {
         if(line.size()>=1){
            if(line[0]>='0' && line[0] <='9'){
                line.erase(0,1);
            }
         }
        if(line.size()>=1){
            if(line[0]>='0' && line[0] <='9'){
                line.erase(0,1);
            }
        }
        if(line.size()>=1){
            if(line[0] =='.'){
                line.erase(0,1);
            }
        }

        //  if(line.size()>=1){
        //     if(line.at(line.size()-1) == '@'){
        //             fout.close();

        //         break;
        //     }
        //  }
        fout<<line<<endl;
    }        




   return 0;
}

