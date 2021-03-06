#include <iostream>
#include <vector>
using namespace std;

class TravelingSalesman
{
public:
    auto solve (
        const int N, 
        const vector<int> x,
        const vector<int> y)
    {
        vector<int> v(N);
        
        for (int i = 0; i < N; i++) {
            v[i] = i;
        }
         
        return v;
    }
};

int main ()
{
    int N; 
    cin >> N;

    vector<int> x(N), y(N);
    for (int i = 0; i < N; i++) {
        cin >> x[i] >> y[i];
    }

    TravelingSalesman ts;
    vector<int> v = ts.solve(N, x, y);
    for (auto vt: v) {
        cout << vt << endl;
    }

    cout.flush();
    
    return 0;
}
