#include <algorithm>
#include <vector>
using namespace std;

int main(){
vector<int> v = {4, 1, 3, 2};
sort(v.begin(), v.end());           // Sort in ascending order
sort(v.rbegin(), v.rend());         // Sort in descending order

return 0;
}