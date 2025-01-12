#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> get_winners(vector<vector<int>> teams) {
    vector<vector<int>> results;
    
    // Step 1: store each team's total eliminations and highest individual eliminations
    vector<vector<int>> team_info;
    for (int i = 0; i < teams.size(); i++) {
        int total_eliminations = 0;
        int highest_individual_elimination = 0;
        
        // Step 2: calculate total eliminations and find the highest elimination in the team
        for (int elimination : teams[i]) {
            total_eliminations += elimination;
            highest_individual_elimination = max(highest_individual_elimination, elimination);
        }
        
        team_info.push_back({i + 1, total_eliminations, highest_individual_elimination});
    }

    // Step 3: write a custom sort function to sort by total eliminations (desc) and then by highest individual eliminations (desc)
    sort(team_info.begin(), team_info.end(), [](vector<int>& a, vector<int>& b) {
        if (a[1] != b[1]) {
            return a[1] > b[1];  // Sort by total eliminations in descending order
        } else {
            return a[2] > b[2];  // If totals are the same, sort by highest individual eliminations
        }
    });
    
    // Step 4: find the highest total eliminations
    int max_total = team_info[0][1];
    int max_highest_individual = team_info[0][2];
    
    // Step 5: collect teams with the highest total eliminations and highest individual eliminations
    for (auto& team : team_info) {
        if (team[1] == max_total && team[2] == max_highest_individual) {
            results.push_back(team);
        }
    }
    
    return results;
}

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> teams;
    for (int i = 0; i < n; i++) {
        int team_size;
        cin >> team_size;
        vector<int> team(team_size);
        for (int j = 0; j < team_size; j++) {
            cin >> team[j];
        }
        teams.push_back(team);
    }
    
    vector<vector<int>> result = get_winners(teams);
    for(int i = 0; i < result.size(); i++) {
        if(i == result.size() - 1) {
            cout << result[i][0] << " " << result[i][1] << " " << result[i][2];
        } else {
            cout << result[i][0] << " " << result[i][1] << " " << result[i][2] << endl;
        }
    }   

    return 0;
}