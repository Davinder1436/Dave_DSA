#include<iostream>
#include<string>
using namespace std;


class Trienode{
    public:
    char data;
Trienode* children[26];
    bool isterminal;

    Trienode(char ch){
        data = ch;
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isterminal= false;
    }  

};

class Trie{
public:
Trienode* root;
trie(){
    root= new Trienode('');
}
    void inserttrie(Trienode* root,string word){
        if(word.length()==0){
            root->isterminal==true;
        }
    
    int index = word[0]-'A';
    Trienode* child;


    if(root->children[index]!=NULL){
        child = root->children[index];
    }
    else{
                child = new Trienode(word[0]);
                root->children[index]=child;
        }
    inserttrie(child,word.substr(1));}

};

int main(){

    Trie* t = new trie();
    t->inserttrie("apple");

}

