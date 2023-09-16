#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int xmuly = yellow;
    int xsumy = (brown - 4) / 2;
    
    for(int i = 1; i <= xsumy / 2; ++i){
        if((xsumy - i) * i == xmuly){
            answer.push_back(xsumy - i + 2);
            answer.push_back(i + 2);
            break;
        }
    }
    
    return answer;
}
