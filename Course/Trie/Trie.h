class Trie{
    TrieNode *root;

    public:
    Trie(){
        root = new TriNode('\0');
    }

    void insertWord(String word){
        if(word.size()== 0){
            root->terminal = true;
            return;
        }
        int index = word[0]-'a';
        TrieNode *child;
        if(root->children[index] != NULL){
            child = root->children[index];

        }
        else{
            child = new TrieNode(word[0]);
             
        }
    
    }
    void removeWord(TrieNode * root , string word){
        if(word.size()==0){
            root->terminal=false;
            return;
        } 
        TrieNode* child;
        int index = word[0]-'a';

        if(root->children[index]!=NULL){
            child = root->children[index];
            
        }
        else{
            return;
        }
         removeWord(child,word.substr(1));
         if(child->terminal==false){
            for(int i = 0 ;  i < 26  ; i++){
                if(child->children[i]!=NULL){
                    return;
                }
            }
         }
         delete child;
         root->children[index]=NULL;
    }
    void removeWord(string word)
    {
        removeWord(root,word);
    }
};