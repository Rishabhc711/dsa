
/******************************************
* AUTHOR : Abhishek Naidu *
* NICK : abhisheknaiidu *
******************************************/

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;

#define all(n)          n.begin(),n.end()
#define REP(i,a,n)      for (int i=a; i<=n; i++)
#define N               101
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define f               first
#define s               second
#define int             long long int
#define pb              push_back
#define mp              make_pair
#define inf             1e18
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


void abhisheknaiidu()
{
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

struct Node {
	int data;
	Node * left, *right;
	Node(int x) {
		data = x;
		left = right = NULL;
	}
};

void levelOrder(Node *root) {
	if (root == NULL) return;

	queue <Node*> q;
	// Pushed the address of the root to the front of the queue
	q.push(root);

	while (!q.empty()) {
		Node *current = q.front();
		cout << current->data << " ";
		if (current->left != NULL) q.push(current->left);
		if (current->right != NULL) q.push(current->right);
		// Removing the element at the front
		q.pop();

	}
}

void inOrder(Node *root) {
	if (root == NULL) return;

	// Stores the address of left node
	inOrder(root->left);
	cout << root->data << " " ;
	// Stores the address of right node
	inOrder(root->right);
}

int32_t main()
{
	abhisheknaiidu();

	Node* root = new Node(10);
	root->left = new Node(11);
	root->left->left = new Node(7);
	root->right = new Node(9);
	root->right->left = new Node(15);
	root->right->right = new Node(8);

	// inOrder(root);
	levelOrder(root);

	return 0;
}

