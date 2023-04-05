<p>&nbsp;tset //</p>

<p>&nbsp;</p>

<p>bool isMatch(string s, string p) { vector&gt; dp(s.size()+1, vector(p.size()+1, false)); dp[0][0] = true; for(int j=1; j&lt;=p.size(); j++) { if(p[j-1]==&#39;*&#39;) dp[0][j] = true; else break; } for (int i=1; i&lt;=s.size(); i++) { for (int j=1; j&lt;=p.size(); j++) { if (s[i-1] == p[j-1] || p[j-1] == &#39;?&#39;) dp[i][j] = dp[i-1][j-1]; else if (p[j-1] == &#39;*&#39;) dp[i][j] = dp[i][j-1] || dp[i-1][j]; } } return dp.back().back(); } bool isMatch(string s, string p) { vector&gt; dp(s.size()+1, vector(p.size()+1, false)); dp[0][0] = true; for(int j=1; j&lt;=p.size(); j++) { if(p[j-1]==&#39;*&#39;) dp[0][j] = true; else break; } for (int i=1; i&lt;=s.size(); i++) { for (int j=1; j&lt;=p.size(); j++) { if (s[i-1] == p[j-1] || p[j-1] == &#39;?&#39;) dp[i][j] = dp[i-1][j-1]; else if (p[j-1] == &#39;*&#39;) dp[i][j] = dp[i][j-1] || dp[i-1][j]; } } return dp.back().back(); }</p>

<p>&nbsp;</p>
