#include<bits/stdc++.h>
using namespace std;

vector<int>Generate(vector<int>&arr,int i)
{
    int j=0;
    for(j=0 ; j<i ; j++)
    {
     arr.push_back(rand());
    }
    return arr;
}
void store(int i , int avg)
{
  cout<<i<<" "<<avg<<endl;
}

void tt_ff(string s, int len)
{
  if (s.length() == len)
  {
    // cout << s << endl;
    return;
  }
  s = s + "T";
  tt_ff(s, len + 1);
  s = s + "F";
  tt_ff(s, len + 1);
}

void AC()
{   
    int i=0;
    int k=0;
    double avg = 0;
    vector<int>arr; 
    for(i=500 ; i<=4000 ; i+=500)
    {
      arr = Generate(arr,i);
      for(k=1 ; k<=10 ; k++)
      {
        clock_t clk = clock();
        tt_ff("abc",3);
        clock_t clk2 = clock();
        avg+= (clk2-clk);
      }
      avg = avg/1000;
      store(i,avg);
}
}

int main()
{
    clock_t clk = clock();
    tt_ff("abc",3);
    clock_t clk2 = clock();
    cout<<(clk2-clk)<<" ";
    return 0;
}
