class TrieNode{
    public:
    int data;
    TrieNode **children;
    bool isTerminal;

    
    TrieNode(){
        this.data=data;
        children = new TrieNode*[26];
        for(int i = 0 ; i < 26 ; i++){
            children[i]=NULL;
        }
        isTerminal = false;
    }
}