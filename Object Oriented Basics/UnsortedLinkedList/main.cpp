#include<bits/stdc++.h>
using namespace std;
struct NodeType {
int i;
int *j;
};

int main () {
NodeType a;
NodeType *n;
n = &a; // static allocation
NodeType *n2;
  n2 = new NodeType; //dynamic allocation
  
  n->i = 5;
  n->j = new int;
  *(n->j) = 5;
  /*
  NodeType *j ;
  n->i->j = 100;
  
  new ob j
  
  n->j->j = new NodeType
  
  */

}