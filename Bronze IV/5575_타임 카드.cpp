#include<iostream>
using namespace std;
int start_h, start_m, start_s;
int end_h, end_m, end_s;
void solve(){
    int h, m, s;
    int end_total = end_h * 60 * 60 + end_m * 60 + end_s;
    int start_total = start_h * 60 * 60 + start_m * 60 + start_s;
    int working_total= end_total - start_total;
    h = working_total / 3600;
    working_total %= 3600;
    m = working_total / 60;
    working_total %= 60;
    s = working_total;
    cout << h << " " << m << " " << s << "\n";
}
int main(){
    for (int i = 0; i < 3; i++)
    {
        cin >> start_h >> start_m >> start_s;
        cin >> end_h >> end_m >> end_s;
        solve();
    }   
    return 0;
}