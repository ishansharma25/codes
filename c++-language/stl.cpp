#include<bits/stdc++.h>
using namespace std;
void explainpair()
{
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second;
    pair<int,pair<int,int>> p1={1,{3,2}};
    cout<<"\n"<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second;
    pair<int,int> arr[]={{1,2},{2,5},{5,1}};
    cout<<"\n"<<arr[1].second;
}

void explainvecotr()
{
    /*LIST DEQUE SAME TO VECTOR*/
    vector<int> p;
    p.push_back(1);
    p.emplace_back(2);
    
   // vector<int> v(5,20);
    vector<int> v={20,21,22,23,24,25};
    vector<int>::iterator i=v.end();//here i contain address
    //vector<int>::iterator i=v.rend();
    //vector<int>::iterator i=v.rbegin();
    /*cout<<*i<<" ";
  for(int i:v)
    cout<<i<<" ";*/

/*-------------------ERACE-----------------*/

    /*v.erase(v.begin()+1);
    v.erase(v.begin()+1,v.begin()+3);
    for(int i:v)
    cout<<i<<" ";*/



/*------------------INSERT----------------*/

//v.insert(v.begin(),100);
v.insert(v.begin(),2,10);
vector<int> copy(2,100);
v.insert(v.begin(),copy.begin(),copy.end());
for(int i:v)
    cout<<i<<" ";

cout<<"\n\n";


/*v.empty,v.clear()*/



}


void explainstack()
{
    /*FIRST IN LAST OUT*/
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.pop();
    
    cout<<st.top()<<"\n";
    cout<<st.size()<<"\n";
    cout<<st.empty()<<"\n";
}

void explainqueue()
{
    /*FIRST IN FIRSTs OUT*/
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.pop();
    
    cout<<q.front()<<"\n";
    
    cout<<q.back()<<"\n";
    cout<<q.size()<<"\n";
    cout<<q.empty()<<"\n";
}

void explainpq()
{
    priority_queue<int> pq;
    pq.push(110);
pq.push(220);
pq.push(3);
pq.push(4);
pq.pop();

cout<<pq.top()<<"\n";
    cout<<pq.size()<<"\n";
    cout<<pq.empty()<<"\n";

}
void explainset()
{
    set < int > s;
  for (int i = 1; i <= 10; i++) {
    s.insert(i);
  }

  cout << "Elements present in the set: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;
  int n = 2;
  if (s.find(2) != s.end())
    cout << n << " is present in set" << endl;

  s.erase(s.begin());
  cout << "Elements after deleting the first element: ";
  for (auto it = s.begin(); it != s.end(); it++) {
    cout << * it << " ";
  }
  cout << endl;

  cout << "The size of the set is: " << s.size() << endl;

  if (s.empty() == false)
    cout << "The set is not empty " << endl;
  else
    cout << "The set is empty" << endl;
  s.clear();
  cout << "Size of the set after clearing all the elements: " << s.size();
}
int main()
{
   // explainpair();
    //explainvecotr();
   // explainstack();
   //explainqueue();
   //explainpq();
   explainset();
    
    return 0;
}