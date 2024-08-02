#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* buildTree(vector<int>& inorder, vector<int>& preorder, int inStart, int inEnd, int preStart, int preEnd) {
    if (inStart > inEnd || preStart > preEnd)
        return nullptr;

    int rootVal = preorder[preStart];
    TreeNode* root = new TreeNode(rootVal);

    int rootIndexInorder;
    for (rootIndexInorder = inStart; rootIndexInorder <= inEnd; ++rootIndexInorder) {
        if (inorder[rootIndexInorder] == rootVal)
            break;
    }

    int leftSubtreeSize = rootIndexInorder - inStart;

    root->left = buildTree(inorder, preorder, inStart, rootIndexInorder - 1, preStart + 1, preStart + leftSubtreeSize);
    root->right = buildTree(inorder, preorder, rootIndexInorder + 1, inEnd, preStart + leftSubtreeSize + 1, preEnd);

    return root;
}

void postorderTraversal(TreeNode* root) {
    if (root) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->val << " ";
    }
}

void solve() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> inorder(N), preorder(N);
        for (int i = 0; i < N; ++i)
            cin >> inorder[i];
        for (int i = 0; i < N; ++i)
            cin >> preorder[i];

        TreeNode* root = buildTree(inorder, preorder, 0, N - 1, 0, N - 1);
        postorderTraversal(root);
        cout << endl;
    }
}

int main() {
    solve();
    return 0;
}
