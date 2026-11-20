#include <vector>
#include <list>

using namespace std;





struct Node {
    char label;
    vector<char> outgoing;
};




class Stack {
private:
    std::vector<char> items;

public:
    void push(char label) {
        items.push_back(label);
    }

    void pop() {
        if (empty()) {
            throw std::out_of_range("Cannot pop an empty stack");
        }

        items.pop_back();
    }

    char top() const {
        if (empty()) {
            throw std::out_of_range("An empty stack has no top");
        }

        return items.back();
    }

    bool empty() const {
        return items.empty();
    }
};



vector<Node> graph = {
    {'A', {'B', 'F'}},
    {'B', {'D', 'N'}},
    {'C', {'A', 'F', 'M'}},
    {'D', {'N'}},
    {'E', {'H'}},
    {'F', {'D', 'M'}},
    {'G', {'M'}},
    {'H', {}},
    {'I', {'G', 'M'}},
    {'L', {'G'}},
    {'M', {'E', 'H'}},
    {'N', {'O'}},
    {'O', {'I', 'L'}}
};




list TopologicalSort(const vector<Node>& graph)
{
    list L = {}; //The list that we will return at the end containing the ordered items
    Stack s;

    while (!stack.empty())
    {

    }

    for (const Node& n : graph)
    {
        char currentVertex = n.label;

        for (char neighbour : n.outgoing)
        {
            s.push(neighbour);
        }
    }

}