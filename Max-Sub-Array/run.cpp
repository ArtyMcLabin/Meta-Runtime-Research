#include <iostream>
#include <cstdlib>
#include <string>


int main(int argc, char* argv[])
{

    argc--;

    std::string str;
    for(int i=1;i<=argc;i++){
        str+=std::string(argv[i])+',';
    }



#ifdef OS_WINDOWS
    str = "@g++ --std=c++14 main.cpp -fconstexpr-depth=10000 -O3 -DEXPR=\""+str.substr(0,str.size()-1)+"\" -o meta.exe";
    system(str.c_str());
    system("@meta.exe");
#else
    str = "g++ --std=c++14 main.cpp -fconstexpr-depth=10000 -O3 -DEXPR=\""+str.substr(0,str.size()-1)+"\" -o meta.exe";
    system(str.c_str());
    system("./meta.exe");
#endif


    return 0;
}
