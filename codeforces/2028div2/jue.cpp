#include<iostream>
#include<string>
using namespace std;
string fx(){
    int n;
    cin >> n;
    int arr[n];
    int tmp;
    for(int i = 0;i < n;i++){
        cin >> tmp;
        arr[i] = tmp;
    }
    int af;
    bool bo = true;
    bool bo1;
    for(int i = 0;i < n-1;i++){
        af = arr[i] - arr[i+1];
        bo1 = ((af == 5) || (af == -5) || (af == 7) || (af == -7)) ? true : false;
        bo = bo && bo1;
        if(bo == false){
            return "NO";
        }
    }
    return "YES";
}

int main(){
    int n;
    cin >> n;
    string ans[n] = {" "};
    for(int i = 0;i < n;i++){
        ans[i] = fx();
    }
    for(const auto& anss : ans){
        cout << anss << endl;
    }
    system("pause");
    return 0;
}