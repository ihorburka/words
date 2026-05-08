#include <iostream>
#include <string>

using namespace std;


int main() {

    string words;
    string wordsua;
    
    cout<<"Write word EN"<<endl;
    getline(cin, words);
    
    cout<<"Write word UA"<<endl;
    getline(cin, wordsua);
    
    cout<<endl;
    
    string word;
    string wordua;
    
    int errors=0;
    
    for(int i=0; i<50;){
        cout<<i+1<<".";
        cout<<"EN"<<endl;
        getline(cin, word);
        cout<<"UA"<<endl;
        getline(cin, wordua);
        
        if (word==words && wordua==wordsua){
            i++;
        }
        else{
            for(int i=0; i<5; i++){
                cout<<"invalid"<<endl;
            };
            errors++;
        }
    };
    
    cout<<"errors = "<<errors<<endl;
    
    
}
