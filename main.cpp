#include "libs/libs.h"
// #include <windows.h>
using namespace std;

int main()
{
    // std::cout << "Hello, world!" << std::endl;

    HanhKhach hk;

    string IDV = "";
    IDV = InputXau(IDV);

    std::cout << "X: " << IDV;
    VeMayBay *veBay = new VeMayBay("A12", hk);
    // DSMB dsmb;
    // // MayBay mb("N21","AIRBUSS",5,20);
    // // New_MB(mb);
    // cout<<"Co rong hay khong: ";
    // cout<<Is_Empty(dsmb)<<endl;


    return 0;
}