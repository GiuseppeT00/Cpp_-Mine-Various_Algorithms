#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) { }
};

int partition(vector<int>& V, int l, int r) {
    int i = l - 1, j = r;
    int p_index = r;
    int pivot = V[p_index];
    while (i < j)
    {
        do
        {
            if (i == j) break;
            i++;
        } while (V[i] < pivot);
        do
        {
            if (j == i) break;
            j--;
        } while (pivot < V[j]);
        if (i != j) swap(V[i], V[j]);
    }
    if (i != p_index) swap(V[i], V[p_index]);
    return i;
}

void quickSort(vector<int>& V, int l, int r) {
    if (l >= r) return;
    int p = partition(V, l, r);
    quickSort(V, l, p - 1);
    quickSort(V, p + 1, r);
}

void fillV(vector<int>& V, TreeNode* root) {
    queue<TreeNode*> Q;
    Q.push(root);
    while (!Q.empty()) {
        root = Q.front();
        Q.pop();
        V.push_back(root->val);
        if (root->left != NULL) Q.push(root->left);
        if (root->right != NULL) Q.push(root->right);
    }
}

vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
    vector<int> L;
    if (root1 == NULL && root2 == NULL) return L;
    
    if (root1 != NULL) fillV(L, root1);
    if(root2 != NULL) fillV(L, root2);
    
    quickSort(L, 0, L.size() - 1);
    return L;
}

int main() {
    

    return 0;
}