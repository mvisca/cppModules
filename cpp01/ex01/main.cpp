#include "Zombie.hpp"

int main(int ac, char **av) {

    int         N = 0;
    int         i = 0;
    std::string name = "Pepito";

    while (ac > 1 && av[1][i] >= '0' && av[1][i] <= '9' && i < 5) {
        N *= 10;
        N += av[1][0] - '0';
        i ++;
    }
    
    if (N == 0) {
        N = 3;
    }

    Zombie* horde = zombieHorde(N, name);
    
    for (int i = 0; i < N; i++) {
        std::cout << "Zombie[" << i << "] : " << name << "." << std::endl;
    }
    delete[] horde;
}