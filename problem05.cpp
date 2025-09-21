/*
5. Profit or loss selling 25 bananas given cost and selling price per dozen
Input: cost_per_dozen selling_price_per_dozen
*/
#include <iostream>
using namespace std;
int main(){
    double cp_dozen, sp_dozen;
    if(!(cin>>cp_dozen>>sp_dozen)) return 0;
    double cp_single = cp_dozen / 12.0;
    double sp_single = sp_dozen / 12.0;
    double profit_per_25 = (sp_single - cp_single) * 25.0;
    if (profit_per_25 >= 0)
        cout << "Profit " << profit_per_25 << endl;
    else
        cout << "Loss " << -profit_per_25 << endl;
    return 0;
}
