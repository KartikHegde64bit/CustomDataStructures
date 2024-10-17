struct Node {
    // node and it's properties
    // bNode -> B Tree Node i.e Binary Tree Node
    Node* leftNode;
    Node* rightNode;
    long val;
    Node(): val(0), leftNode(nullptr), rightNode(nullptr) {}
}

class BTree {
    // degree
    int degree;
    Node* root;
    public:
        // add function
        void add(int val){
            Node* root = this->root;
            if()
        }

        void findAndAddValue(int val, Node* node);

        // delete function


        // search function

}

void BTree::findAndAddValue(int val, Node* node) {
    // traverse left
    if(val < node->val) {
        if(node->leftNode == nullptr) {
            // create new node and assign
            Node* leftNode = new Node(val);
            node->leftNode = leftNode;
        } else {
            findAndAddValue(int val, node->left);
        }
    // traverse right
    } else {
        if(node->rightNode == nullptr) {
            Node* rightNode = new Node(val);
            node->rightNode = rightNode;
        } else {
            findAndAddValue(val, node->rightNode);
        }
    }
};

