// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// A Binary Tree Node
struct Node
{
	int data;
	Node* left;
	Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val)
{
	Node* temp = new Node;
	temp->data = val;
	temp->left = NULL;
	temp->right = NULL;

	return temp;
}

// Function to Build Tree
Node* buildTree(string str)
{
	// Corner Case
	if (str.length() == 0 || str[0] == 'N')
		return NULL;

	// Creating vector of strings from input
	// string after spliting by space
	vector<string> ip;

	istringstream iss(str);
	for (string str; iss >> str; )
		ip.push_back(str);

	// Create the root of the tree
	Node* root = newNode(stoi(ip[0]));

	// Push the root to the queue
	queue<Node*> queue;
	queue.push(root);

	// Starting from the second element
	int i = 1;
	while (!queue.empty() && i < ip.size()) {

		// Get and remove the front of the queue
		Node* currNode = queue.front();
		queue.pop();

		// Get the current node's value from the string
		string currVal = ip[i];

		// If the left child is not null
		if (currVal != "N") {

			// Create the left child for the current node
			currNode->left = newNode(stoi(currVal));

			// Push it to the queue
			queue.push(currNode->left);
		}

		// For the right child
		i++;
		if (i >= ip.size())
			break;
		currVal = ip[i];

		// If the right child is not null
		if (currVal != "N") {

			// Create the right child for the current node
			currNode->right = newNode(stoi(currVal));

			// Push it to the queue
			queue.push(currNode->right);
		}
		i++;
	}

	return root;
}

Node* pointer(Node* root, int n)
{
	if (root == NULL)
		return NULL;

	if (root->data == n)
		return root;

	Node* l = pointer(root->left, n);
	if (l != NULL && l->data == n)
		return l;

	Node* r = pointer(root->right, n);
	return r;

}


 // } Driver Code Ends
//User function Template for C++

/*
// A Binary Tree Node
struct Node
{
	int data;
	Node* left;
	Node* right;
};*/

class Solution
{
    public:
    int h=-1;
    Node *p=NULL;;
    void height(Node *root,Node *s,int num,Node *parent)
    {
        if(root==NULL)
            return ;
            
        if(root==s){
            h=num;
            p=parent;
            return;
        }
        height(root->left,s,num+1,root);
        height(root->right,s,num+1,root);
    }
    void bucket(Node *root,int d,Node *parent,Node* ntf,vector<int>&ans)
    {
        if(root==NULL)
            return;
            
        if(root!=ntf&&d==h&&parent!=p){
            ans.push_back(root->data);
            return;
        }
        bucket(root->left,d+1,root,ntf,ans);
        bucket(root->right,d+1,root,ntf,ans);
    }
    vector<int> printCousins(Node* root, Node* ntf)
    {
        height(root,ntf,0,NULL);
        if(h==-1||h==0)
            return {-1};
        vector<int> ans;
        bucket(root,0,NULL,ntf,ans);
        if(ans.size()==0)
            ans.push_back(-1);
        return ans;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	getchar();
	while (t--)
	{
		int n;
		cin >> n;
		getchar();

		string inp;
		getline(cin, inp);
		
		struct Node* root = buildTree(inp);

		Node* p = pointer(root, n);

        Solution ob;
		vector<int> ans = ob.printCousins(root, p);

		for (int i = 0; i < ans.size(); i++)
			cout << ans[i] << " ";

		cout << "\n";


	}

	return 0;
}

  // } Driver Code Ends