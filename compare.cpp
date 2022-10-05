#include<bits/stdc++.h>
using namespace std;


void compare(vector<char>p,vector<char>q)
{
    long long int i;
    long long int n1=p.size();
    long long int n2=q.size();
    if(n1!=n2)
    {
        cout<<"File are not same!!";
    }
    else
    {
        for(i=0;i<n1;i++)
        {
            if(p[i]!=q[i])
            {
                cout<<"Files are not same";
                return;
            }
        }
    }
    cout<<"Both files are Same!!";
    
}
  
// Driver code
int main()
{
    // opening both file in read only mode
    string filename1("file.txt");
    string filename2("Decoded_file.txt");
    ifstream input_1(filename1);
    ifstream input_2(filename2);
    if (!input_1.is_open()) {
        cerr << "Could not open the file - '"
             << filename1 << "'" << endl;
        return EXIT_FAILURE;
    }
    if (!input_2.is_open()) {
        cerr << "Could not open the file - '"
             << filename2 << "'" << endl;
        return EXIT_FAILURE;
    }
    vector<char>p;
    char byte=0;
    vector<char>q;
    while (input_1.get(byte)) {           //storing the characters in a input file.
        p.push_back(byte);
    }
    while (input_2.get(byte)) {           //storing the characters in a input file.
        q.push_back(byte);
    }
    compare(p,q);
    
   
    return 0;
}