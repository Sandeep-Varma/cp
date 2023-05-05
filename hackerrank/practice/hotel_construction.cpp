#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);


/*
 * Complete the 'numberOfWays' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts 2D_INTEGER_ARRAY roads as parameter.
 */

int numberOfWays(vector<vector<int>> roads) {
    int n = roads.size()+1;
    vector<vector<int>> v(n);
    for (auto x:roads){
        v[x[0]-1].push_back(x[1]-1);
        v[x[1]-1].push_back(x[0]-1);
    }
    int ans = 0;
    for (int x=0; x<n; x++){
        vector<vector<vector<int>>> m;
        for (auto nvx:v[x]) m.push_back({{nvx,x}});
        while(m.size()>=3){
            for (int a=0; a<m.size(); a++){
                for (int b=a+1; b<m.size(); b++){
                    for (int c=b+1; c<m.size(); c++){
                        ans += m[a].size()*m[b].size()*m[c].size();
                    }
                }
            }
            vector<vector<vector<int>>> m1;
            for (auto e:m){
                m1.push_back({});
                for (auto f:e){
                    for (auto g:v[f[0]]) if (g != f[1]) m1[m1.size()-1].push_back({g,f[0]});
                }
                if (m1[m1.size()-1].size() == 0) m1.pop_back();
            }
            m = m1;
        }
    }
    return ans;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string roads_rows_temp;
    getline(cin, roads_rows_temp);

    int roads_rows = stoi(ltrim(rtrim(roads_rows_temp)));

    string roads_columns_temp;
    getline(cin, roads_columns_temp);

    int roads_columns = stoi(ltrim(rtrim(roads_columns_temp)));

    vector<vector<int>> roads(roads_rows);

    for (int i = 0; i < roads_rows; i++) {
        roads[i].resize(roads_columns);

        string roads_row_temp_temp;
        getline(cin, roads_row_temp_temp);

        vector<string> roads_row_temp = split(rtrim(roads_row_temp_temp));

        for (int j = 0; j < roads_columns; j++) {
            int roads_row_item = stoi(roads_row_temp[j]);

            roads[i][j] = roads_row_item;
        }
    }

    int result = numberOfWays(roads);

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

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
