#include <bits/stdc++.h>

using namespace std;

void explainPair()
{
    pair<int,int> p1 = {1,3};
    cout << p1.first<<"\t"<< p1.second<<endl;

    pair<int,pair<int,int>>  p2 = {1, {3, 4}};
    cout<<p2.first<<"\t"<<p2.second.first << "  " << p2.second.second<<endl;

    pair<int,int> arry[] = {{1, 2}, {2, 3}, {3, 4}, {4, 5}};
    cout<<arry[3].second<<endl;

}

void explainVector()
{
    vector<int> v1;
    v1.push_back(1);//adding element to the vector object
    v1.emplace_back(2);//adding element to the vector object but a little bit faster than push_back
    v1.push_back(6);
    v1.emplace_back(4);
    v1.push_back(9);
    v1.emplace_back(5);

    vector<pair<int,int>> v2;
    v2.push_back({1,2});//adding pair data type to the vector object in push_back we have to use { } for pair
    v2.emplace_back(1,2);//adding pair data type to the vector without { }

    vector<int> v3(5,100);//fills five indexes with 100
    vector<int> v4(3,20);//files 3 indexes with 20
    vector<int> v5(v1);


    vector<int>::iterator it = v1.begin();
    it++;
    cout << *(it)<<" ";

    cout << endl;
    it = it += 2;
    cout << *(it)<<" ";

    /*vector<int>::iterator it2 = v5.end();
    vector<int>::iterator it3 = v5.rend();
    vector<int>::iterator it4 = v5.rbegin();*/

    cout << endl;
    cout << v1[0] << " " << v1.at(0);
    cout << v1.back() << " ";

    for(vector<int>::iterator it5 = v1.begin(); it5 != v1.end(); it++)
    {
        cout << *(it5) << " ";
    }
    cout << endl;
    for(auto it6 = v1.begin(); it6 != v1.end(); it6++)
    {
        cout << *(it) << " ";
    }

    for(auto it : v1)
    {
        cout << it << " ";
    }
    cout << endl;
    /*
    v1.erase(begin() + 1);
    v5.erase(begin() + 2,begin() 3);*/

    /*
    vector<int> v6(2,100); // { 100, 100 }
    v6.insert(v6.begin(), 300); // { 300, 100, 100 }
    v6.insert(v6.begin(), 1, 2, 10); // { 300, 10, 10, 100, 100 }*/

    cout << v5.size() <<endl; // 4

}

void explainList()
{
    list<int> ls;
    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2, 4}
    ls.push_front(5); //{5, 2, 4}

    // rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size.
}

void explainStack()
{
    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{1, 2}
    st.push(3); //{1, 2, 3}
    st.push(3); //{1, 2, 3, 3}
    st.emplace(5); //{1, 2, 3, 3, 5}

    cout << st.top() << endl; // prints 5 "** st[2] is invalid **"
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    cout << st.empty() << endl;

}

int main()
{
    explainStack();
}
