#include<bits/stdc++.h>
 using namespace std;

   vector<string> winner(string arr[],int n)
    {
        // Your code here
        // Return the string containing the name and an integer
        // representing the number of votes the winning candidate got\
           unordered_map<string, int> voteCount;
    unordered_map<string, int> voteCount;
    // Count votes for each candidate
    for (int i=0; i<n; i++) {
        voteCount[arr[i]]++;
    }

    // Find the candidate with the maximum count
    string winner = "";
    int maxVotes = INT_MIN;

    for (auto entry : voteCount) {
        // const string& candidate = entry.first;
        // const int& votes = entry.second;

        if (maxVotes < entry.second || (maxVotes == entry.second && entry.first < winner)) {
           maxVotes = entry.second;
           winner = entry.first;
        }
    }

    return {winner, to_string(maxVotes)};
    }


int main(){
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++)
    {
        
        
        int n;
        cin>>n;
        
        string arr[n];
        
        for (int i=0;i<n;i++)
        cin>>arr[i];
        
        vector<string> result = winner(arr,n);
        
        cout<<result[0] << " " << result[1] << endl;
    }

return 0;}
