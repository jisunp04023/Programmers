#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int maxw = 0; // 긴쪽
    int maxh = 0; // 짧은쪽
    
    
    for(int i = 0; i < sizes.size(); i++){
        int s, b;
        
        if(sizes[i][0] < sizes[i][1]){
            s = sizes[i][0];
            b = sizes[i][1];
        }
        else{
            s = sizes[i][1];
            b = sizes[i][0];
        }
        
        if(maxw < b){
            maxw = b;
        }
        if(maxh < s){
            maxh = s;
        }
    }
    
    return maxw * maxh;
}
