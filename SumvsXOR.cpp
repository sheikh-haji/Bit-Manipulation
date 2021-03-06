#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the sumXor function below.
long sumXor(long n)
{
 /*int c=0;
 int x;
 long sum=0;
 long sum_xor;
 for(x=0;x<=n;x++)
  {
    sum+=n+x;
    sum_xor+=n^x;
    if(sum==sum_xor)
      c++;
    sum=0;
    sum_xor=0;
  }
return c;*/
long c = 0;
while(n)
{
     c += n%2?0:1;
     n/=2; 
}
c=pow(2,c);
return c;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    long n = stol(ltrim(rtrim(n_temp)));

    long result = sumXor(n);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
