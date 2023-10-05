class Node{
    public:
    Node* children[26];
    bool endNode = false;
};
class Trie {
public:
    Node* root;
    Trie() {
      root = new Node();  
    }
    
    void insert(string word) {
       Node * temp = root;
        for(int i = 0; i< word.size();i++){
        int childIndex = word[i] - 'a';
        if (temp->children[word[i]-'a'] == NULL ){
            temp->children[childIndex] = new Node();
            
        }
        temp = temp->children[childIndex];
      }
        temp->endNode = true;
    }
    
    bool search(string word) {
        Node* temp = root;
        for(int i = 0; i< word.size(); i++){
            int childIndex = word[i]-'a';
            if(temp->children[childIndex] == NULL){
                return false;
                 }
            temp = temp->children[childIndex];
           }
        
         return temp->endNode;
    }
    
    bool startsWith(string prefix) {
        Node* temp = root;
        for(int i = 0; i< prefix.size(); i++){
            int childIndex = prefix[i] - 'a';
            if (temp->children[childIndex] == NULL){
                return false;
            }
            temp = temp->children[childIndex];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */