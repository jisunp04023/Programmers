#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> uniform(n, 1);
    
    for(int i = 0; i < reserve.size(); ++i){
        uniform[reserve[i] - 1]++;
    }
    
    for(int i = 0; i < lost.size(); ++i){
        uniform[lost[i] - 1]--;
    }
    
    for(int i = 0; i < n; ++i){
        if(uniform[i] == 0){
            if(i == 0 && uniform[i + 1] == 2){
                uniform[i] = 1;
                uniform[i + 1] = 1;
            }
            else if(i == n - 1 && uniform[i - 1] == 2){
                uniform[i] = 1;
                uniform[i - 1] = 1;
            }
            else if(uniform[i - 1] == 2){
                uniform[i] = 1;
                uniform[i - 1] = 1;
            }
            else if(uniform[i + 1] == 2){
                uniform[i] = 1;
                uniform[i + 1] = 1;
            }
        }
        
    }
    
    for(int i = 0; i < n; ++i){
        if(uniform[i] == 0){
            answer++;
        }
    }
    
    
    return n - answer;
}
