
#include <iostream>
//what is the complexity of this loop?
int loop1() {
    int n=8;
    std::cout << "Loop 1" << std::endl;
    for (int i = 1; i <= n; i = i * 2){ //log n base 2
        std::cout << i << std::endl;
    }
}
//what is the complexity of this loop?
int loop2() {
    int n=8;
    std::cout << "Loop 2" << std::endl;

    for (int i = 1; i <= n; i++){ //n
        std::cout << i << std::endl;
        for (int j=1;j<=n;j=j*2){ // log n base 2
            std::cout << j << std::endl;
        }

    }
    //nlogn
}

//what is the complexity of this loop?
void loop3(){
    int n=8;
    std::cout << "Loop 3" << std::endl;
    for(int i = 0; i <= n; i++)  //n
    {
        std::cout << i << std::endl;
        for(int j = 0; j <= n; j = j + 2) //n
        {
            std::cout << j << std::endl;
        }
    }

}
//still n^2
