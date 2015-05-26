#include <iostream>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

int dp[1025][1025];


int main(){


string s1= "abcdef";
   string s2= "abcdgggg";
   int l1=s1.length();
   int l2=s2.length();


   for(int i=0;i<=l1;i++){
        for(int j=0;j<=l2;j++){
            if(i==0||j==0)
                dp[i][j]=0;
            else if (s1[i-1]==s2[j-1])
                dp[i][j]=dp[i-1][j-1]+1;
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
   }

int val= dp[l1][l2];
vector<char> lcs;
int i = l1+1, j = l2+1;
   while (i > 0 && j > 0)
   {
      if (s1[i-1] == s2[j-1])
      {
          lcs.push_back(s1[i-1]);

          i--; j--;// val--;
      }
      else if (dp[i-1][j] > dp[i][j-1])
         i--;
      else
         j--;
   }
reverse(lcs.begin(),lcs.end());

vector<char>:: iterator it;
    for( it=lcs.begin();it<lcs.end();it++)
        cout<<*it;


return 0;
}
