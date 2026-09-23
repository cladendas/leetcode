// 590. N-ary Tree Postorder Traversal

#include "libraries.cpp"

class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};


class Solution {
public:
    // recursive
    // vector<int> postorder(Node* root) {
    //     if (root == nullptr) {
    //         return {};
    //     }
    //     vector<int> result;
    //     vector<int> tmpResult;
    //     for(int i = 0; i < root->children.size(); i++) {
    //         tmpResult = postorder(root->children[i]);
    //         result.insert(result.end(), tmpResult.begin(), tmpResult.end());
    //     }
    //     result.emplace_back(root->val);
    //     return result;
    // }

    //iteratively
    vector<int> postorder(Node* root) {
        if (root == nullptr) {
            return {};
        }

        vector<int> result;
        vector<Node*> current{root};

        current.reserve(1000);

        Node* tmpNode;

        while(!current.size()) {
            result.push_back(current.back()->val);

            tmpNode = current.back();
            for(int i = 0; i < tmpNode->children.size(); i++) {
                current.insert(current.end(), tmpNode->children.begin(), tmpNode->children.end());
            }
        }
        return result;
    }
};