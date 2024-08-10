#include "model/Node.cc"
#include <unordered_map>

class CopyLL {
public:
    Node* copyRandomList(Node* head) {
        if (head == nullptr) return nullptr;
        std::unordered_map<Node*, Node*> nodeMap;
        Node* runner = head;
        Node* prev = nullptr;
        Node* newHead = nullptr;
        while (runner != nullptr) {
            Node* curr = findOrCreateNode(nodeMap, runner);
            Node* randomNode = findOrCreateNode(nodeMap, runner->random);
            if (prev != nullptr) {
                prev->next = curr;
            }
            curr->random = randomNode;
            prev = curr;
            runner = runner->next;
            if (newHead == nullptr) {
                newHead = curr;
            }
        }

        return newHead;
    }

private:
    Node* findOrCreateNode(std::unordered_map<Node*, Node*>& nodeMap, Node* key) {
        if (key == nullptr) return nullptr;
        Node* newNode;
        if (nodeMap.find(key) != nodeMap.end()) {
            newNode = nodeMap[key];
        } else {
            newNode = new Node(key->val);
            nodeMap[key] = newNode;
        }

        return newNode;
    }
};